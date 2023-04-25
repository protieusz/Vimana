The PCB Gerber files have not been tested nor been printed yet.  Due to budget constraints, I will not be printing them. The PCB design was created in EasyEDA and auto routing has been used.  There were no DRC errors. MCU required will be Elite C or Pro Micro but you have to double check the pins since I didn't check for PM when I initially design it.  The reason of using PM based mcu is because the Meshi Trackball module needs 5V to function and if your use RP2040 and hook it up to VBUS or 5v, in the long run the feedback will kill the mcu eventually unless you know how to use the level shifter.

The gerbers are free for you guys to modify and print but be warn, print at your own risk and I don't accept any responsibilities. The same goes with switch plate and backplate.  No gurantee that they will fit. No support will be given. Have fun and good luck.

List of Supplies needed for build:

`-` Elite-C mcu

`-` SMD diode 0805 SOD-123

`-` 26AWG tinned single core copper wires

`-` Aki's Meshi trackball modul
