/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef _NAS_CONST_H_
#define _NAS_CONST_H_

typedef unsigned char       Uint8;
typedef unsigned short int  Uint16;
typedef unsigned int        Uint32;
typedef char                Sint8;
typedef short int           Sint16;
typedef int                 Sint32;

#define NAS_TRUE    1
#define NAS_FALSE   0
#define NAS_SUCCESS 0
#define NAS_FAILURE 0xFFFFFFFF

/**
 * @brief 3GPP TS 24.501-gb0-5.1.3.2.1.2
 * Main state of NMM module
 */
typedef enum {
    NAS_NMM_S_NULL         = 0,
    NAS_NMM_S_DEREG        = 1,
    NAS_NMM_S_REG_INIT     = 2,
    NAS_NMM_S_REG          = 3,
    NAS_NMM_S_DEREG_INIT   = 4,
    NAS_NMM_S_SR_INIT      = 5
} nas_nmm_main_state_t;

/**
 * @brief 3GPP TS 24.501-gb0-5.1.3.2.1.3
 * Sub state of NMM module in NGMM-DEREGISTERED
 */
typedef enum{
    NAS_NMM_S_DEREG_NORMAL          = 0,
    NAS_NMM_S_DEREG_LIMIT           = 1,
    NAS_NMM_S_DEREG_ATTMPT_REG      = 2,
    NAS_NMM_S_DEREG_PLMN_SEARCH     = 3,
    NAS_NMM_S_DEREG_NO_SUPI         = 4,
    NAS_NMM_S_DEREG_NO_CELL         = 5,
    NAS_NMM_S_DEREG_ECALL_INACTIVE  = 6  /* Not used now */
} nas_nmm_dereg_sub_state_t;

/**
 * @brief 3GPP TS 24.501-gb0-5.1.3.2.1.3
 * Sub state of NMM module in NGMM-REGISTERED
 */
typedef enum{
    NAS_NMM_S_REG_NORMAL            = 0,
    NAS_NMM_S_REG_NON_ALLOWED_SRV   = 1,
    NAS_NMM_S_REG_ATTMPT_REG_UP     = 2,
    NAS_NMM_S_REG_LIMITED_SRV       = 3,
    NAS_NMM_S_REG_NO_CELL           = 4,
    NAS_NMM_S_REG_UPDATE_NEEDED     = 5,
} nas_nmm_reg_sub_state_t;

#endif
/* End of _NAS_CONST_H_ */