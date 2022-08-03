/***************************************************************************//**
 *   @file   ad4080.h
 *   @brief  Header file of ad4080 Driver.
 *   @author Antoniu Miclaus (antoniu.miclaus@analog.com)
********************************************************************************
 * Copyright 2022(c) Analog Devices, Inc.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  - Neither the name of Analog Devices, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *  - The use of this software may or may not infringe the patent rights
 *    of one or more patent holders.  This license does not release you
 *    from the requirement that you obtain separate licenses from these
 *    patent holders to use this software.
 *  - Use of the software either in source or binary form, must be run
 *    on or directly connected to an Analog Devices Inc. component.
 *
 * THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT,
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*******************************************************************************/

#ifndef __AD4080_H__
#define __AD4080_H__

/******************************************************************************/
/***************************** Include Files **********************************/
/******************************************************************************/

#include <stdint.h>
#include <string.h>
#include "no_os_util.h"
#include "no_os_spi.h"
#include "no_os_gpio.h"

/******************************************************************************/
/********************** Macros and Constants Definitions **********************/
/******************************************************************************/

#define AD463X_REG_INTERFACE_CONFIG_A		0x00
#define AD463X_REG_INTERFACE_CONFIG_B		0x01
#define AD463X_REG_DEVICE_CONFIG		0x02
#define AD463X_REG_CHIP_TYPE			0x03
#define AD463X_REG_PRODUCT_ID			0x04
#define AD463X_REG_SCRATCH_PAD			0x0A
#define AD463X_REG_SPI_REVISION			0x0B
#define AD463X_REG_VENDOR			0x0C
#define AD463X_REG_STREAM_MODE			0x0E
#define AD463X_REG_INTERFACE_CONFIG_C		0x10
#define AD463X_REG_INTERFACE_STATUS_A		0x11
#define AD463X_USER_REG_1			0x20
#define AD463X_USER_REG_2			0x21
#define AD463X_USER_REG_3			0x22
#define AD463X_FIFO_STATUS			0x23
#define AD463X_GPIO_REG_0			0x24
#define AD463X_GPIO_REG_1			0x25
#define AD463X_GPIO_REG_2			0x26
#define AD463X_GPIO_REG_3			0x27