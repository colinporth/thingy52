//{{{  copyright
/**
 * Copyright (c) 2016 - 2017, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
/**@file
 *
 * @defgroup nrf_log Logger module
 * @{
 * @ingroup app_common
 *
 * @brief The nrf_log module interface.
 */
//}}}
#pragma once

#include "sdk_common.h"
  #if NRF_MODULE_ENABLED(NRF_LOG)
  #include "nrf_strerror.h"
  #define NRF_LOG_ERROR_STRING_GET(code) nrf_strerror_get(code)
#else
  #define NRF_LOG_ERROR_STRING_GET(code) ""
#endif

//{{{
#ifdef __cplusplus
extern "C" {
#endif
//}}}

#ifndef NRF_LOG_MODULE_NAME
    #define NRF_LOG_MODULE_NAME ""
#endif

#ifndef NRF_LOG_LEVEL
    #define NRF_LOG_LEVEL NRF_LOG_DEFAULT_LEVEL
#endif

#ifndef NRF_LOG_DEBUG_COLOR
    #define NRF_LOG_DEBUG_COLOR NRF_LOG_COLOR_DEFAULT
#endif

#ifndef NRF_LOG_INFO_COLOR
    #define NRF_LOG_INFO_COLOR NRF_LOG_COLOR_DEFAULT
#endif

#include "nrf_log_internal.h"

#define NRF_LOG_ERROR(...)                     NRF_LOG_INTERNAL_ERROR(__VA_ARGS__)
#define NRF_LOG_WARNING(...)                   NRF_LOG_INTERNAL_WARNING( __VA_ARGS__)
#define NRF_LOG_INFO(...)                      NRF_LOG_INTERNAL_INFO( __VA_ARGS__)
#define NRF_LOG_DEBUG(...)                     NRF_LOG_INTERNAL_DEBUG( __VA_ARGS__)

#define NRF_LOG_RAW_INFO(...)                  NRF_LOG_INTERNAL_RAW_INFO( __VA_ARGS__)

#define NRF_LOG_HEXDUMP_ERROR(p_data, len)   NRF_LOG_INTERNAL_HEXDUMP_ERROR(p_data, len)
#define NRF_LOG_HEXDUMP_WARNING(p_data, len) NRF_LOG_INTERNAL_HEXDUMP_WARNING(p_data, len)
#define NRF_LOG_HEXDUMP_INFO(p_data, len)    NRF_LOG_INTERNAL_HEXDUMP_INFO(p_data, len)
#define NRF_LOG_HEXDUMP_DEBUG(p_data, len)   NRF_LOG_INTERNAL_HEXDUMP_DEBUG(p_data, len)

#define NRF_LOG_RAW_HEXDUMP_INFO(p_data, len) NRF_LOG_INTERNAL_RAW_HEXDUMP_INFO(p_data, len)

#define NRF_LOG_GETCHAR()                    NRF_LOG_INTERNAL_GETCHAR()

uint32_t nrf_log_push(char * const p_str);

#define NRF_LOG_FLOAT_MARKER "%s%d.%02d"

#define NRF_LOG_FLOAT(val) (uint32_t)(((val) < 0 && (val) > -1.0) ? "-" : ""),   \
                           (int32_t)(val),                                       \
                           (int32_t)((((val) > 0) ? (val) - (int32_t)(val)       \
                                                : (int32_t)(val) - (val))*100)

//{{{
#ifdef __cplusplus
}
#endif
//}}}
