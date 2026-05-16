## Warning
Before soldering switches, make sure the USB opening placement on the case matches your mounted microcontroller position on the PCB.

| Example 1 | Example 2 |
| --- | --- |
| ![Socket fit](../gallery/socket-fit.jpg) | ![Socket height](../gallery/socket-height.jpg) |

## Printable Case Types
- **Fixed-height USB opening** (`*-usb-fixed-5mm.3mf`): for total microcontroller socket height of **4.5-5mm**, with controllers that have the USB port mounted on top of their PCB.
- **Movable USB opening** (`*-usb-movable.3mf`): includes the USB opening as a **negative part** (for Bambu Studio) that can be moved up/down in **Z** to fit your microcontroller and USB port position.

## Which case is for you
Different variants of the case are available:
- `case-wired-usb-fixed-5mm.3mf` is for total socket height of 4.5-5mm and mcu boards with usb plug on top of pcb. This case is for wired builds because the power switch is covered.
- `case-wired-usb-movable.3mf` is for wired builds but there is a negative object in the slicer for the USB port of the mcu. So the USB height is adjustable. Raise or lower the negative object to fit your specific MCU and mounting height.
- `case-nice-nano-and-rp2040-usb-movable.3mf` is for wireless builds thatg use nice nano or compatible, or wired builds that use an MCU that have their USB plug inset into the board like Tenstar RP2040 pro micro. This case by default is for 5mm total socket height and has opening for the power switch. By adjustging negative objects you can move the USB height up and down or remove the opening for the power switch for wired builds. This is the most adjustable 3mf file.
- `case-for-pcb-mount-switches.3mf` is a prototype for pcb mount switches. The top plate can come off and switches sit directly on the pcb. This case is untested so it is possible it doesn't work.

## Bottom, Hardware, and Fasteners
- The case bottom included in each 3MF file is designed for **9-10mm standoffs**.
- Use **M2x8 (4 pcs)** screws for the top and **M2x4 (4 pcs)** screws for the bottom.
- Use **4 standoffs per side** of the case.

## Heat-Insert Bottom Variant
A separate bottom variant is available: `bottom-for-heat-inserts.3mf`.
- Accepts **M2x4 heat inserts** instead of standoffs.
- Use inserts meant for **plastic insertion** (not inserts intended for injection-molded plastic).
- Inserts must be installed very accurately for proper fit.
- This variant can provide a better sound profile.

![Wings60 Case Bottom](../gallery/case1.jpg)
