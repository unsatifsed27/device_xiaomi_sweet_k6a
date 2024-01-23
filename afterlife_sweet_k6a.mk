#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit from sweet_k6a device
$(call inherit-product, device/xiaomi/sweet_k6a/device.mk)

# Inherit some common AfterlifeOS stuff
AFTERLIFE_VERSION_APPEND_TIME_OF_DAY := true
AFTERLIFE_BUILD_TYPE := OFFICIAL
AFTERLIFE_MAINTAINER := Djampt~二十七
BUILD_AOSP_CAMERA := true
TARGET_FACE_UNLOCK_SUPPORTED := true
TARGET_SUPPORTS_BLUR := true
USE_PIXEL_CHARGING := true
TARGET_SUPPORTS_QUICK_TAP := true
$(call inherit-product, vendor/afterlife/config/common_full_phone.mk)

PRODUCT_NAME := afterlife_sweet_k6a
PRODUCT_DEVICE := sweet_k6a
PRODUCT_BRAND := Redmi
PRODUCT_MODEL := Redmi Note 12 Pro 4G
PRODUCT_MANUFACTURER := Xiaomi

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
