
/*******************************************************************
*
* CAUTION: This file is automatically generated by HSI.
* Version: 2019.1.0
* DO NOT EDIT.
*
* Copyright (C) 2010-2019 Xilinx, Inc. All Rights Reserved.*
*Permission is hereby granted, free of charge, to any person obtaining a copy
*of this software and associated documentation files (the Software), to deal
*in the Software without restriction, including without limitation the rights
*to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*copies of the Software, and to permit persons to whom the Software is
*furnished to do so, subject to the following conditions:
*
*The above copyright notice and this permission notice shall be included in
*all copies or substantial portions of the Software.
*
*THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
*THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
*LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
*OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
*SOFTWARE.
*
*
*

*
* Description: Driver configuration
*
*******************************************************************/

#include "xparameters.h"
#include "xdptxss.h"

/*
* The configuration table for devices
*/

#define XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_PRESENT	1
#define XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_TX_HDCP22_PRESENT	1
#define XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_TIMER_PRESENT	1
#define XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_VTC1_PRESENT	1
#define XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_TX_HDCP22_HDCP22_CIPHER_DP_PRESENT	1
#define XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_TX_HDCP22_HDCP22_RNG_PRESENT	1


XDpTxSs_Config XDpTxSs_ConfigTable[] =
{
	{
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DEVICE_ID,
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_BASEADDR,
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_AUDIO_ENABLE,
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_BITS_PER_COLOR,
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_HDCP_ENABLE,
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_HDCP22_ENABLE,
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_LANE_COUNT,
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_MODE,
		XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_NUM_STREAMS,

		{
			XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_PRESENT,
			{
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_DEVICE_ID,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_BASEADDR,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_S_AXI_ACLK,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_LANE_COUNT,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_LINK_RATE,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_MAX_BITS_PER_COLOR,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_QUAD_PIXEL_ENABLE,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_DUAL_PIXEL_ENABLE,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_YCRCB_ENABLE,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_YONLY_ENABLE,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_GT_DATAWIDTH,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_SECONDARY_SUPPORT,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_AUDIO_CHANNELS,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_MST_ENABLE,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_NUMBER_OF_MST_STREAMS,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_PROTOCOL_SELECTION,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_FLOW_DIRECTION
			}
		},
		{
			XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_TX_HDCP22_PRESENT,
			{
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_TX_HDCP22_DEVICE_ID,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_DP_TX_HDCP22_BASEADDR
			}
		},
		{
			XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_TIMER_PRESENT,
			{
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_TIMER_DEVICE_ID,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_TIMER_BASEADDR,
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_TIMER_CLOCK_FREQ_HZ
			}
		},
		{
			{
				XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_VTC1_PRESENT,
				{
					XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_VTC1_DEVICE_ID,
					XPAR_TX_SUBSYSTEM_V_DP_TXSS1_0_VTC1_BASEADDR
				}
			}
		}
	}
};
