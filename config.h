/* Handedness. */
#define EE_HANDS
#define MASTER_RIGHT
// #define SPLIT_USB_DETECT
#define USB_SUSPEND_WAKEUP_DELAY 200
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT

#define POINTING_DEVICE_ROTATION_90
// #define POINTING_DEVICE_INVERT_X
// #define POINTING_DEVICE_INVERT_Y
#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define CIRQUE_PINNACLE_TAP_ENABLE
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
// #define CIRQUE_PINNACLE_ADDR 0x2A
#define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_1X

#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN D1
// #define I2C1_SDA_PAL_MODE 4
#define I2C1_SCL_PIN D0
// #define I2C1_SCL_PAL_MODE 4

#define USE_SERIAL
#define SERIAL_USART_DRIVER SD2
#define SOFT_SERIAL_PIN D2
#define DEBOUNCE 15

/* CRC. 
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED */

#define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS

enum unicode_names {
    DE_LOWER,
    DE_UPPER,
    EF_LOWER,
    EF_UPPER,
};

// й ц у к е
// ф і в а п
// я ч с м и

const uint32_t PROGMEM unicode_map[] = {
    [YI_LOWER] = 0x0439,  // й
    [YI_UPPER] = 0x0419,

    [CC_LOWER] = 0x0446,  // ц
    [CC_UPPER] = 0x0426,

    [UU_LOWER] = 0x0443,  // у
    [UU_UPPER] = 0x0423,

    [KA_LOWER] = 0x043A,  // к
    [KA_UPPER] = 0x041A,

    [EE_LOWER] = 0x0435,  // е
    [EE_UPPER] = 0x0415,
};

#define XP_YI XP(YI_LOWER, YI_UPPER)
#define XP_CC XP(CC_LOWER, CC_UPPER)
#define XP_UU XP(UU_LOWER, UU_UPPER)
#define XP_KA XP(KA_LOWER, KA_UPPER)
#define XP_EE XP(EE_LOWER, EE_UPPER)

