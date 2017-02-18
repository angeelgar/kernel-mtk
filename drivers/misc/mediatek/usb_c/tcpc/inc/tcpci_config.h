/*
 * Copyright (C) 2016 Richtek Technology Corp.
 *
 * Author: TH <tsunghan_tsai@richtek.com>
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef __LINUX_TCPC_CONFIG_H
#define __LINUX_TCPC_CONFIG_H

/* default config */

#define CONFIG_PD_DBG_INFO

/* #define CONFIG_TYPEC_USE_DIS_VBUS_CTRL */
#define CONFIG_TYPEC_POWER_CTRL_INIT

#define CONFIG_TYPEC_CAP_TRY_SOURCE
#define CONFIG_TYPEC_CAP_TRY_SINK

/* #define CONFIG_TYPEC_CAP_DBGACC_SNK */
/* #define CONFIG_TYPEC_CAP_CUSTOM_SRC */

/* #define CONFIG_TYPEC_CHECK_CC_STABLE */
/* #define CONFIG_TYPEC_ATTACHED_SRC_SAFE0V_DELAY */
#define CONFIG_TYPEC_ATTACHED_SRC_SAFE0V_TIMEOUT

#define CONFIG_TYPEC_CHECK_LEGACY_CABLE
#define CONFIG_TYPEC_CHECK_LEGACY_CABLE2
#define CONFIG_TYPEC_LEGACY2_AUTO_RECYCLE
/* #define CONFIG_TYPEC_CHECK_SRC_UNATTACH_OPEN */

#define CONFIG_TYPEC_CAP_RA_DETACH
#define CONFIG_TYPEC_CAP_LPM_WAKEUP_WATCHDOG

#define CONFIG_TYPEC_CAP_POWER_OFF_CHARGE

#define CONFIG_TYPEC_CAP_ROLE_SWAP
#define CONFIG_TYPEC_CAP_ROLE_SWAP_TOUT		1200

#define CONFIG_TYPEC_CAP_AUTO_DISCHARGE
#define CONFIG_TYPEC_CAP_AUTO_DISCHARGE_TOUT	50

#define CONFIG_TYPEC_CAP_FORCE_DISCHARGE

#define CONFIG_TYPEC_CAP_AUDIO_ACC_SINK_VBUS

/* #define CONFIG_TYPEC_CAP_CUSTOM_HV */

#define CONFIG_TYPEC_NOTIFY_ATTACHWAIT_SNK
/* #define CONFIG_TYPEC_NOTIFY_ATTACHWAIT_SRC */
#define CONFIG_TCPC_ATTACH_WAKE_LOCK_TOUT     5

#define CONFIG_TCPC_DBG_PRESTR	"TCPC-"

/*
 * USB 2.0 & 3.0 current
 * Unconfigured :	100 / 150 mA
 * Configured :		500 / 900 mA
 */

#define CONFIG_TYPEC_SNK_CURR_DFT		150
#define CONFIG_TYPEC_SRC_CURR_DFT		500
#define CONFIG_TYPEC_SNK_CURR_LIMIT		0

#define CONFIG_TCPC_SOURCE_VCONN
/* #define CONFIG_TCPC_FORCE_DISCHARGE_IC */
#define CONFIG_TCPC_FORCE_DISCHARGE_EXT

/* #define CONFIG_TCPC_AUTO_DISCHARGE_IC */
#define CONFIG_TCPC_AUTO_DISCHARGE_EXT

#define CONFIG_TCPC_VSAFE0V_DETECT
/* #define CONFIG_TCPC_VSAFE0V_DETECT_EXT */
#define CONFIG_TCPC_VSAFE0V_DETECT_IC

#define CONFIG_TCPC_LPM_CONFIRM
#define CONFIG_TCPC_LPM_POSTPONE

#define CONFIG_TCPC_LOW_POWER_MODE
/* #define CONFIG_TCPC_IDLE_MODE */
#define CONFIG_TCPC_CLOCK_GATING

/* #define CONFIG_TCPC_WATCHDOG_EN */
/* #define CONFIG_TCPC_INTRST_EN */
#define CONFIG_TCPC_I2CRST_EN

#define CONFIG_TCPC_SHUTDOWN_CC_DETACH
#define CONFIG_TCPC_SHUTDOWN_VBUS_DISABLE

#ifdef CONFIG_USB_POWER_DELIVERY

/* Experimental for CodeSize */
#define CONFIG_USB_PD_DR_SWAP
#define CONFIG_USB_PD_PR_SWAP
#define CONFIG_USB_PD_VCONN_SWAP
#define CONFIG_USB_PD_PE_SINK
#define CONFIG_USB_PD_PE_SOURCE

#define CONFIG_USB_PD_LEGACY_TCPM

/* #define CONFIG_USB_PD_RICHTEK_UVDM */

#define CONFIG_USB_PD_MODE_OPERATION

#ifdef CONFIG_USB_PD_MODE_OPERATION
#define CONFIG_USB_PD_ALT_MODE
#define CONFIG_USB_PD_ALT_MODE_DFP

/* #define CONFIG_USB_PD_DP_CHECK_CABLE */
/* #define CONFIG_USB_PD_RTDC_CHECK_CABLE */
#endif /* CONFIG_USB_PD_MODE_OPERATION */

#define CONFIG_USB_PD_ALT_MODE_RTDC

#define CONFIG_USB_PD_KEEP_PARTNER_ID
#define CONFIG_USB_PD_KEEP_SVIDS
#define CONFIG_USB_PD_SRC_STARTUP_DISCOVER_ID
#define CONFIG_USB_PD_DFP_READY_DISCOVER_ID

#define CONFIG_USB_PD_RANDOM_FLOW_DELAY

#define CONFIG_USB_PD_DFP_FLOW_DELAY
/* #define CONFIG_USB_PD_DFP_FLOW_DELAY_STARTUP */
#define CONFIG_USB_PD_DFP_FLOW_DELAY_DRSWAP
#define CONFIG_USB_PD_DFP_FLOW_DELAY_RESET

/* Only in startup */
#define CONFIG_USB_PD_UFP_FLOW_DELAY

#define CONFIG_USB_PD_ATTEMP_DISCOVER_ID
#define CONFIG_USB_PD_ATTEMP_DISCOVER_SVID

#define CONFIG_USB_PD_DISCOVER_CABLE_REQUEST_VCONN
#define CONFIG_USB_PD_DISCOVER_CABLE_RETURN_VCONN

/* #define CONFIG_USB_PD_PR_SWAP_ERROR_RECOVERY */

#define CONFIG_USB_PD_UVDM
/* #define CONFIG_USB_PD_CUSTOM_DBGACC */

/* #define CONFIG_USB_PD_RECV_HRESET_COUNTER */
#define CONFIG_USB_PD_SNK_DFT_NO_GOOD_CRC
#define CONFIG_USB_PD_IGNORE_PS_RDY_AFTER_PR_SWAP

#define CONFIG_USB_PD_IGNORE_HRESET_COMPLETE_TIMER
#define CONFIG_USB_PD_DROP_REPEAT_PING
#define CONFIG_USB_PD_CHECK_DATA_ROLE
#define CONFIG_USB_PD_RETRY_CRC_DISCARD
#define CONFIG_USB_PD_PARTNER_CTRL_MSG_FIRST

#define CONFIG_USB_PD_SNK_HRESET_KEEP_DRAW
/* #define CONFIG_USB_PD_SNK_IGNORE_HRESET_IF_TYPEC_ONLY */
#define CONFIG_USB_PD_SNK_STANDBY_POWER
#define CONFIG_USB_PD_SNK_GOTOMIN

/* #define CONFIG_USB_PD_SRC_HIGHCAP_POWER */
#define CONFIG_USB_PD_SRC_TRY_PR_SWAP_IF_BAD_PW

#define CONFIG_USB_PD_TRANSMIT_BIST2
#define CONFIG_USB_PD_POSTPONE_VDM
#define CONFIG_USB_PD_POSTPONE_RETRY_VDM
#define CONFIG_USB_PD_POSTPONE_FIRST_VDM
#define CONFIG_USB_PD_POSTPONE_OTHER_VDM
/* #define CONFIG_USB_PD_STOP_SEND_VDM_IF_RX_BUSY */
#define CONFIG_USB_PD_STOP_REPLY_VDM_IF_RX_BUSY

/* #define CONFIG_USB_PD_SAFE0V_DELAY */
/* #define CONFIG_USB_PD_SAFE0V_TIMEOUT */

#ifndef CONFIG_USB_PD_DFP_FLOW_RETRY_MAX
#define CONFIG_USB_PD_DFP_FLOW_RETRY_MAX 2
#endif	/* CONFIG_USB_PD_DFP_FLOW_RETRY_MAX */

#ifndef CONFIG_USB_PD_VBUS_STABLE_TOUT
#define CONFIG_USB_PD_VBUS_STABLE_TOUT 125
#endif	/* CONFIG_USB_PD_VBUS_STABLE_TOUT */

#ifndef CONFIG_USB_PD_VBUS_PRESENT_TOUT
#define CONFIG_USB_PD_VBUS_PRESENT_TOUT	20
#endif	/* CONFIG_USB_PD_VBUS_PRESENT_TOUT */

#ifndef CONFIG_USB_PD_UVDM_TOUT
#define CONFIG_USB_PD_UVDM_TOUT	500
#endif	/* CONFIG_USB_PD_UVDM_TOUT */

#ifndef CONFIG_USB_PD_VCONN_READY_TOUT
#define CONFIG_USB_PD_VCONN_READY_TOUT		5
#endif	/* CONFIG_USB_PD_VCONN_READY_TOUT */

#endif /* CONFIG_USB_POWER_DELIVERY */

/* debug config */
/* #define CONFIG_USB_PD_DBG_ALERT_STATUS */
/* #define CONFIG_USB_PD_DBG_SKIP_ALERT_HANDLER */

#endif /* __LINUX_TCPC_CONFIG_H */
