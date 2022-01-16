/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#ifndef _CAM_IFE_CSID_170_200_H_
#define _CAM_IFE_CSID_170_200_H_

#include "cam_ife_csid_core.h"

static struct cam_ife_csid_pxl_reg_offset
	cam_ife_csid_170_200_ipp_reg_offset = {
	.csid_pxl_irq_status_addr            = 0x30,
	.csid_pxl_irq_mask_addr              = 0x34,
	.csid_pxl_irq_clear_addr             = 0x38,
	.csid_pxl_irq_set_addr               = 0x3c,

	.csid_pxl_cfg0_addr                  = 0x200,
	.csid_pxl_cfg1_addr                  = 0x204,
	.csid_pxl_ctrl_addr                  = 0x208,
	.csid_pxl_frm_drop_pattern_addr      = 0x20c,
	.csid_pxl_frm_drop_period_addr       = 0x210,
	.csid_pxl_irq_subsample_pattern_addr = 0x214,
	.csid_pxl_irq_subsample_period_addr  = 0x218,
	.csid_pxl_hcrop_addr                 = 0x21c,
	.csid_pxl_vcrop_addr                 = 0x220,
	.csid_pxl_pix_drop_pattern_addr      = 0x224,
	.csid_pxl_pix_drop_period_addr       = 0x228,
	.csid_pxl_line_drop_pattern_addr     = 0x22c,
	.csid_pxl_line_drop_period_addr      = 0x230,
	.csid_pxl_rst_strobes_addr           = 0x240,
	.csid_pxl_status_addr                = 0x254,
	.csid_pxl_misr_val_addr              = 0x258,
	.csid_pxl_format_measure_cfg0_addr   = 0x270,
	.csid_pxl_format_measure_cfg1_addr   = 0x274,
	.csid_pxl_format_measure0_addr       = 0x278,
	.csid_pxl_format_measure1_addr       = 0x27c,
	.csid_pxl_format_measure2_addr       = 0x280,
	.csid_pxl_timestamp_curr0_sof_addr   = 0x290,
	.csid_pxl_timestamp_curr1_sof_addr   = 0x294,
	.csid_pxl_timestamp_perv0_sof_addr   = 0x298,
	.csid_pxl_timestamp_perv1_sof_addr   = 0x29c,
	.csid_pxl_timestamp_curr0_eof_addr   = 0x2a0,
	.csid_pxl_timestamp_curr1_eof_addr   = 0x2a4,
	.csid_pxl_timestamp_perv0_eof_addr   = 0x2a8,
	.csid_pxl_timestamp_perv1_eof_addr   = 0x2ac,
	/* configurations */
	.pix_store_en_shift_val              = 7,
	.early_eof_en_shift_val              = 29,
	.quad_cfa_bin_en_shift_val           = 30,
	.ccif_violation_en                   = 1,
	.halt_master_sel_en                  = 1,
	.halt_sel_internal_master_val        = 3,
};

static struct cam_ife_csid_pxl_reg_offset
	cam_ife_csid_170_200_ppp_reg_offset = {
	.csid_pxl_irq_status_addr            = 0xa0,
	.csid_pxl_irq_mask_addr              = 0xa4,
	.csid_pxl_irq_clear_addr             = 0xa8,
	.csid_pxl_irq_set_addr               = 0xac,

	.csid_pxl_cfg0_addr                  = 0x700,
	.csid_pxl_cfg1_addr                  = 0x704,
	.csid_pxl_ctrl_addr                  = 0x708,
	.csid_pxl_frm_drop_pattern_addr      = 0x70c,
	.csid_pxl_frm_drop_period_addr       = 0x710,
	.csid_pxl_irq_subsample_pattern_addr = 0x714,
	.csid_pxl_irq_subsample_period_addr  = 0x718,
	.csid_pxl_hcrop_addr                 = 0x71c,
	.csid_pxl_vcrop_addr                 = 0x720,
	.csid_pxl_pix_drop_pattern_addr      = 0x724,
	.csid_pxl_pix_drop_period_addr       = 0x728,
	.csid_pxl_line_drop_pattern_addr     = 0x72c,
	.csid_pxl_line_drop_period_addr      = 0x730,
	.csid_pxl_rst_strobes_addr           = 0x740,
	.csid_pxl_status_addr                = 0x754,
	.csid_pxl_misr_val_addr              = 0x758,
	.csid_pxl_format_measure_cfg0_addr   = 0x770,
	.csid_pxl_format_measure_cfg1_addr   = 0x774,
	.csid_pxl_format_measure0_addr       = 0x778,
	.csid_pxl_format_measure1_addr       = 0x77c,
	.csid_pxl_format_measure2_addr       = 0x780,
	.csid_pxl_timestamp_curr0_sof_addr   = 0x790,
	.csid_pxl_timestamp_curr1_sof_addr   = 0x794,
	.csid_pxl_timestamp_perv0_sof_addr   = 0x798,
	.csid_pxl_timestamp_perv1_sof_addr   = 0x79c,
	.csid_pxl_timestamp_curr0_eof_addr   = 0x7a0,
	.csid_pxl_timestamp_curr1_eof_addr   = 0x7a4,
	.csid_pxl_timestamp_perv0_eof_addr   = 0x7a8,
	.csid_pxl_timestamp_perv1_eof_addr   = 0x7ac,
	/* configurations */
	.pix_store_en_shift_val              = 7,
	.early_eof_en_shift_val              = 29,
	.ccif_violation_en                   = 1,
	.halt_master_sel_en                  = 1,
	.halt_sel_internal_master_val        = 3,
};


static struct cam_ife_csid_rdi_reg_offset
	cam_ife_csid_170_200_rdi_0_reg_offset = {
	.csid_rdi_irq_status_addr                 = 0x40,
	.csid_rdi_irq_mask_addr                   = 0x44,
	.csid_rdi_irq_clear_addr                  = 0x48,
	.csid_rdi_irq_set_addr                    = 0x4c,
	.csid_rdi_cfg0_addr                       = 0x300,
	.csid_rdi_cfg1_addr                       = 0x304,
	.csid_rdi_ctrl_addr                       = 0x308,
	.csid_rdi_frm_drop_pattern_addr           = 0x30c,
	.csid_rdi_frm_drop_period_addr            = 0x310,
	.csid_rdi_irq_subsample_pattern_addr      = 0x314,
	.csid_rdi_irq_subsample_period_addr       = 0x318,
	.csid_rdi_rpp_hcrop_addr                  = 0x31c,
	.csid_rdi_rpp_vcrop_addr                  = 0x320,
	.csid_rdi_rpp_pix_drop_pattern_addr       = 0x324,
	.csid_rdi_rpp_pix_drop_period_addr        = 0x328,
	.csid_rdi_rpp_line_drop_pattern_addr      = 0x32c,
	.csid_rdi_rpp_line_drop_period_addr       = 0x330,
	.csid_rdi_rst_strobes_addr                = 0x340,
	.csid_rdi_status_addr                     = 0x350,
	.csid_rdi_misr_val0_addr                  = 0x354,
	.csid_rdi_misr_val1_addr                  = 0x358,
	.csid_rdi_misr_val2_addr                  = 0x35c,
	.csid_rdi_misr_val3_addr                  = 0x360,
	.csid_rdi_format_measure_cfg0_addr        = 0x370,
	.csid_rdi_format_measure_cfg1_addr        = 0x374,
	.csid_rdi_format_measure0_addr            = 0x378,
	.csid_rdi_format_measure1_addr            = 0x37c,
	.csid_rdi_format_measure2_addr            = 0x380,
	.csid_rdi_timestamp_curr0_sof_addr        = 0x390,
	.csid_rdi_timestamp_curr1_sof_addr        = 0x394,
	.csid_rdi_timestamp_prev0_sof_addr        = 0x398,
	.csid_rdi_timestamp_prev1_sof_addr        = 0x39c,
	.csid_rdi_timestamp_curr0_eof_addr        = 0x3a0,
	.csid_rdi_timestamp_curr1_eof_addr        = 0x3a4,
	.csid_rdi_timestamp_prev0_eof_addr        = 0x3a8,
	.csid_rdi_timestamp_prev1_eof_addr        = 0x3ac,
	.csid_rdi_byte_cntr_ping_addr             = 0x3e0,
	.csid_rdi_byte_cntr_pong_addr             = 0x3e4,
	.ccif_violation_en                        = 1,
};

static struct cam_ife_csid_rdi_reg_offset
	cam_ife_csid_170_200_rdi_1_reg_offset = {
	.csid_rdi_irq_status_addr                 = 0x50,
	.csid_rdi_irq_mask_addr                   = 0x54,
	.csid_rdi_irq_clear_addr                  = 0x58,
	.csid_rdi_irq_set_addr                    = 0x5c,
	.csid_rdi_cfg0_addr                       = 0x400,
	.csid_rdi_cfg1_addr                       = 0x404,
	.csid_rdi_ctrl_addr                       = 0x408,
	.csid_rdi_frm_drop_pattern_addr           = 0x40c,
	.csid_rdi_frm_drop_period_addr            = 0x410,
	.csid_rdi_irq_subsample_pattern_addr      = 0x414,
	.csid_rdi_irq_subsample_period_addr       = 0x418,
	.csid_rdi_rpp_hcrop_addr                  = 0x41c,
	.csid_rdi_rpp_vcrop_addr                  = 0x420,
	.csid_rdi_rpp_pix_drop_pattern_addr       = 0x424,
	.csid_rdi_rpp_pix_drop_period_addr        = 0x428,
	.csid_rdi_rpp_line_drop_pattern_addr      = 0x42c,
	.csid_rdi_rpp_line_drop_period_addr       = 0x430,
	.csid_rdi_rst_strobes_addr                = 0x440,
	.csid_rdi_status_addr                     = 0x450,
	.csid_rdi_misr_val0_addr                  = 0x454,
	.csid_rdi_misr_val1_addr                  = 0x458,
	.csid_rdi_misr_val2_addr                  = 0x45c,
	.csid_rdi_misr_val3_addr                  = 0x460,
	.csid_rdi_format_measure_cfg0_addr        = 0x470,
	.csid_rdi_format_measure_cfg1_addr        = 0x474,
	.csid_rdi_format_measure0_addr            = 0x478,
	.csid_rdi_format_measure1_addr            = 0x47c,
	.csid_rdi_format_measure2_addr            = 0x480,
	.csid_rdi_timestamp_curr0_sof_addr        = 0x490,
	.csid_rdi_timestamp_curr1_sof_addr        = 0x494,
	.csid_rdi_timestamp_prev0_sof_addr        = 0x498,
	.csid_rdi_timestamp_prev1_sof_addr        = 0x49c,
	.csid_rdi_timestamp_curr0_eof_addr        = 0x4a0,
	.csid_rdi_timestamp_curr1_eof_addr        = 0x4a4,
	.csid_rdi_timestamp_prev0_eof_addr        = 0x4a8,
	.csid_rdi_timestamp_prev1_eof_addr        = 0x4ac,
	.csid_rdi_byte_cntr_ping_addr             = 0x4e0,
	.csid_rdi_byte_cntr_pong_addr             = 0x4e4,
	.ccif_violation_en                        = 1,
};

static struct cam_ife_csid_rdi_reg_offset
	cam_ife_csid_170_200_rdi_2_reg_offset = {
	.csid_rdi_irq_status_addr                 = 0x60,
	.csid_rdi_irq_mask_addr                   = 0x64,
	.csid_rdi_irq_clear_addr                  = 0x68,
	.csid_rdi_irq_set_addr                    = 0x6c,
	.csid_rdi_cfg0_addr                       = 0x500,
	.csid_rdi_cfg1_addr                       = 0x504,
	.csid_rdi_ctrl_addr                       = 0x508,
	.csid_rdi_frm_drop_pattern_addr           = 0x50c,
	.csid_rdi_frm_drop_period_addr            = 0x510,
	.csid_rdi_irq_subsample_pattern_addr      = 0x514,
	.csid_rdi_irq_subsample_period_addr       = 0x518,
	.csid_rdi_rpp_hcrop_addr                  = 0x51c,
	.csid_rdi_rpp_vcrop_addr                  = 0x520,
	.csid_rdi_rpp_pix_drop_pattern_addr       = 0x524,
	.csid_rdi_rpp_pix_drop_period_addr        = 0x528,
	.csid_rdi_rpp_line_drop_pattern_addr      = 0x52c,
	.csid_rdi_rpp_line_drop_period_addr       = 0x530,
	.csid_rdi_yuv_chroma_conversion_addr      = 0x534,
	.csid_rdi_rst_strobes_addr                = 0x540,
	.csid_rdi_status_addr                     = 0x550,
	.csid_rdi_misr_val0_addr                  = 0x554,
	.csid_rdi_misr_val1_addr                  = 0x558,
	.csid_rdi_misr_val2_addr                  = 0x55c,
	.csid_rdi_misr_val3_addr                  = 0x560,
	.csid_rdi_format_measure_cfg0_addr        = 0x570,
	.csid_rdi_format_measure_cfg1_addr        = 0x574,
	.csid_rdi_format_measure0_addr            = 0x578,
	.csid_rdi_format_measure1_addr            = 0x57c,
	.csid_rdi_format_measure2_addr            = 0x580,
	.csid_rdi_timestamp_curr0_sof_addr        = 0x590,
	.csid_rdi_timestamp_curr1_sof_addr        = 0x594,
	.csid_rdi_timestamp_prev0_sof_addr        = 0x598,
	.csid_rdi_timestamp_prev1_sof_addr        = 0x59c,
	.csid_rdi_timestamp_curr0_eof_addr        = 0x5a0,
	.csid_rdi_timestamp_curr1_eof_addr        = 0x5a4,
	.csid_rdi_timestamp_prev0_eof_addr        = 0x5a8,
	.csid_rdi_timestamp_prev1_eof_addr        = 0x5ac,
	.csid_rdi_byte_cntr_ping_addr             = 0x5e0,
	.csid_rdi_byte_cntr_pong_addr             = 0x5e4,
	.ccif_violation_en                        = 1,
};

static struct cam_ife_csid_csi2_rx_reg_offset
			cam_ife_csid_170_200_csi2_reg_offset = {
	.csid_csi2_rx_irq_status_addr                 = 0x20,
	.csid_csi2_rx_irq_mask_addr                   = 0x24,
	.csid_csi2_rx_irq_clear_addr                  = 0x28,
	.csid_csi2_rx_irq_set_addr                    = 0x2c,

	/*CSI2 rx control */
	.csid_csi2_rx_cfg0_addr                       = 0x100,
	.csid_csi2_rx_cfg1_addr                       = 0x104,
	.csid_csi2_rx_capture_ctrl_addr               = 0x108,
	.csid_csi2_rx_rst_strobes_addr                = 0x110,
	.csid_csi2_rx_cap_unmap_long_pkt_hdr_0_addr   = 0x120,
	.csid_csi2_rx_cap_unmap_long_pkt_hdr_1_addr   = 0x124,
	.csid_csi2_rx_captured_short_pkt_0_addr       = 0x128,
	.csid_csi2_rx_captured_short_pkt_1_addr       = 0x12c,
	.csid_csi2_rx_captured_long_pkt_0_addr        = 0x130,
	.csid_csi2_rx_captured_long_pkt_1_addr        = 0x134,
	.csid_csi2_rx_captured_long_pkt_ftr_addr      = 0x138,
	.csid_csi2_rx_captured_cphy_pkt_hdr_addr      = 0x13c,
	.csid_csi2_rx_lane0_misr_addr                 = 0x150,
	.csid_csi2_rx_lane1_misr_addr                 = 0x154,
	.csid_csi2_rx_lane2_misr_addr                 = 0x158,
	.csid_csi2_rx_lane3_misr_addr                 = 0x15c,
	.csid_csi2_rx_total_pkts_rcvd_addr            = 0x160,
	.csid_csi2_rx_stats_ecc_addr                  = 0x164,
	.csid_csi2_rx_total_crc_err_addr              = 0x168,
	.csid_csi2_rx_de_scramble_type3_cfg0_addr     = 0x170,
	.csid_csi2_rx_de_scramble_type3_cfg1_addr     = 0x174,
	.csid_csi2_rx_de_scramble_type2_cfg0_addr     = 0x178,
	.csid_csi2_rx_de_scramble_type2_cfg1_addr     = 0x17c,
	.csid_csi2_rx_de_scramble_type1_cfg0_addr     = 0x180,
	.csid_csi2_rx_de_scramble_type1_cfg1_addr     = 0x184,
	.csid_csi2_rx_de_scramble_type0_cfg0_addr     = 0x188,
	.csid_csi2_rx_de_scramble_type0_cfg1_addr     = 0x18c,

	.csi2_rst_srb_all                             = 0x3FFF,
	.csi2_rst_done_shift_val                      = 27,
	.csi2_irq_mask_all                            = 0xFFFFFFF,
	.csi2_misr_enable_shift_val                   = 6,
	.csi2_vc_mode_shift_val                       = 2,
	.csi2_capture_long_pkt_en_shift               = 0,
	.csi2_capture_short_pkt_en_shift              = 1,
	.csi2_capture_cphy_pkt_en_shift               = 2,
	.csi2_capture_long_pkt_dt_shift               = 4,
	.csi2_capture_long_pkt_vc_shift               = 10,
	.csi2_capture_short_pkt_vc_shift              = 15,
	.csi2_capture_cphy_pkt_dt_shift               = 20,
	.csi2_capture_cphy_pkt_vc_shift               = 26,
	.csi2_rx_phy_num_mask                         = 0x7,
};

static struct cam_ife_csid_csi2_tpg_reg_offset
			cam_ife_csid_170_200_tpg_reg_offset = {
	/*CSID TPG control */
	.csid_tpg_ctrl_addr                           = 0x600,
	.csid_tpg_vc_cfg0_addr                        = 0x604,
	.csid_tpg_vc_cfg1_addr                        = 0x608,
	.csid_tpg_lfsr_seed_addr                      = 0x60c,
	.csid_tpg_dt_n_cfg_0_addr                     = 0x610,
	.csid_tpg_dt_n_cfg_1_addr                     = 0x614,
	.csid_tpg_dt_n_cfg_2_addr                     = 0x618,
	.csid_tpg_color_bars_cfg_addr                 = 0x640,
	.csid_tpg_color_box_cfg_addr                  = 0x644,
	.csid_tpg_common_gen_cfg_addr                 = 0x648,
	.csid_tpg_cgen_n_cfg_addr                     = 0x650,
	.csid_tpg_cgen_n_x0_addr                      = 0x654,
	.csid_tpg_cgen_n_x1_addr                      = 0x658,
	.csid_tpg_cgen_n_x2_addr                      = 0x65c,
	.csid_tpg_cgen_n_xy_addr                      = 0x660,
	.csid_tpg_cgen_n_y1_addr                      = 0x664,
	.csid_tpg_cgen_n_y2_addr                      = 0x668,

	/* configurations */
	.tpg_dtn_cfg_offset                           = 0xc,
	.tpg_cgen_cfg_offset                          = 0x20,
	.tpg_cpas_ife_reg_offset                      = 0x28,
};

static struct cam_ife_csid_common_reg_offset
			cam_ife_csid_170_200_cmn_reg_offset = {
	.csid_hw_version_addr                         = 0x0,
	.csid_cfg0_addr                               = 0x4,
	.csid_ctrl_addr                               = 0x8,
	.csid_reset_addr                              = 0xc,
	.csid_rst_strobes_addr                        = 0x10,

	.csid_test_bus_ctrl_addr                      = 0x14,
	.csid_top_irq_status_addr                     = 0x70,
	.csid_top_irq_mask_addr                       = 0x74,
	.csid_top_irq_clear_addr                      = 0x78,
	.csid_top_irq_set_addr                        = 0x7c,
	.csid_irq_cmd_addr                            = 0x80,

	/*configurations */
	.major_version                                = 1,
	.minor_version                                = 7,
	.version_incr                                 = 0,
	.num_rdis                                     = 3,
	.num_pix                                      = 1,
	.num_ppp                                      = 1,
	.csid_reg_rst_stb                             = 1,
	.csid_rst_stb                                 = 0x1e,
	.csid_rst_stb_sw_all                          = 0x1f,
	.path_rst_stb_all                             = 0x7f,
	.path_rst_done_shift_val                      = 1,
	.path_en_shift_val                            = 31,
	.packing_fmt_shift_val                        = 30,
	.dt_id_shift_val                              = 27,
	.vc_shift_val                                 = 22,
	.dt_shift_val                                 = 16,
	.fmt_shift_val                                = 12,
	.plain_fmt_shit_val                           = 10,
	.crop_v_en_shift_val                          = 6,
	.crop_h_en_shift_val                          = 5,
	.crop_shift                                   = 16,
	.ipp_irq_mask_all                             = 0xFFFF,
	.rdi_irq_mask_all                             = 0xFFFF,
	.ppp_irq_mask_all                             = 0xFFFF,
	.measure_en_hbi_vbi_cnt_mask                  = 0xC,
	.format_measure_en_val                        = 1,
	.format_measure_height_mask_val               = 0xFFFF,
	.format_measure_height_shift_val              = 0x10,
	.format_measure_width_mask_val                = 0xFFFF,
	.format_measure_width_shift_val               = 0x0,
};

static struct cam_ife_csid_reg_offset cam_ife_csid_170_200_reg_offset = {
	.cmn_reg          = &cam_ife_csid_170_200_cmn_reg_offset,
	.csi2_reg         = &cam_ife_csid_170_200_csi2_reg_offset,
	.ipp_reg          = &cam_ife_csid_170_200_ipp_reg_offset,
	.ppp_reg          = &cam_ife_csid_170_200_ppp_reg_offset,
	.rdi_reg = {
		&cam_ife_csid_170_200_rdi_0_reg_offset,
		&cam_ife_csid_170_200_rdi_1_reg_offset,
		&cam_ife_csid_170_200_rdi_2_reg_offset,
		NULL,
		},
	.tpg_reg = &cam_ife_csid_170_200_tpg_reg_offset,
};

#endif /*_CAM_IFE_CSID_170_200_H_ */
