// Copyright 2022 Google LLC.
// SPDX-License-Identifier: Apache-2.0

enum unicode_names {
    DE_LOWER,
    DE_UPPER,
    EF_LOWER,
    EF_UPPER,
};

const uint32_t unicode_map[] PROGMEM = {
    [YI_LOWER] = 0x0439,
    [YI_UPPER] = 0x0419,
    [CC_LOWER] = 0x0446,
    [CC_UPPER] = 0x0426,
    [UU_LOWER] = 0x0443,
    [UU_UPPER] = 0x0423,
    [KA_LOWER] = 0x043A,
    [KA_UPPER] = 0x041A,
    [EE_LOWER] = 0x0435,
    [EE_UPPER] = 0x0415,
};

#define XP_YI XP(YI_LOWER, YI_UPPER)
#define XP_CC XP(CC_LOWER, CC_UPPER)
#define XP_UU XP(UU_LOWER, UU_UPPER)
#define XP_KA XP(KA_LOWER, KA_UPPER)
#define XP_EE XP(EE_LOWER, EE_UPPER)

