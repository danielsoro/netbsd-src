/*	$NetBSD: sifive-fu740-prci.h,v 1.2 2024/08/12 10:55:56 skrll Exp $	*/

/* SPDX-License-Identifier: (GPL-2.0 OR MIT) */
/*
 * Copyright (C) 2019 SiFive, Inc.
 * Wesley Terpstra
 * Paul Walmsley
 * Zong Li
 */

#ifndef __DT_BINDINGS_CLOCK_SIFIVE_FU740_PRCI_H
#define __DT_BINDINGS_CLOCK_SIFIVE_FU740_PRCI_H

/* Clock indexes for use by Device Tree data and the PRCI driver */

#define FU740_PRCI_CLK_COREPLL		0
#define FU740_PRCI_CLK_DDRPLL		1
#define FU740_PRCI_CLK_GEMGXLPLL	2
#define FU740_PRCI_CLK_DVFSCOREPLL	3
#define FU740_PRCI_CLK_HFPCLKPLL	4
#define FU740_PRCI_CLK_CLTXPLL		5
#define FU740_PRCI_CLK_TLCLK		6
#define FU740_PRCI_CLK_PCLK		7
#define FU740_PRCI_CLK_PCIE_AUX		8

#endif	/* __DT_BINDINGS_CLOCK_SIFIVE_FU740_PRCI_H */
