//{{{  includes
#include "nrf_gpio.h"
#include "pca20020.h"
#include "nrf_dfu_settings.h"
#include "nrf_dfu_utils.h"
#include "support_func.h"
//}}}
#define BOOTLOADER_DFU_START 0xB1

static const nrf_drv_twi_t m_twi_sensors = NRF_DRV_TWI_INSTANCE (TWI_SENSOR_INSTANCE);
static const drv_ext_light_conf_t led_config[DRV_EXT_LIGHT_NUM] = DRV_EXT_LIGHT_CFG;

static const nrf_drv_twi_config_t twi_config = {
  .scl                = TWI_SCL,
  .sda                = TWI_SDA,
  .frequency          = NRF_TWI_FREQ_100K,
  .interrupt_priority = APP_IRQ_PRIORITY_LOW
  };
static const drv_sx1509_cfg_t sx1509_cfg = { 
  .twi_addr       = SX1509_ADDR,
  .p_twi_instance = &m_twi_sensors,
  .p_twi_cfg      = &twi_config
  };
static const drv_ext_gpio_init_t ext_gpio_init = {.p_cfg = &sx1509_cfg};

static void leds_init() {
  static const drv_ext_light_init_t led_init = {
    .p_light_conf = led_config,
    .num_lights   = DRV_EXT_LIGHT_NUM,
    .clkx_div     = DRV_EXT_LIGHT_CLKX_DIV_8,
    .p_twi_conf   = &sx1509_cfg,
    };
  APP_ERROR_CHECK (drv_ext_light_init(&led_init, true));
  }

static void leds_on() {
  static drv_ext_light_rgb_sequence_t sequence = {
    .color = DRV_EXT_LIGHT_COLOR_YELLOW,
    .sequence_vals = {
      .on_time_ms       =  40,
      .on_intensity     =  60,
      .off_time_ms      =  85,
      .off_intensity    =  10,
      .fade_in_time_ms  = 250,
      .fade_out_time_ms = 450
      }
    };

  (void)drv_ext_light_rgb_sequence (DRV_EXT_RGB_LED_LIGHTWELL, &sequence);
  }

//{{{
bool nrf_dfu_enter_check()
{

    if (nrf_gpio_pin_read(BUTTON) == 0)
    {
        leds_on();
        return true;
    }

    if(NRF_POWER->GPREGRET == BOOTLOADER_DFU_START)
    {
        leds_on();
        return true;
    }

    if (s_dfu_settings.enter_buttonless_dfu == 1)
    {
        s_dfu_settings.enter_buttonless_dfu = 0;
        APP_ERROR_CHECK(nrf_dfu_settings_write(NULL));
        leds_on();
        return true;
    }

    if (!(nrf_dfu_app_is_valid()))
    {
        leds_on();
    }
    return false;
}
//}}}

uint32_t nrf_dfu_init_user() {
  support_func_configure_io_startup(&ext_gpio_init);
  nrf_gpio_cfg_output(VDD_PWR_CTRL);
  nrf_gpio_pin_set(VDD_PWR_CTRL);
  nrf_gpio_cfg_sense_input(BUTTON, NRF_GPIO_PIN_PULLUP, NRF_GPIO_PIN_SENSE_LOW);

  app_timer_init();
  leds_init();

  return NRF_SUCCESS;
  }
