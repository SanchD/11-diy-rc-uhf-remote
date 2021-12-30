# Arduino Library base folder and example structure
EXAMPLES_BASE = 11-diy-rc-uhf-remote
EXAMPLE ?= 11-diy-rc-uhf-remote

# Arduino CLI executable name and directory location
ARDUINO_CLI = arduino-cli
ARDUINO_CLI_DIR = .

# Arduino CLI Board type
BOARD_TYPE ?= arduino:avr:pro

# Default port to upload to
SERIAL_PORT ?= COM18

# Optional verbose compile/upload trigger
V ?= 0
VERBOSE=
