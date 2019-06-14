/******************************************************************************
 *
 * Copyright (C) 2018 Xilinx, Inc.	All rights reserved.
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
 *
******************************************************************************/
/*****************************************************************************/
/**
*
* @file xv_multi_scaler_coeff.c
* @addtogroup v_multiscaler_v1_0
* @{
* @details
*
* This file provides the default fixed coefficient sets for supported taps
*
******************************************************************************/
#include "xv_multi_scaler_l2.h"

/* Fixed 64 phase, 6 tap filter */
const short XV_multiscaler_fixedcoeff_taps6[XV_MULTISCALER_MAX_V_PHASES]
					   [XV_MULTISCALER_TAPS_12] = {
	{0, 0, 0, -132,  236,   3824,   236,  -132,    64, 0, 0, 0 },
	{0, 0, 0, -116,  184,   3816,   292,  -144,    64, 0, 0, 0 },
	{0, 0, 0, -100,  132,   3812,   348,  -160,    64, 0, 0, 0 },
	{0, 0, 0, -88,   84,    3808,   404,  -176,    64, 0, 0, 0 },
	{0, 0, 0, -72,   36,    3796,   464,  -192,    64, 0, 0, 0 },
	{0, 0, 0, -60,   -8,    3780,   524,  -208,    68, 0, 0, 0 },
	{0, 0, 0, -48,   -52,   3768,   588,  -228,    68, 0, 0, 0 },
	{0, 0, 0, -32,   -96,   3748,   652,  -244,    68, 0, 0, 0 },
	{0, 0, 0, -20,   -136,  3724,   716,  -260,    72, 0, 0, 0 },
	{0, 0, 0,  -8,   -172,  3696,   784,  -276,    72, 0, 0, 0 },
	{0, 0, 0,   0,   -208,  3676,   848,  -292,    72, 0, 0, 0 },
	{0, 0, 0,  12,   -244,  3640,   920,  -308,    76, 0, 0, 0 },
	{0, 0, 0,  20,   -276,  3612,   988,  -324,    76, 0, 0, 0 },
	{0, 0, 0,  32,   -304,  3568,  1060,  -340,    80, 0, 0, 0 },
	{0, 0, 0,  40,   -332,  3532,  1132,  -356,    80, 0, 0, 0 },
	{0, 0, 0,  48,   -360,  3492,  1204,  -372,    84, 0, 0, 0 },
	{0, 0, 0,  56,   -384,  3448,  1276,  -388,    88, 0, 0, 0 },
	{0, 0, 0,  64,   -408,  3404,  1352,  -404,    88, 0, 0, 0 },
	{0, 0, 0,  72,   -428,  3348,  1428,  -416,    92, 0, 0, 0 },
	{0, 0, 0,  76,   -448,  3308,  1500,  -432,    92, 0, 0, 0 },
	{0, 0, 0,  84,   -464,  3248,  1576,  -444,    96, 0, 0, 0 },
	{0, 0, 0,  88,   -480,  3200,  1652,  -460,    96, 0, 0, 0 },
	{0, 0, 0,  92,   -492,  3140,  1728,  -472,   100, 0, 0, 0 },
	{0, 0, 0,  96,   -504,  3080,  1804,  -484,   104, 0, 0, 0 },
	{0, 0, 0,  100,  -516,  3020,  1880,  -492,   104, 0, 0, 0 },
	{0, 0, 0,  104,  -524,  2956,  1960,  -504,   104, 0, 0, 0 },
	{0, 0, 0,  104,  -532,  2892,  2036,  -512,   108, 0, 0, 0 },
	{0, 0, 0,  108,  -540,  2832,  2108,  -520,   108, 0, 0, 0 },
	{0, 0, 0,  108,  -544,  2764,  2184,  -528,   112, 0, 0, 0 },
	{0, 0, 0,  112,  -544,  2688,  2260,  -532,   112, 0, 0, 0 },
	{0, 0, 0,  112,  -548,  2624,  2336,  -540,   112, 0, 0, 0 },
	{0, 0, 0,  112,  -548,  2556,  2408,  -544,   112, 0, 0, 0 },
	{0, 0, 0,  112,  -544,  2480,  2480,  -544,   112, 0, 0, 0 },
	{0, 0, 0,  112,  -544,  2408,  2556,  -548,   112, 0, 0, 0 },
	{0, 0, 0,  112,  -540,  2336,  2624,  -548,   112, 0, 0, 0 },
	{0, 0, 0,  112,  -532,  2260,  2688,  -544,   112, 0, 0, 0 },
	{0, 0, 0,  112,  -528,  2184,  2764,  -544,   108, 0, 0, 0 },
	{0, 0, 0,  108,  -520,  2108,  2832,  -540,   108, 0, 0, 0 },
	{0, 0, 0,  108,  -512,  2036,  2892,  -532,   104, 0, 0, 0 },
	{0, 0, 0,  104,  -504,  1960,  2956,  -524,   104, 0, 0, 0 },
	{0, 0, 0,  104,  -492,  1880,  3020,  -516,   100, 0, 0, 0 },
	{0, 0, 0,  104,  -484,  1804,  3080,  -504,    96, 0, 0, 0 },
	{0, 0, 0,  100,  -472,  1728,  3140,  -492,    92, 0, 0, 0 },
	{0, 0, 0,  96,   -460,  1652,  3200,  -480,    88, 0, 0, 0 },
	{0, 0, 0,  96,   -444,  1576,  3248,  -464,    84, 0, 0, 0 },
	{0, 0, 0,  92,   -432,  1500,  3308,  -448,    76, 0, 0, 0 },
	{0, 0, 0,  92,   -416,  1428,  3348,  -428,    72, 0, 0, 0 },
	{0, 0, 0,  88,   -404,  1352,  3404,  -408,    64, 0, 0, 0 },
	{0, 0, 0,  88,   -388,  1276,  3448,  -384,    56, 0, 0, 0 },
	{0, 0, 0,  84,   -372,  1204,  3492,  -360,    48, 0, 0, 0 },
	{0, 0, 0,  80,   -356,  1132,  3532,  -332,    40, 0, 0, 0 },
	{0, 0, 0,  80,   -340,  1060,  3568,  -304,    32, 0, 0, 0 },
	{0, 0, 0,  76,   -324,   988,  3612,  -276,    20, 0, 0, 0 },
	{0, 0, 0,  76,   -308,   920,  3640,  -244,    12, 0, 0, 0 },
	{0, 0, 0,  72,   -292,   848,  3676,  -208,     0, 0, 0, 0 },
	{0, 0, 0,  72,   -276,   784,  3696,  -172,    -8, 0, 0, 0 },
	{0, 0, 0,  72,   -260,   716,  3724,  -136,   -20, 0, 0, 0 },
	{0, 0, 0,  68,   -244,   652,  3748,   -96,   -32, 0, 0, 0 },
	{0, 0, 0,   68,  -228,   588,  3768,   -52,   -48, 0, 0, 0 },
	{0, 0, 0,  68,   -208,   524,  3780,    -8,   -60, 0, 0, 0 },
	{0, 0, 0,  64,   -192,   464,  3796,    36,   -72, 0, 0, 0 },
	{0, 0, 0,  64,   -176,   404,  3808,    84,   -88, 0, 0, 0 },
	{0, 0, 0,  64,   -160,   348,  3812,   132,  -100, 0, 0, 0 },
	{0, 0, 0,  64,   -144,   292,  3816,   184,  -116, 0, 0, 0 }

};

/* Fixed 64 phase, 8 tap filter */
const short XV_multiscaler_fixedcoeff_taps8[XV_MULTISCALER_MAX_V_PHASES]
					   [XV_MULTISCALER_TAPS_12] = {
	{0,  0,  -5,  309, 1023, 1445, 1034, 317, -3, -24,  0,  0 },
	{0,  0,  -6,  300, 1011, 1445, 1045, 326, -1, -24,  0,  0 },
	{0,  0,  -7,  291, 1000, 1444, 1056, 336, 0,  -24,  0,  0 },
	{0,  0,  -9,  282, 988,  1444, 1067, 345, 2,  -24,  0,  0 },
	{0,  0,  -10, 274, 977,  1443, 1078, 354, 4,  -24,  0,  0 },
	{0,  0,  -11, 266, 965,  1441, 1089, 364, 6,  -24,  0,  0 },
	{0,  0,  -12, 258, 953,  1440, 1100, 373, 8,  -24,  0,  0 },
	{0,  0,  -13, 250, 942,  1438, 1110, 383, 10, -24,  0,  0 },
	{0,  0,  -14, 242, 930, 1437,  1121, 393, 12, -24,  0,  0 },
	{0,  0,  -15, 234, 918, 1434,  1131, 403, 14, -24,  0,  0 },
	{0,  0,  -16, 226, 906, 1432,  1142, 413, 17, -24,  0,  0 },
	{0,  0,  -17, 219, 894, 1430,  1152, 423, 19, -24,  0,  0 },
	{0,  0,  -17, 211, 882, 1427,  1162, 433, 22, -24,  0,  0 },
	{0,  0,  -18, 204, 870, 1424,  1172, 443, 24, -24,  0,  0 },
	{0,  0,  -19, 197, 858, 1420,  1182, 454, 27, -24,  0,  0 },
	{0,  0,  -19, 190, 846, 1417,  1191, 464, 30, -24,  0,  0 },
	{0,  0,  -20, 183, 834, 1413,  1201, 475, 33, -24,  0,  0 },
	{0,  0,  -20, 176, 822, 1409,  1210, 486, 36, -24,  0,  0 },
	{0,  0,  -21, 170, 810, 1405,  1220, 497, 39, -24,  0,  0 },
	{0,  0,  -21, 163, 798, 1401,  1229, 507, 42, -24,  0,  0 },
	{0,  0,  -22, 157, 786, 1396,  1238, 518, 46, -24,  0,  0 },
	{0,  0,  -22, 151, 774, 1392,  1247, 529, 49, -24,  0,  0 },
	{0,  0,  -22, 144, 762, 1387,  1255, 540, 53, -24,  0,  0 },
	{0,  0,  -23, 139, 750, 1382,  1264, 552, 57, -24,  0,  0 },
	{0,  0,  -23, 133, 738, 1376,  1272, 563, 60, -24,  0,  0 },
	{0,  0,  -23, 127, 726, 1371,  1280, 574, 64, -24,  0,  0 },
	{0,  0,  -23, 121, 714, 1365,  1288, 586, 69, -24,  0,  0 },
	{0,  0,  -23, 116, 703, 1359,  1296, 597, 73, -24,  0,  0 },
	{0,  0,  -24, 111, 691, 1353,  1304, 609, 77, -24,  0,  0 },
	{0,  0,  -24, 105, 679, 1346,  1312, 620, 81, -24,  0,  0 },
	{0,  0,  -24, 100, 667, 1340,  1319, 632, 86, -24,  0,  0 },
	{0,  0,  -24, 96, 655, 1333,   1326, 644, 91, -24,  0,  0 },
	{0,  0,  -24, 91, 644, 1326, 1333, 655, 96, -24,   0,  0  },
	{0,  0,  -24, 86, 632, 1319, 1340, 667, 100, -24,  0,  0  },
	{0,  0,  -24, 81, 620, 1312, 1346, 679, 105, -24,  0,  0  },
	{0,  0,  -24, 77, 609, 1304, 1353, 691, 111, -24,  0,  0  },
	{0,  0,  -24, 73, 597, 1296, 1359, 703, 116, -23,  0,  0  },
	{0,  0,  -24, 69, 586, 1288, 1365, 714, 121, -23,  0,  0  },
	{0,  0,  -24, 64, 574, 1280, 1371, 726, 127, -23,  0,  0  },
	{0,  0,  -24, 60, 563, 1272, 1376, 738, 133, -23,  0,  0  },
	{0,  0,  -24, 57, 552, 1264, 1382, 750, 139, -23,  0,  0  },
	{0,  0,  -24, 53, 540, 1255, 1387, 762, 144, -22,  0,  0  },
	{0,  0,  -24, 49, 529, 1247, 1392, 774, 151, -22,  0,  0  },
	{0,  0,  -24, 46, 518, 1238, 1396, 786, 157, -22,  0,  0  },
	{0,  0,  -24, 42, 507, 1229, 1401, 798, 163, -21,  0,  0  },
	{0,  0,  -24, 39, 497, 1220, 1405, 810, 170, -21,  0,  0  },
	{0,  0,  -24, 36, 486, 1210, 1409, 822, 176, -20,  0,  0  },
	{0,  0,  -24, 33, 475, 1201, 1413, 834, 183, -20,  0,  0  },
	{0,  0,  -24, 30, 464, 1191, 1417, 846, 190, -19,  0,  0  },
	{0,  0,  -24, 27, 454, 1182, 1420, 858, 197, -19,  0,  0  },
	{0,  0,  -24, 24, 443, 1172, 1424, 870, 204, -18,  0,  0  },
	{0,  0,  -24, 22, 433, 1162, 1427, 882, 211, -17,  0,  0  },
	{0,  0,  -24, 19, 423, 1152, 1430, 894, 219, -17,  0,  0  },
	{0,  0,  -24, 17, 413, 1142, 1432, 906, 226, -16,  0,  0  },
	{0,  0,  -24, 14, 403, 1131, 1434, 918, 234, -15,  0,  0  },
	{0,  0,  -24, 12, 393, 1121, 1437, 930, 242, -14,  0,  0  },
	{0,  0,  -24, 10, 383, 1110, 1438, 942, 250, -13,  0,  0  },
	{0,  0,  -24, 8, 373, 1100, 1440, 953, 258, -12,   0,  0  },
	{0,  0,  -24, 6, 364, 1089, 1441, 965, 266, -11,   0,  0  },
	{0,  0,  -24, 4, 354, 1078, 1443, 977, 274, -10,   0,  0  },
	{0,  0,  -24, 2, 345, 1067, 1444, 988, 282, -9,    0,  0  },
	{0,  0,  -24, 0, 336, 1056, 1444, 1000, 291, -7,   0,  0  },
	{0,  0,  -24, -1, 326, 1045, 1445, 1011, 300, -6,  0,  0  },
	{0,  0,  -24, -3, 317, 1034, 1445, 1023, 309, -5,  0,  0  },

};

/* Fixed 64 phase, 10 tap filter */
const short XV_multiscaler_fixedcoeff_taps10[XV_MULTISCALER_MAX_V_PHASES]
					    [XV_MULTISCALER_TAPS_12] = {
	{0, 59, 224, 507, 790, 911, 793, 512, 227, 61, 13, 0 },
	{0, 58, 220, 502, 786, 911, 797, 516, 231, 62, 13, 0 },
	{0, 56, 216, 497, 783, 911, 800, 521, 235, 64, 13, 0 },
	{0, 55, 213, 492, 779, 910, 804, 526, 238, 65, 13, 0 },
	{0, 54, 209, 487, 775, 910, 807, 531, 242, 67, 14, 0 },
	{0, 52, 206, 482, 772, 910, 810, 536, 246, 69, 14, 0 },
	{0, 51, 202, 477, 768, 909, 813, 541, 250, 70, 14, 0 },
	{0, 50, 199, 473, 764, 909, 817, 545, 254, 72, 14, 0 },
	{0, 48, 195, 468, 760, 908, 820, 550, 258, 74, 15, 0 },
	{0, 47, 192, 463, 756, 908, 823, 555, 262, 76, 15, 0 },
	{0, 46, 188, 458, 752, 907, 826, 560, 266, 78, 15, 0 },
	{0, 45, 185, 453, 748, 906, 829, 565, 270, 79, 16, 0 },
	{0, 44, 182, 448, 744, 906, 832, 569, 274, 81, 16, 0 },
	{0, 42, 179, 444, 740, 905, 835, 574, 278, 83, 16, 0 },
	{0, 41, 175, 439, 736, 904, 837, 579, 282, 85, 17, 0 },
	{0, 40, 172, 434, 732, 903, 840, 584, 286, 87, 17, 0 },
	{0, 39, 169, 429, 728, 902, 843, 589, 290, 89, 18, 0 },
	{0, 38, 166, 425, 724, 901, 846, 593, 294, 91, 18, 0 },
	{0, 37, 163, 420, 720, 900, 848, 598, 298, 93, 18, 0 },
	{0, 36, 160, 415, 716, 899, 851, 603, 302, 95, 19, 0 },
	{0, 35, 157, 410, 711, 897, 854, 608, 307, 98, 19, 0 },
	{0, 34, 154, 406, 707, 896, 856, 612, 311, 100, 20, 0 },
	{0, 33, 151, 401, 703, 895, 859, 617, 315, 102, 20, 0 },
	{0, 33, 148, 396, 698, 893, 861, 622, 320, 104, 21, 0 },
	{0, 32, 145, 392, 694, 892, 863, 626, 324, 107, 21, 0 },
	{0, 31, 142, 387, 690, 890, 866, 631, 328, 109, 22, 0 },
	{0, 30, 140, 382, 685, 889, 868, 636, 333, 111, 23, 0 },
	{0, 29, 137, 378, 681, 887, 870, 640, 337, 114, 23, 0 },
	{0, 28, 134, 373, 677, 886, 872, 645, 342, 116, 24, 0 },
	{0, 28, 131, 369, 672, 884, 874, 649, 346, 119, 24, 0 },
	{0, 27, 129, 364, 668, 882, 876, 654, 350, 121, 25, 0 },
	{0, 26, 126, 359, 663, 880, 878, 659, 355, 124, 26, 0 },
	{0, 26, 124, 355, 659, 878, 880, 663, 359, 126, 26, 0 },
	{0, 25, 121, 350, 654, 876, 882, 668, 364, 129, 27, 0 },
	{0, 24, 119, 346, 649, 874, 884, 672, 369, 131, 28, 0 },
	{0, 24, 116, 342, 645, 872, 886, 677, 373, 134, 28, 0 },
	{0, 23, 114, 337, 640, 870, 887, 681, 378, 137, 29, 0 },
	{0, 23, 111, 333, 636, 868, 889, 685, 382, 140, 30, 0 },
	{0, 22, 109, 328, 631, 866, 890, 690, 387, 142, 31, 0 },
	{0, 21, 107, 324, 626, 863, 892, 694, 392, 145, 32, 0 },
	{0, 21, 104, 320, 622, 861, 893, 698, 396, 148, 33, 0 },
	{0, 20, 102, 315, 617, 859, 895, 703, 401, 151, 33, 0 },
	{0, 20, 100, 311, 612, 856, 896, 707, 406, 154, 34, 0 },
	{0, 19, 98, 307, 608, 854, 897, 711, 410, 157, 35, 0 },
	{0, 19, 95, 302, 603, 851, 899, 716, 415, 160, 36, 0 },
	{0, 18, 93, 298, 598, 848, 900, 720, 420, 163, 37, 0 },
	{0, 18, 91, 294, 593, 846, 901, 724, 425, 166, 38, 0 },
	{0, 18, 89, 290, 589, 843, 902, 728, 429, 169, 39, 0 },
	{0, 17, 87, 286, 584, 840, 903, 732, 434, 172, 40, 0 },
	{0, 17, 85, 282, 579, 837, 904, 736, 439, 175, 41, 0 },
	{0, 16, 83, 278, 574, 835, 905, 740, 444, 179, 42, 0 },
	{0, 16, 81, 274, 569, 832, 906, 744, 448, 182, 44, 0 },
	{0, 16, 79, 270, 565, 829, 906, 748, 453, 185, 45, 0 },
	{0, 15, 78, 266, 560, 826, 907, 752, 458, 188, 46, 0 },
	{0, 15, 76, 262, 555, 823, 908, 756, 463, 192, 47, 0 },
	{0, 15, 74, 258, 550, 820, 908, 760, 468, 195, 48, 0 },
	{0, 14, 72, 254, 545, 817, 909, 764, 473, 199, 50, 0 },
	{0, 14, 70, 250, 541, 813, 909, 768, 477, 202, 51, 0 },
	{0, 14, 69, 246, 536, 810, 910, 772, 482, 206, 52, 0 },
	{0, 14, 67, 242, 531, 807, 910, 775, 487, 209, 54, 0 },
	{0, 13, 65, 238, 526, 804, 910, 779, 492, 213, 55, 0 },
	{0, 13, 64, 235, 521, 800, 911, 783, 497, 216, 56, 0 },
	{0, 13, 62, 231, 516, 797, 911, 786, 502, 220, 58, 0 },
	{0, 13, 61, 227, 512, 793, 911, 790, 507, 224, 59, 0 },
};

/* Fixed 64 phase, 12 tap filter */
const short XV_multiscaler_fixedcoeff_taps12[XV_MULTISCALER_MAX_V_PHASES]
					    [XV_MULTISCALER_TAPS_12] = {
	{48, 143, 307, 504, 667, 730, 669, 507, 310, 145, 49, 18, },
	{47, 141, 304, 501, 665, 730, 670, 510, 313, 147, 50, 18, },
	{46, 138, 301, 498, 663, 730, 672, 513, 316, 149, 51, 18, },
	{45, 136, 298, 495, 661, 730, 674, 516, 319, 151, 52, 18, },
	{44, 134, 295, 492, 659, 730, 676, 519, 322, 153, 53, 18, },
	{44, 132, 292, 489, 657, 730, 677, 522, 325, 155, 54, 18, },
	{43, 130, 289, 486, 655, 729, 679, 525, 328, 157, 55, 19, },
	{42, 129, 287, 483, 653, 729, 681, 528, 331, 160, 56, 19, },
	{41, 127, 284, 480, 651, 729, 683, 531, 334, 162, 57, 19, },
	{40, 125, 281, 477, 648, 729, 684, 534, 337, 164, 58, 19, },
	{40, 123, 278, 474, 646, 728, 686, 537, 340, 166, 59, 20, },
	{39, 121, 275, 471, 644, 728, 687, 539, 343, 169, 60, 20, },
	{38, 119, 272, 468, 642, 727, 689, 542, 346, 171, 61, 20, },
	{37, 117, 269, 465, 640, 727, 690, 545, 349, 173, 62, 20, },
	{37, 115, 266, 461, 638, 727, 692, 548, 353, 175, 63, 21, },
	{36, 114, 264, 458, 635, 726, 693, 551, 356, 178, 65, 21, },
	{35, 112, 261, 455, 633, 726, 695, 554, 359, 180, 66, 21, },
	{35, 110, 258, 452, 631, 725, 696, 556, 362, 183, 67, 21, },
	{34, 108, 255, 449, 628, 724, 698, 559, 365, 185, 68, 22, },
	{33, 107, 252, 446, 626, 724, 699, 562, 368, 187, 69, 22, },
	{33, 105, 250, 443, 624, 723, 700, 565, 371, 190, 71, 22, },
	{32, 103, 247, 440, 621, 723, 702, 567, 374, 192, 72, 23, },
	{32, 101, 244, 437, 619, 722, 703, 570, 377, 195, 73, 23, },
	{31, 100, 241, 433, 617, 721, 704, 573, 380, 197, 75, 23, },
	{31, 98, 239, 430, 614, 720, 705, 576, 383, 200, 76, 24, },
	{30, 97, 236, 427, 612, 720, 707, 578, 387, 202, 77, 24, },
	{29, 95, 233, 424, 609, 719, 708, 581, 390, 205, 79, 24, },
	{29, 93, 231, 421, 607, 718, 709, 584, 393, 207, 80, 25, },
	{28, 92, 228, 418, 604, 717, 710, 586, 396, 210, 81, 25, },
	{28, 90, 225, 415, 602, 716, 711, 589, 399, 212, 83, 26, },
	{27, 89, 223, 412, 599, 715, 712, 591, 402, 215, 84, 26, },
	{27, 87, 220, 408, 597, 714, 713, 594, 405, 217, 86, 27, },
	{27, 86, 217, 405, 594, 713, 714, 597, 408, 220, 87, 27, },
	{26, 84, 215, 402, 591, 712, 715, 599, 412, 223, 89, 27, },
	{26, 83, 212, 399, 589, 711, 716, 602, 415, 225, 90, 28, },
	{25, 81, 210, 396, 586, 710, 717, 604, 418, 228, 92, 28, },
	{25, 80, 207, 393, 584, 709, 718, 607, 421, 231, 93, 29, },
	{24, 79, 205, 390, 581, 708, 719, 609, 424, 233, 95, 29, },
	{24, 77, 202, 387, 578, 707, 720, 612, 427, 236, 97, 30, },
	{24, 76, 200, 383, 576, 705, 720, 614, 430, 239, 98, 31, },
	{23, 75, 197, 380, 573, 704, 721, 617, 433, 241, 100, 31, },
	{23, 73, 195, 377, 570, 703, 722, 619, 437, 244, 101, 32, },
	{23, 72, 192, 374, 567, 702, 723, 621, 440, 247, 103, 32, },
	{22, 71, 190, 371, 565, 700, 723, 624, 443, 250, 105, 33, },
	{22, 69, 187, 368, 562, 699, 724, 626, 446, 252, 107, 33, },
	{22, 68, 185, 365, 559, 698, 724, 628, 449, 255, 108, 34, },
	{21, 67, 183, 362, 556, 696, 725, 631, 452, 258, 110, 35, },
	{21, 66, 180, 359, 554, 695, 726, 633, 455, 261, 112, 35, },
	{21, 65, 178, 356, 551, 693, 726, 635, 458, 264, 114, 36, },
	{21, 63, 175, 353, 548, 692, 727, 638, 461, 266, 115, 37, },
	{20, 62, 173, 349, 545, 690, 727, 640, 465, 269, 117, 37, },
	{20, 61, 171, 346, 542, 689, 727, 642, 468, 272, 119, 38, },
	{20, 60, 169, 343, 539, 687, 728, 644, 471, 275, 121, 39, },
	{20, 59, 166, 340, 537, 686, 728, 646, 474, 278, 123, 40, },
	{19, 58, 164, 337, 534, 684, 729, 648, 477, 281, 125, 40, },
	{19, 57, 162, 334, 531, 683, 729, 651, 480, 284, 127, 41, },
	{19, 56, 160, 331, 528, 681, 729, 653, 483, 287, 129, 42, },
	{19, 55, 157, 328, 525, 679, 729, 655, 486, 289, 130, 43, },
	{18, 54, 155, 325, 522, 677, 730, 657, 489, 292, 132, 44, },
	{18, 53, 153, 322, 519, 676, 730, 659, 492, 295, 134, 44, },
	{18, 52, 151, 319, 516, 674, 730, 661, 495, 298, 136, 45, },
	{18, 51, 149, 316, 513, 672, 730, 663, 498, 301, 138, 46, },
	{18, 50, 147, 313, 510, 670, 730, 665, 501, 304, 141, 47, },
	{18, 49, 145, 310, 507, 669, 730, 667, 504, 307, 143, 48, },
};
/** @} */
