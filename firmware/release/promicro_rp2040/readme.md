# Flashing Pro Micro (RP2040) Firmware

This directory contains prebuilt firmware for for the **Pro Micro RP2040** version of the Wings60:

- `wings60_rp2040_left_vial.uf2`
- `wings60_rp2040_right_vial.uf2`

Flash the **left** file to the left half, and the **right** file to the right half.

## Before you start

You will need to put your RP2040 board into bootloader mode. This brings up a drive where you can copy the uf2 file there.

If you have brand new boards they should go into bootloader and bring up the drive after connecting them to your PC via USB. However, some boards already have firmware on and depending on what firmware is on the board you should be able to either **double tap reset (or short reset pin to ground twice)** to enter bootloader, **or hold the boot switch and connect USB.** So it would be a good idea to **flash firmware to your boards before socketing them into Wings60 PCB.**

After you flash Wings60 firmware once, subsequent flashing can be done by double tapping the reset switch **SW1** on the Wings60 pcb.

## Important notes

- Flash **one half at a time**
- Unplug the other half while flashing to avoid confusion

## Troubleshooting

### Double tapping reset switch does not put the contrller into bootloader

This is common with some boards, to flash you would have to hold the boot switch on the board if it has one, or short the Boot pin to ground and connect the board to USB.

### Columns on the keyboard are reversed

This happens if you flash the right side firmware to left and vice versa. Flash the correct half to fix.


