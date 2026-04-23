# Wings60

![wings60](../../gallery/wings60pcb.png)


* Keyboard Maintainer: [hamid](https://github.com/codefresco)
* Hardware Supported: *Atmega32u4, Weact Blackpill F411, R2040*


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Building firmware for Wings60

### Pro micro atmega32u4
Variants with an avr pro micro have less firmware space available, so some vial features are disabled and only the 3 layer keymap fits. Please review in rules.mk.

Compile firmware (or grab from release directory) for left and right sides, for atmega32u4.
```
qmk compile -kb wings60/avr/left -km vial3layer
qmk compile -kb wings60/avr/right -km vial3layer
```

To flash the resulting `wings60_avr_left_vial3layer.hex` and `wings60_avr_right_vial3layer.hex` file use avrdude:

```
avrdude -p atmega32u4 -c avr109 -P [YOUR_COM_PORT] -U flash:w:wings60_avr_left_vial3layer.hex:i
```
replace [YOUR_COM_PORT] with the com port that the pro micro is connected and double tap SW1 on the pcb (reset button) before flashing. Repeat for the right side.

## Pro micro RP2040
Based on a raspberry pico rp2040. Firmware TBD

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Double tap the SW1 butoon on the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
