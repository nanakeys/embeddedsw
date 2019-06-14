/******************************************************************************
 *
 * Copyright (C) 2017 Xilinx, Inc.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *
 *
 ******************************************************************************/


/*****************************************************************************/
/**
 *
 * @file si5324drv.h
 *
 * This file contains definitions for low-level driver functions for
 * controlling the SiliconLabs Si5324 clock generator as mounted on the ZCU106
 * demo board.
 * The user should refer to the hardware device specification for more details
 * of the device operation.
 *
 * <pre>
 * MODIFICATION HISTORY:
 *
 * Ver   Who  Date        Changes
 * ----- --- ----------   -----------------------------------------------
 * 1.00  hf  2014/10/10   First release
 * </pre>
 *
 ******************************************************************************/

#ifndef SI5324DRV_H_
#define SI5324DRV_H_


#include "xil_types.h"


/******************************************************************************
 * User settable defines that depend on the specific board design.
 * The defaults are for the Xilinx KC705 board.
 *****************************************************************************/

/**
 * The frequency of the crystal connected to the XA/XB pins of the Si5324 in Hz.
 */
#define SI5324_XTAL_FREQ 114285000


/******************************************************************************
 * Defines independent on the specific board design. Should not be changed.
 *****************************************************************************/

/**
 * Debug output enable. Set to TRUE to enable debug prints,
 * to FALSE to disable debug prints.
 */
#define SI5324_DEBUG FALSE

/**
 * The following constants are error codes generated by the functions in
 * this driver.
 */
#define SI5324_SUCCESS      0 /**< Operation was successful */
#define SI5324_ERR_IIC     -1 /**< IIC error occurred */
#define SI5324_ERR_FREQ    -2 /**< Could not calculate frequency setting */
#define SI5324_ERR_PARM    -3 /**< Invalid parameter */

/**
 * The following constants define the clock input select values.
 */
#define SI5324_CLKSRC_CLK1 1  /**< Use clock input 1 */
#define SI5324_CLKSRC_CLK2 2  /**< Use clock input 2 */
#define SI5324_CLKSRC_XTAL 3  /**< Use crystal (free running mode) */

/**
 * The following constants define the limits of the Si5324 frequencies.
 */
#define SI5324_FOSC_MIN 4850000000 /**< Minimum oscillator frequency */
#define SI5324_FOSC_MAX 5670000000 /**< Maximum oscillator frequency */
#define SI5324_F3_MIN        10000 /**< Minimum phase detector frequency */
#define SI5324_F3_MAX      2000000 /**< Maximum phase detector frequency */
#define SI5324_FIN_MIN        2000 /**< Minimum input frequency */
#define SI5324_FIN_MAX   710000000 /**< Maximum input frequency */
#define SI5324_FOUT_MIN       2000 /**< Minimum output frequency */
#define SI5324_FOUT_MAX  945000000 /**< Maximum output frequency */

/**
 * The following constants define the limits of the divider settings.
 */
#define SI5324_N1_HS_MIN  6        /**< Minimum N1_HS setting
				    * 4 and 5 are for higher output frequencies
				    * than we support
				    */
#define SI5324_N1_HS_MAX 11        /**< Maximum N1_HS setting */
#define SI5324_NC_LS_MIN  1        /**< Minimum NCn_LS setting (1 and even values) */
#define SI5324_NC_LS_MAX 0x100000  /**< Maximum NCn_LS setting (1 and even values) */
#define SI5324_N2_HS_MIN  4        /**< Minimum NC2_HS setting */
#define SI5324_N2_HS_MAX 11        /**< Maximum NC2_HS setting */
#define SI5324_N2_LS_MIN  2        /**< Minimum NC2_LS setting (even values only) */
#define SI5324_N2_LS_MAX 0x100000  /**< Maximum NC2_LS setting (even values only) */
#define SI5324_N3_MIN     1        /**< Minimum N3n setting */
#define SI5324_N3_MAX    0x080000  /**< Maximum N3n setting */


typedef struct {
	/* Current Si5342 parameters  */
	u32 n1_min;
	u32 n1_max;
	u32 n1_hs;
	u32 nc_ls_min;
	u32 nc_ls_max;
	u32 nc_ls;
	u32 n2_hs;
	u32 n2_ls_min;
	u32 n2_ls_max;
	u32 n2_ls;
	u32 n3_min;
	u32 n3_max;
	u32 n3;
	/* Current frequencies (fixed point 36.28 notation) */
	u64 fin;
	u64 fout;
	u64 fosc;
	/* Best settings found */
	u64 best_delta_fout;
	u64 best_fout;
	u32 best_n1_hs;
	u32 best_nc_ls;
	u32 best_n2_hs;
	u32 best_n2_ls;
	u32 best_n3;
} si5324_settings_t;

/*****************************************************************************/
/**
 * Initialize the SiliconLabs Si5324 clock generator. After initialization,
 * the clock generator is not generating a clock yet. Call si5324_set_clock
 * to start the clock generator.
 *
 * @param    IICBaseAddress contains the base address of the IIC master
 *           device.
 * @param    IICAddress contains the 7 bit IIC address of the Si5324 device.
 *
 * @return   SI5324_SUCCESS for success, SI5324_ERR_IIC for IIC access failure.
 *****************************************************************************/
int Si5324_Init(u32 IICBaseAddress, u8 IICAddress);


/**
 * Set the output frequency
 *
 * @param    IICBaseAddress contains the base address of the IIC master
 *           device.
 * @param    IICAddress contains the 7 bit IIC address of the Si5324 device.
 * @param    ClkSrc selects the clock input to use.
 * @param    ClkInFreq contains the frequency of the input clock.
 * @param    ClkOutFreq contains the desired output clock frequency
 *
 * @return   SI5324_SUCCESS for success, SI5324_ERR_IIC for IIC access failure,
 *           SI5324_ERR_FREQ when the requested frequency cannot be generated.
 */
int Si5324_SetClock(u32 IICBaseAddress, u8 IICAddress, u8 ClkSrc,
                    u32 ClkInFreq, u32 ClkOutFreq);

#endif /* SI5324DRV_H_ */
