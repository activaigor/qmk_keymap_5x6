#include QMK_KEYBOARD_H


enum unicode_names {
    YI_LOWER,
    YI_UPPER,
    CC_LOWER,
    CC_UPPER,
    UU_LOWER,
    UU_UPPER,
    KA_LOWER,
    KA_UPPER,
    EE_LOWER,
    EE_UPPER,
};

const uint32_t PROGMEM unicode_map[] = {
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
