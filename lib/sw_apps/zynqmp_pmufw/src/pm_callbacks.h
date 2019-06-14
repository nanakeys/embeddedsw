/*
 * Copyright (C) 2014 - 2019 Xilinx, Inc.  All rights reserved.
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMANGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *
 */

/*********************************************************************
 * PM callbacks interface.
 * Used by the power management to send a message to the PM master and
 * generate interrupt using IPI.
 *********************************************************************/

#ifndef PM_CALLBACKS_H_
#define PM_CALLBACKS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "pm_master.h"
#include "xil_types.h"

void PmAcknowledgeCb(const PmMaster* const master, const PmNodeId nodeId,
		     const u32 status, const u32 oppoint);

void PmNotifyCb(const PmMaster* const master, const PmNodeId nodeId,
		const u32 event, const u32 oppoint);

void PmInitSuspendCb(const PmMaster* const master, const u32 reason,
		     const u32 latency, const u32 state, const u32 timeout);


#ifdef __cplusplus
}
#endif

#endif /* PM_CALLBACKS_H_ */
