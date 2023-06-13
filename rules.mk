SRC += source.c
# MCU name
# MCU = STM32F411
# BOARD = STEMCELL

# Bootloader selection
BOOTLOADER = tinyuf2
CONVERT_TO = stemcell

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no           # Enable N-Key Rollover
AUDIO_ENABLE = no           # Audio output

SPLIT_KEYBOARD = yes

LAYOUTS = split_3x5_3

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_i2c
CIRQUE_PINNACLE_DIAMETER_MM = 50
CIRQUE_PINNACLE_ATTENUATION = EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_1X
MOUSE_SHARED_EP = no # Unify multiple HID interfaces into a single Endpoint
KEYBOARD_SHARED_EP = yes

SERIAL_DRIVER = usart
DEBOUNCE_TYPE = sym_defer_g
