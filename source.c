#include QMK_KEYBOARD_H


const uint32_t PROGMEM unicode_map[] = {
    0x0439,
    0x0419,
    0x0446,
    0x0426,
    0x0443,
    0x0423,
    0x043A,
    0x041A,
    0x0435,
    0x0415,
};

enum my_keycodes {
  MYLAYER = SAFE_RANGE
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MYLAYER:
        if (record->event.pressed) {
            layer_on(3);
        } else {
            layer_off(3);
        }
        return false;
    default:
        return true;
  }
}

