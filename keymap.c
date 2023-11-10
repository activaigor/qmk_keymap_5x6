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
