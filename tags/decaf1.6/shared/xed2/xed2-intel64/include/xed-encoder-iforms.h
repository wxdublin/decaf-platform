/*BEGIN_LEGAL 
Intel Open Source License 

Copyright (c) 2002-2011 Intel Corporation. All rights reserved.
 
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

Redistributions of source code must retain the above copyright notice,
this list of conditions and the following disclaimer.  Redistributions
in binary form must reproduce the above copyright notice, this list of
conditions and the following disclaimer in the documentation and/or
other materials provided with the distribution.  Neither the name of
the Intel Corporation nor the names of its contributors may be used to
endorse or promote products derived from this software without
specific prior written permission.
 
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE INTEL OR
ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
END_LEGAL */
/// @file xed-encoder-iforms.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(_XED_ENCODER_IFORMS_H_)
# define _XED_ENCODER_IFORMS_H_
#include "xed-types.h"
typedef struct xed_encoder_iforms_s {
    xed_uint16_t x_MEMDISPv;
    xed_uint16_t x_VEX_MAP_ENC;
    xed_uint16_t x_SIB_NT;
    xed_uint16_t x_UIMM8_1;
    xed_uint16_t x_MEMDISP;
    xed_uint16_t x_VEX_ESCVL_ENC;
    xed_uint16_t x_PREFIX_ENC;
    xed_uint16_t x_VEXED_REX;
    xed_uint16_t x_INSTRUCTIONS;
    xed_uint16_t x_VEX_REXXB_ENC;
    xed_uint16_t x_VEX_REG_ENC;
    xed_uint16_t x_SIMM8;
    xed_uint16_t x_UIMM8;
    xed_uint16_t x_BRDISP8;
    xed_uint16_t x_MEMDISP8;
    xed_uint16_t x_REX_PREFIX_ENC;
    xed_uint16_t x_UIMM16;
    xed_uint16_t x_VEX_TYPE_ENC;
    xed_uint16_t x_VEX_REXR_ENC;
    xed_uint16_t x_BRDISP32;
    xed_uint16_t x_MEMDISP32;
    xed_uint16_t x_MEMDISP16;
    xed_uint16_t x_SE_IMM8;
    xed_uint16_t x_UIMM32;
    xed_uint16_t x_SIMMz;
    xed_uint16_t x_UIMMv;
    xed_uint16_t x_DISP_NT;
    xed_uint16_t x_BRDISPz;
} xed_encoder_iforms_t;
#endif