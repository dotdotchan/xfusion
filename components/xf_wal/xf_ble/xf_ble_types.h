/**
 * @file xf_ble_types.h
 * @author dotc (dotchan@qq.com)
 * @brief
 * @version 1.0
 * @date 2024-08-06
 *
 * Copyright (c) 2024, CorAL. All rights reserved.
 *
 */

#ifndef __XF_BLE_TYPES_H__
#define __XF_BLE_TYPES_H__

/* ==================== [Includes] ========================================== */

#include "xf_utils.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ==================== [Defines] =========================================== */

#define XF_BLE_IS_ENABLE 1

/* ==================== [Typedefs] ========================================== */

/**
 * @brief BLE GAP 事件
 */
typedef enum {
    XF_BLE_GAP_EVT_CONNECT,                 /*!< 连接事件 */
    XF_BLE_GAP_EVT_DISCONNECT,              /*!< 断连事件 */
    XF_BLE_GAP_EVT_PAIR_END,                /*!< 配对结束事件 */
    XF_BLE_GAP_EVT_CONN_PARAMS_UPDATE,      /*!< 连接参数更新事件 */
    XF_BLE_GAP_EVT_SCAN_PARAM_SET,          /*!< 扫描参数设置事件 */
    XF_BLE_GAP_EVT_SCAN_RESULT,             /*!< 收到扫描结果事件 */
    XF_BLE_GAP_ADV_STARTED,                 /*!< 广播开启事件 */
    XF_BLE_GAP_ADV_STOPPED,                 /*!< 广播停止事件 */
    _XF_BLE_GAP_EVT_ENUM_END,                /*!< GAP 事件枚举结束值 */
} xf_ble_gap_event_t;

/* FIXME gap 与 gatt 事件以及事件回调分离 */

/**
 * @brief BLE GATTS 事件
 */
typedef enum {
    XF_BLE_GATTS_EVT_ADD_SERVICE = _XF_BLE_GAP_EVT_ENUM_END,    /*!< 服务添加事件 */
    XF_BLE_GATTS_EVT_DEL_SERVICE,                               /*!< 服务移除事件 */
    XF_BLE_GATTS_EVT_ADD_CHARA,                                 /*!< 特征添加事件 */
    XF_BLE_GATTS_EVT_ADD_DESC,                                  /*!< 特征描述符事件 */
    XF_BLE_GATTS_EVT_SERVICE_START,                             /*!< 服务开启事件 */
    XF_BLE_GATTS_EVT_SERVICE_STOP,                              /*!< 服务停止事件 */
    XF_BLE_GATTS_EVT_REQ_READ,                                  /*!< 接收到读请求事件 */
    XF_BLE_GATTS_EVT_REQ_WRITE,                                 /*!< 接收到写请求事件 */
    XF_BLE_GATTS_EVT_MTU_CHANGED,                               /*!< MTU 变更事件 */
} xf_ble_gatts_event_t;

/**
 * @brief BLE GATTC 事件
 */
typedef enum {
    XF_BLE_GATTC_EVT_DISCOVER_SERVICE_COMPLETE = _XF_BLE_GAP_EVT_ENUM_END,  /*!< 服务结构发现完毕事件 */
    XF_BLE_GATTC_EVT_MTU_CHANGED,                                           /*!< MTU 变更事件 */
    XF_BLE_GATTC_EVT_WRITE_COMPLETE,                                        /*!< 写完成事件 */
    XF_BLE_GATTC_EVT_READ_COMPLETE,                                         /*!< 读完成事件 */
    XF_BLE_GATTC_EVT_RECV_NOTIFICATION_OR_INDICATION,                       /*!< 收到通知或指示事件 */
} xf_ble_gattc_event_t;

/* ==================== [Global Prototypes] ================================= */

/* ==================== [Macros] ============================================ */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __XF_BLE_TYPES_H__ */
