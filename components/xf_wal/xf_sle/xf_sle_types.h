/**
 * @file xf_sle_types.h
 * @author dotc (dotchan@qq.com)
 * @brief 
 * @version 1.0
 * @date 2024-08-06
 * 
 * Copyright (c) 2024, CorAL. All rights reserved.
 * 
 */

#ifndef __XF_SLE_TYPES_H__
#define __XF_SLE_TYPES_H__

/* ==================== [Includes] ========================================== */

#include "xf_utils.h"

#define XF_SLE_IS_ENABLE 1

#if XF_SLE_IS_ENABLE

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

#if (!defined(CONFIG_XF_SLE_DEBUG_ENABLE)) || (CONFIG_XF_SLE_DEBUG_ENABLE == 0)
#define XF_SLE_DEBUG_ENABLE    0
#else
#define XF_SLE_DEBUG_ENABLE    1
#endif

/* ==================== [Typedefs] ========================================== */

/**
 * @brief SLE 地址长度
 */
#define XF_SLE_ADDR_LEN        6

/**
 * @brief SLE 地址打印格式
 */
#define XF_SLE_ADDR_PRINT_FMT  "%02X:%02X:%02X:%02X:%02X:%02X"

/**
 * @brief SLE 地址展开为参数
 *
 * @note 一般用于配合 'XF_SLE_ADDR_PRINT_FMT' 进行地址打印输出
 */
#define XF_SLE_ADDR_EXPAND_TO_ARG(addr)  (addr)[0],(addr)[1],(addr)[2],(addr)[3],(addr)[4],(addr)[5]

/**
 * @brief  SLE 地址类型
 */
typedef enum {
    XF_SLE_ADDRESS_TYPE_PUBLIC = 0,     /*!< 公有地址 */
    XF_SLE_ADDRESS_TYPE_RANDOM = 6,     /*!< 随机地址 */
} xf_sle_addr_type_t;

/**
 * @brief  SLE 地址信息
 */
typedef struct {
    xf_sle_addr_type_t type;            /*!< SLE 地址类型 */
    uint8_t addr[XF_SLE_ADDR_LEN];      /*!< SLE 地址值 */
} xf_sle_addr_t;

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* XF_SLE_IS_ENABLE */

#endif /* __XF_SLE_TYPES_H__ */
