MAKEFILE_NAME := $(MAKEFILE_LIST)
MAKEFILE_DIR := $(dir $(MAKEFILE_NAME) )
TEMPLATE_PATH = ../../../components/toolchain/gcc
GNU_INSTALL_ROOT := C:/Program Files (x86)/GNU Tools ARM Embedded/4.9 2015q3

NO_ECHO := @
MK      := mkdir
RM      := rm -rf
CC      := '$(GNU_INSTALL_ROOT)/bin/arm-none-eabi-gcc'
AS      := '$(GNU_INSTALL_ROOT)/bin/arm-none-eabi-as'
AR      := '$(GNU_INSTALL_ROOT)/bin/arm-none-eabi-ar' -r
LD      := '$(GNU_INSTALL_ROOT)/bin/arm-none-eabi-ld'
NM      := '$(GNU_INSTALL_ROOT)/bin/arm-none-eabi-nm'
OBJDUMP := '$(GNU_INSTALL_ROOT)/bin/arm-none-eabi-objdump'
OBJCOPY := '$(GNU_INSTALL_ROOT)/bin/arm-none-eabi-objcopy'
SIZE    := '$(GNU_INSTALL_ROOT)/bin/arm-none-eabi-size'

CFLAGS = -DNRF52
CFLAGS += -DNRF52832
CFLAGS += -DNRF52832_XXAA
CFLAGS += -DBLE_STACK_SUPPORT_REQD
CFLAGS += -D__HEAP_SIZE=0
CFLAGS += -DS132
CFLAGS += -DNRF_SD_BLE_API_VERSION=4
CFLAGS += -DNRF52_PAN_12
CFLAGS += -DNRF52_PAN_15
CFLAGS += -DNRF52_PAN_20
CFLAGS += -DNRF52_PAN_30
CFLAGS += -DNRF52_PAN_31
CFLAGS += -DNRF52_PAN_36
CFLAGS += -DNRF52_PAN_51
CFLAGS += -DNRF52_PAN_53
CFLAGS += -DNRF52_PAN_54
CFLAGS += -DNRF52_PAN_55
CFLAGS += -DNRF52_PAN_58
CFLAGS += -DNRF52_PAN_62
CFLAGS += -DNRF52_PAN_63
CFLAGS += -DNRF52_PAN_64
CFLAGS += -DSOFTDEVICE_PRESENT
CFLAGS += -DSWI_DISABLE0
CFLAGS += -DBSP_DEFINES_ONLY
CFLAGS += -DARM_MATH_CM4
CFLAGS += -DMPU9250
CFLAGS += -DEMPL
CFLAGS += -DUSE_DMP
CFLAGS += -DEMPL_TARGET_NRF52
CFLAGS += -DBLE_DFU_APP_SUPPORT
CFLAGS += -DNRF_DFU_SETTINGS_VERSION=1
CFLAGS += -DAUDIO_EQ_DEF=3
CFLAGS += -DHAL_NFC_ENGINEERING_BC_FTPAN_WORKAROUND
CFLAGS += -mcpu=cortex-m4
CFLAGS += -mthumb -mabi=aapcs --std=gnu99
CFLAGS += -Wall -Werror -O3 -g3
CFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
CFLAGS += -ffunction-sections -fdata-sections -fno-strict-aliasing
CFLAGS += -fno-builtin --short-enums
CFLAGS += -DNRF_LOG_USES_RTT
CFLAGS += -DNRF_LOG_USES_RTT=1
CFLAGS += -DNRF_LOG_ENABLED=1

C_SOURCE_FILES += \
$(abspath ../../../source/main.c) \
$(abspath ../../../source/ble_tes.c) \
$(abspath ../../../source/ble_tcs.c) \
$(abspath ../../../source/ble_uis.c) \
$(abspath ../../../source/ble_tms.c) \
$(abspath ../../../source/ble_tss.c) \
$(abspath ../../../source/drivers/drv_gas_sensor.c) \
$(abspath ../../../source/drivers/drv_ccs811.c) \
$(abspath ../../../source/drivers/drv_pressure.c) \
$(abspath ../../../source/drivers/drv_lps22hb.c) \
$(abspath ../../../source/drivers/drv_humidity.c) \
$(abspath ../../../source/drivers/drv_hts221.c) \
$(abspath ../../../source/drivers/drv_ext_light.c) \
$(abspath ../../../source/drivers/drv_ext_gpio.c) \
$(abspath ../../../source/drivers/drv_nfc.c) \
$(abspath ../../../source/drivers/drv_sx1509.c) \
$(abspath ../../../source/drivers/drv_bh1745.c) \
$(abspath ../../../source/drivers/drv_color.c) \
$(abspath ../../../source/drivers/drv_speaker.c) \
$(abspath ../../../source/drivers/drv_mpu9250.c) \
$(abspath ../../../source/drivers/drv_motion.c) \
$(abspath ../../../source/drivers/drv_acc_lis3dh.c) \
$(abspath ../../../source/drivers/drv_mic.c) \
$(abspath ../../../source/modules/m_ble.c) \
$(abspath ../../../source/modules/m_ble_flash.c) \
$(abspath ../../../source/modules/m_environment.c) \
$(abspath ../../../source/modules/m_environment_flash.c) \
$(abspath ../../../source/modules/m_sound.c) \
$(abspath ../../../source/modules/m_motion.c) \
$(abspath ../../../source/modules/m_motion_flash.c) \
$(abspath ../../../source/modules/m_ui.c) \
$(abspath ../../../source/modules/m_ui_flash.c) \
$(abspath ../../../source/modules/m_batt_meas.c) \
$(abspath ../../../source/advertiser_beacon_timeslot.c) \
$(abspath ../../../source/nrf_dfu_flash_buttonless.c) \
$(abspath ../../../source/support_func.c) \
$(abspath ../../../source/sx150x_led_drv_calc.c) \
$(abspath ../../../source/twi_manager.c) \
$(abspath ../../../libs/dvi_adpcm/dvi_adpcm.c) \
$(abspath ../../../libs/eMD6/core/driver/eMPL/inv_mpu.c) \
$(abspath ../../../libs/eMD6/core/driver/eMPL/inv_mpu_dmp_motion_driver.c) \
$(abspath ../../../libs/eMD6/core/mllite/data_builder.c) \
$(abspath ../../../libs/eMD6/core/mllite/hal_outputs.c) \
$(abspath ../../../libs/eMD6/core/mllite/message_layer.c) \
$(abspath ../../../libs/eMD6/core/mllite/ml_math_func.c) \
$(abspath ../../../libs/eMD6/core/mllite/mlmath.c) \
$(abspath ../../../libs/eMD6/core/mllite/mpl.c) \
$(abspath ../../../libs/eMD6/core/mllite/results_holder.c) \
$(abspath ../../../libs/eMD6/core/mllite/start_manager.c) \
$(abspath ../../../libs/eMD6/core/mllite/storage_manager.c) \
$(abspath ../../../libs/eMD6/core/eMPL-hal/eMPL_outputs.c) \
$(abspath ../../../libs/eMD6/core/driver/nRF52/log_nrf52.c) \
$(abspath ../../../libs/sr3_audio/drv_audio_coder_adpcm.c) \
$(abspath ../../../libs/sr3_audio/drv_audio_coder_bv32fp.c) \
$(abspath ../../../libs/sr3_audio/drv_audio_dsp.c) \
$(abspath ../../../libs/sr3_audio/drv_audio_pdm.c) \
$(abspath ../../../components/ble/ble_advertising/ble_advertising.c) \
$(abspath ../../../components/ble/common/ble_advdata.c) \
$(abspath ../../../components/ble/common/ble_conn_params.c) \
$(abspath ../../../components/ble/common/ble_srv_common.c) \
$(abspath ../../../components/ble/common/ble_conn_state.c) \
$(abspath ../../../components/ble/ble_services/ble_dfu/ble_dfu.c) \
$(abspath ../../../components/ble/ble_services/ble_bas/ble_bas.c) \
$(abspath ../../../components/drivers_nrf/clock/nrf_drv_clock.c) \
$(abspath ../../../components/drivers_nrf/common/nrf_drv_common.c) \
$(abspath ../../../components/drivers_nrf/gpiote/nrf_drv_gpiote.c) \
$(abspath ../../../components/drivers_nrf/hal/nrf_saadc.c) \
$(abspath ../../../components/drivers_nrf/pdm/nrf_drv_pdm.c) \
$(abspath ../../../components/drivers_nrf/pwm/nrf_drv_pwm.c) \
$(abspath ../../../components/drivers_nrf/rng/nrf_drv_rng.c) \
$(abspath ../../../components/drivers_nrf/saadc/nrf_drv_saadc.c) \
$(abspath ../../../components/drivers_nrf/twi_master/nrf_drv_twi.c) \
$(abspath ../../../components/nfc/ndef/launchapp/nfc_launchapp_msg.c) \
$(abspath ../../../components/nfc/ndef/launchapp/nfc_launchapp_rec.c) \
$(abspath ../../../components/nfc/ndef/uri/nfc_uri_msg.c) \
$(abspath ../../../components/nfc/ndef/uri/nfc_uri_rec.c) \
$(abspath ../../../components/nfc/ndef/generic/message/nfc_ndef_msg.c) \
$(abspath ../../../components/nfc/ndef/generic/record/nfc_ndef_record.c) \
$(abspath ../../../components/nfc/ndef/text/nfc_text_rec.c) \
$(abspath ../../../components/nfc/t2t_lib/hal_t2t/hal_nfc_t2t.c) \
$(abspath ../../../components/libraries/bootloader/dfu/nrf_dfu_settings.c) \
$(abspath ../../../components/libraries/button/app_button.c) \
$(abspath ../../../components/libraries/crc32/crc32.c) \
$(abspath ../../../components/libraries/fds/fds.c) \
$(abspath ../../../components/libraries/fstorage/fstorage.c) \
$(abspath ../../../components/libraries/led_softblink/led_softblink.c) \
$(abspath ../../../components/libraries/log/nrf_log_frontend.c) \
$(abspath ../../../components/libraries/log/nrf_log_backend_serial.c) \
$(abspath ../../../components/libraries/low_power_pwm/low_power_pwm.c) \
$(abspath ../../../components/libraries/queue/nrf_queue.c) \
$(abspath ../../../components/libraries/uart/retarget.c) \
$(abspath ../../../components/libraries/util/app_error.c) \
$(abspath ../../../components/libraries/util/app_util_platform.c) \
$(abspath ../../../components/libraries/util/nrf_assert.c) \
$(abspath ../../../components/libraries/util/sdk_mapped_flags.c) \
$(abspath ../../../components/libraries/scheduler/app_scheduler.c) \
$(abspath ../../../components/libraries/strerror/nrf_strerror.c) \
$(abspath ../../../components/libraries/timer/app_timer.c) \
$(abspath ../../../components/softdevice/common/softdevice_handler/softdevice_handler.c) \
$(abspath ../../../components/toolchain/system_nrf52.c) \
$(abspath ../../../components/RTT_Syscalls_GCC.c) \
$(abspath ../../../components/SEGGER_RTT.c) \
$(abspath ../../../components/SEGGER_RTT_printf.c) \
$(abspath ../../../components/softdevice_handler_appsh.c) \

ASM_SOURCE_FILES  = $(abspath ../../../components/toolchain/gcc/gcc_startup_nrf52.S)

INC_PATHS += -I$(abspath ../../../include)
INC_PATHS += -I$(abspath ../../../include/drivers)
INC_PATHS += -I$(abspath ../../../include/modules)
INC_PATHS += -I$(abspath ../../../libs/bv32fp-1.2)
INC_PATHS += -I$(abspath ../../../libs/dvi_adpcm)
INC_PATHS += -I$(abspath ../../../libs/eMD6/core/driver/eMPL)
INC_PATHS += -I$(abspath ../../../libs/eMD6/core/driver/include)
INC_PATHS += -I$(abspath ../../../libs/eMD6/core/driver/nRF52)
INC_PATHS += -I$(abspath ../../../libs/eMD6/core/eMPL-hal)
INC_PATHS += -I$(abspath ../../../libs/eMD6/core/mllite)
INC_PATHS += -I$(abspath ../../../libs/eMD6/core/mpl)
INC_PATHS += -I$(abspath ../../../libs/sr3_audio)
INC_PATHS += -I$(abspath ../../../components)
INC_PATHS += -I$(abspath ../../../components/ble/ble_advertising)
INC_PATHS += -I$(abspath ../../../components/ble/ble_services/ble_bas)
INC_PATHS += -I$(abspath ../../../components/ble/ble_services/ble_dfu)
INC_PATHS += -I$(abspath ../../../components/ble/common)
INC_PATHS += -I$(abspath ../../../components/device)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/clock)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/common)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/delay)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/gpiote)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/hal)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/pdm)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/pwm)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/rng)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/saadc)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/twi_master)
INC_PATHS += -I$(abspath ../../../components/drivers_nrf/uart)
INC_PATHS += -I$(abspath ../../../components/libraries/bootloader/dfu)
INC_PATHS += -I$(abspath ../../../components/libraries/button)
INC_PATHS += -I$(abspath ../../../components/libraries/crc32)
INC_PATHS += -I$(abspath ../../../components/libraries/experimental_section_vars)
INC_PATHS += -I$(abspath ../../../components/libraries/fds)
INC_PATHS += -I$(abspath ../../../components/libraries/fstorage)
INC_PATHS += -I$(abspath ../../../components/libraries/led_softblink)
INC_PATHS += -I$(abspath ../../../components/libraries/log)
INC_PATHS += -I$(abspath ../../../components/libraries/low_power_pwm)
INC_PATHS += -I$(abspath ../../../components/libraries/queue)
INC_PATHS += -I$(abspath ../../../components/libraries/scheduler)
INC_PATHS += -I$(abspath ../../../components/libraries/strerror)
INC_PATHS += -I$(abspath ../../../components/libraries/timer)
INC_PATHS += -I$(abspath ../../../components/libraries/uart)
INC_PATHS += -I$(abspath ../../../components/libraries/util)
INC_PATHS += -I$(abspath ../../../components/nfc/ndef/generic/record)
INC_PATHS += -I$(abspath ../../../components/nfc/ndef/generic/message)
INC_PATHS += -I$(abspath ../../../components/nfc/ndef/launchapp)
INC_PATHS += -I$(abspath ../../../components/nfc/ndef/uri)
INC_PATHS += -I$(abspath ../../../components/nfc/ndef/text)
INC_PATHS += -I$(abspath ../../../components/nfc/t2t_lib)
INC_PATHS += -I$(abspath ../../../components/nfc/ndef/text)
INC_PATHS += -I$(abspath ../../../components/softdevice/common/softdevice_handler)
INC_PATHS += -I$(abspath ../../../components/softdevice/s132/headers)
INC_PATHS += -I$(abspath ../../../components/softdevice/s132/headers/nrf52)
INC_PATHS += -I$(abspath ../../../components/toolchain)
INC_PATHS += -I$(abspath ../../../components/toolchain/cmsis/include)
INC_PATHS += -I$(abspath ../../../components/toolchain/gcc)

OBJECT_DIRECTORY = _build
LISTING_DIRECTORY = $(OBJECT_DIRECTORY)
OUTPUT_BINARY_DIRECTORY = $(OBJECT_DIRECTORY)

# Sorting removes duplicates
BUILD_DIRECTORIES := $(sort $(OBJECT_DIRECTORY) $(OUTPUT_BINARY_DIRECTORY) $(LISTING_DIRECTORY) )

LDFLAGS += -Xlinker -Map=$(LISTING_DIRECTORY)/$(OUTPUT_FILENAME).map
LDFLAGS += -mthumb -mabi=aapcs -L $(TEMPLATE_PATH) -T$(LINKER_SCRIPT)
LDFLAGS += -mcpu=cortex-m4
LDFLAGS += -mfloat-abi=hard -mfpu=fpv4-sp-d16
LDFLAGS += -Wl,--gc-sections
LDFLAGS += --specs=nano.specs -lc -lnosys

ASMFLAGS += -x assembler-with-cpp
ASMFLAGS += -DNRF52
ASMFLAGS += -DBLE_STACK_SUPPORT_REQD
ASMFLAGS += -DNRF52_PAN_12
ASMFLAGS += -DNRF52_PAN_15
ASMFLAGS += -DNRF52_PAN_20
ASMFLAGS += -DNRF52_PAN_30
ASMFLAGS += -DNRF52_PAN_31
ASMFLAGS += -DNRF52_PAN_36
ASMFLAGS += -DNRF52_PAN_51
ASMFLAGS += -DNRF52_PAN_53
ASMFLAGS += -DNRF52_PAN_54
ASMFLAGS += -DNRF52_PAN_55
ASMFLAGS += -DNRF52_PAN_58
ASMFLAGS += -DNRF52_PAN_62
ASMFLAGS += -DNRF52_PAN_63
ASMFLAGS += -DNRF52_PAN_64
ASMFLAGS += -DS132
ASMFLAGS += -DNRF_LOG_USES_RTT=1
ASMFLAGS += -DSOFTDEVICE_PRESENT
ASMFLAGS += -DSWI_DISABLE0
ASMFLAGS += -DDEBUG
ASMFLAGS += -DBSP_DEFINES_ONLY
ASMFLAGS += -DARM_MATH_CM4
ASMFLAGS += -DMPU9250
ASMFLAGS += -DEMPL
ASMFLAGS += -DUSE_DMP
ASMFLAGS += -DEMPL_TARGET_NRF52

LIBS += \
$(abspath ../../../libs/liblibmplmpu.a) \
$(abspath ../../../components/nfc/t2t_lib/nfc_t2t_lib_gcc.a) \
$(abspath ../../../components/toolchain/cmsis/dsp/GCC/libarm_cortexM4lf_math.a) \

#function for removing duplicates in a list
remduplicates = $(strip $(if $1,$(firstword $1) $(call remduplicates,$(filter-out $(firstword $1),$1))))

default: thingy

all: clean
	$(NO_ECHO)$(MAKE) -f $(MAKEFILE_NAME) -C $(MAKEFILE_DIR) -e clean
	$(NO_ECHO)$(MAKE) -f $(MAKEFILE_NAME) -C $(MAKEFILE_DIR) -j 4

C_SOURCE_FILE_NAMES = $(notdir $(C_SOURCE_FILES))
C_PATHS = $(call remduplicates, $(dir $(C_SOURCE_FILES) ) )
C_OBJECTS = $(addprefix $(OBJECT_DIRECTORY)/, $(C_SOURCE_FILE_NAMES:.c=.o) )

ASM_SOURCE_FILE_NAMES = $(notdir $(ASM_SOURCE_FILES))
ASM_PATHS = $(call remduplicates, $(dir $(ASM_SOURCE_FILES) ))
ASM_OBJECTS = $(addprefix $(OBJECT_DIRECTORY)/, $(ASM_SOURCE_FILE_NAMES:.S=.o) )

vpath %.c $(C_PATHS)
vpath %.S $(ASM_PATHS)

OBJECTS = $(C_OBJECTS) $(ASM_OBJECTS)

# Special case for inv_mpu as this throws uninitialized warnings
$(OBJECT_DIRECTORY)/inv_mpu.o : CFLAGS+=-Wno-maybe-uninitialized

thingy: OUTPUT_FILENAME := thingy
thingy: LINKER_SCRIPT=thingy.ld

thingy: $(BUILD_DIRECTORIES) $(OBJECTS)
	@echo Linking target: $(OUTPUT_FILENAME).out
	$(NO_ECHO)$(CC) $(LDFLAGS) $(OBJECTS) $(LIBS) -lm -o $(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).out
	$(NO_ECHO)$(SIZE) $(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).out
	@echo Preparing: $(OUTPUT_FILENAME).hex
	$(NO_ECHO)$(OBJCOPY) -O ihex $(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).out $(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).hex

# create build directories
$(BUILD_DIRECTORIES):
	echo $(MAKEFILE_NAME)
	$(MK) $@

# compile .C files
$(OBJECT_DIRECTORY)/%.o: %.c
	@echo Compiling file: $(notdir $<)
	$(NO_ECHO)$(CC) $(CFLAGS) $(INC_PATHS) -c -o $@ $<

# assemble .S files
$(OBJECT_DIRECTORY)/%.o: %.S
	@echo Assembly file: $(notdir $<)
	$(NO_ECHO)$(CC) $(ASMFLAGS) $(INC_PATHS) -c -o $@ $<

# link
$(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).out: $(BUILD_DIRECTORIES) $(OBJECTS)
	@echo Linking target: $(OUTPUT_FILENAME).out
	$(NO_ECHO)$(CC) $(LDFLAGS) $(OBJECTS) $(LIBS) -lm -o $(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).out

# .hex from .out
$(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).hex: $(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).out
	@echo Preparing: $(OUTPUT_FILENAME).hex
	$(NO_ECHO)$(OBJCOPY) -O ihex $(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).out $(OUTPUT_BINARY_DIRECTORY)/$(OUTPUT_FILENAME).hex

clean:
	$(RM) $(BUILD_DIRECTORIES)

test:
	@echo ocd test
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg
ocd: thingy
	@echo ocd Flashing: $(OUTPUT_BINARY_DIRECTORY)/$<.hex
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg -c "program $(OUTPUT_BINARY_DIRECTORY)/$<.hex verify reset exit"
13212:
	@echo ocd Flashing: $(OUTPUT_BINARY_DIRECTORY)/$<.hex
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg -c "program ../../../components/softdevice/s132/hex/s132_nrf52_4.0.2_softdevice.hex verify exit"
blinky:
	@echo Flashing blinky
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg -c "program C:/projects/nRF5_SDK_15.2.0/examples/peripheral/blinky/pca10040/s132/ses/Output/Release/Exe/blinky_pca10040_s132.hex verify reset exit"
blinkyBle:
	@echo Flashing blinkyBle
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg -c "program C:/projects/nRF5_SDK_15.2.0/examples/ble_peripheral/ble_app_blinky/pca10040/s132/ses/Output/Release/Exe/ble_app_blinky_pca10040_s132.hex verify reset exit"
beacon:
	@echo Flashing beacon
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg -c "program C:/projects/nRF5_SDK_15.2.0/examples/ble_peripheral/ble_app_beacon/pca10040/s132/ses/Output/Release/Exe/ble_app_beacon_pca10040_s132.hex verify reset exit"
mouse:
	@echo Flashing mouse
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg -c "program C:/projects/nRF5_SDK_15.2.0/examples/ble_peripheral/ble_app_hids_mouse/pca10040/s132/ses/Output/Release/Exe/ble_app_hids_mouse_pca10040_s132.hex verify reset exit"
key:
	@echo Flashing key
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg -c "program C:/projects/nRF5_SDK_15.2.0/examples/ble_peripheral/ble_app_hids_keyboard/pca10040/s132/ses/Output/Release/Exe/ble_app_hids_keyboard_pca10040_s132.hex verify reset exit"
13215:
	@echo Flashing softdevice 132-15.2.0
	..\..\..\openOCD\bin\openocd.exe -f openocd.cfg -c "program C:/projects/nRF5_SDK_15.2.0/components/softdevice/s132/hex/s132_nrf52_6.1.0_softdevice.hex verify exit"
