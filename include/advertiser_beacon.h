//{{{  copyright
/*
  Copyright (c) 2010 - 2017, Nordic Semiconductor ASA
  All rights reserved.

  Redistribution and use in source and binary forms, with or without modification,
  are permitted provided that the following conditions are met:

  1. Redistributions of source code must retain the above copyright notice, this
     list of conditions and the following disclaimer.

  2. Redistributions in binary form, except as embedded into a Nordic
     Semiconductor ASA integrated circuit in a product or a software update for
     such product, must reproduce the above copyright notice, this list of
     conditions and the following disclaimer in the documentation and/or other
     materials provided with the distribution.

  3. Neither the name of Nordic Semiconductor ASA nor the names of its
     contributors may be used to endorse or promote products derived from this
     software without specific prior written permission.

  4. This software, with or without modification, must only be used with a
     Nordic Semiconductor ASA integrated circuit.

  5. Any software provided in binary form under this license must not be reverse
     engineered, decompiled, modified and/or disassembled.

  THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
  OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
  OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
  OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
//}}}
#pragma once

#include <stdint.h>
#include <stdbool.h>
#include "ble_types.h"
#include "ble_gap.h"
#include "ble_srv_common.h"

typedef struct {
  uint32_t                adv_interval;
  uint8_t*                p_data;
  uint16_t                data_size;
  ble_gap_addr_t          beacon_addr;   /** ble address to be used by the beacon*/
  ble_srv_error_handler_t error_handler; /**< Function to be called in case of an error. */
  } ble_beacon_init_t;

// Function for handling system events.
// Handles all system events of interest to the Advertiser module.
// event     Received event.
void app_beacon_on_sys_evt(uint32_t event);

// Function for initializing the advertiser module.
//  p_init     Structure containing advertiser configuration information.
void app_beacon_init(ble_beacon_init_t * p_init);

// Function for starting the advertisement.
void app_beacon_start(void);

// Function for stopping the advertisement.
// This function returns immediately, but the advertisement is actually stopped after the next radio slot.
void app_beacon_stop(void);
