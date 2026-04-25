# Flashing Pro Micro (ATmega32U4) Firmware

This folder contains prebuilt firmware for the **Pro Micro ATmega32U4** version of Wings60:

- `wings60_avr_left_vial3layer.hex`
- `wings60_avr_right_vial3layer.hex`

Flash the **left** file to the left half, and the **right** file to the right half.

## Before you start

You will need:

- A USB cable that supports data
- `avrdude` installed on your computer
- The correct COM port for the Pro Micro you are flashing
- A way to reset the controller into bootloader mode

If you need to reset the MCU, you can use the **SW1 reset switch on the PCB**.

## Important notes

- Flash **one half at a time**
- Unplug the other half while flashing to avoid confusion
- The keyboard may show up on a different COM port after reset; this is normal on many Pro Micro boards
- The bootloader stays available only for a short time, so have the command ready before resetting

## Install avrdude

If `avrdude` is not already installed, install it first.

Common options on Windows:

- Use QMK MSYS if you already use QMK tools
- Install `avrdude` through a package manager such as Scoop or Chocolatey
- Use an existing AVR toolchain installation if you already have one

After installation, open a terminal and confirm it works:

```powershell
avrdude -?
```

If that prints help text, `avrdude` is available.

## Find the COM port

1. Plug in the half you want to flash.
2. Open **Device Manager**.
3. Expand **Ports (COM & LPT)**.
4. Note the COM port for the Pro Micro, for example `COM7`.

If you do not see it, try another USB cable or USB port.

## Flash the left half

Open a terminal in this folder and run:

```powershell
avrdude -p atmega32u4 -c avr109 -P COM7 -U flash:w:wings60_avr_left_vial3layer.hex:i
```

Replace `COM7` with your actual port.

If `avrdude` cannot connect, reset the MCU and try again:

1. Press the **SW1 reset switch on the PCB**.
2. If needed, press it twice quickly to enter the bootloader.
3. Run the flash command again immediately.

When flashing succeeds, `avrdude` will report that writing and verification completed.

## Flash the right half

Open a terminal in this folder and run:

```powershell
avrdude -p atmega32u4 -c avr109 -P COM7 -U flash:w:wings60_avr_right_vial3layer.hex:i
```

Again, replace `COM7` with the correct port for the right half.

If needed, use the **SW1 reset switch on the PCB** before running the command.

## Recommended flashing order

1. Unplug both halves.
2. Plug in the left half.
3. Flash `wings60_avr_left_vial3layer.hex`.
4. Unplug the left half.
5. Plug in the right half.
6. Flash `wings60_avr_right_vial3layer.hex`.

## Troubleshooting

### `ser_open(): can't open device`

Usually means the COM port is wrong or the board is not in bootloader mode.

Try this:

- Check the COM port again in Device Manager
- Press the **SW1 reset switch on the PCB** and retry quickly
- Unplug and reconnect the board
- Try a different USB cable

### The COM port changes after reset

This is common for Pro Micro boards. Watch Device Manager while pressing **SW1** and use the port that appears in bootloader mode.

### Flash starts but fails part way through

Try this:

- Disconnect the other half
- Plug directly into the PC instead of a hub
- Reset with **SW1** and retry
- Make sure no other program is using the same COM port

## Summary

- Left half: `wings60_avr_left_vial3layer.hex`
- Right half: `wings60_avr_right_vial3layer.hex`
- MCU: `atmega32u4`
- Programmer: `avr109`
- Reset method: **SW1 reset switch on the PCB**

Use the same `avrdude` command for both halves and only change:

- The COM port
- The `.hex` filename