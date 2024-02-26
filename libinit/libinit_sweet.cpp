/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t sweetin_info = {
    .hwc_value = "INDIA",
    .sku_value = "std",

    .brand = "Redmi",
    .device = "sweetin",
    .marketname = "Redmi Note 10 Pro",
    .model = "M2101K6P",
    .build_fingerprint = "Redmi/sweetin/sweetin:13/RKQ1.210614.002/V14.0.1.0.TKFINXM:user/release-keys",
    .build_description = "sweetin-user 13 TKQ1.221013.002 V14.0.1.0.TKFINXM release-keys",
    .mod_device = "sweetin_in_global",

    .nfc = false,
};

static const variant_info_t sweetinpro_info = {
    .hwc_value = "INDIA",
    .sku_value = "pro",

    .brand = "Redmi",
    .device = "sweetin",
    .marketname = "Redmi Note 10 Pro Max",
    .model = "M2101K6I",
    .build_fingerprint = "Redmi/sweetinpro/sweetin:13/RKQ1.210614.002/V14.0.1.0.TKFINXM:user/release-keys",
    .build_description = "sweetinpro-user 13 TKQ1.221013.002 V14.0.1.0.TKFINXM release-keys",
    .mod_device = "sweetin_in_global",

    .nfc = false,
};

static const variant_info_t sweet_global_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "sweet_k6a",
    .marketname = "Redmi Note 12 Pro 4G",
    .model = "2209116AG",
    .build_fingerprint = "Redmi/sweet_global2/sweet:11/RKQ1.210614.002/V14.0.5.0.THGMIXM:user/release-keys",
    .build_description = "sweet_global2-user 13 TKQ1.221114.001 V14.0.5.0.THGMIXM release-keys",
    .mod_device = "sweet_k6a_global",

    .nfc = true,
};

static const std::vector<variant_info_t> variants = {
    sweetin_info,
    sweetinpro_info,
    sweet_global_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
