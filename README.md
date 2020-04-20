# miniMACRO5
QMK powered macropad based on Arduino Pro Micro with support for up to 5 rotary encoders or 5 mechanical switches and RGB underglow.
![](photos/miscconfigs.jpg)
![](photos/underglow.jpg)
<br>
<a href="https://www.etsy.com/listing/772600648/minimacro5-a-custom-programmable"><img src="https://github.com/LeafCutterLabs/docs/blob/master/getonenow.png" width="500"></a>

## Bill of materials (BOM)
### Required components
<br>1 - Arduino Pro Micro with headers - SparkFun, eBay, Amazon
<br>2 - Rotary encoders - Bourns Pec12r and Pec11r, Alps, and the cheap Chinesse versions have been tested. Any quadrature encocder that fits should work. Supports switch encoders.
<br>3 - Cherry MX style switches
<br>4 - Keycaps for your chosen switches
<br>5 - Case (3d printable STL in `/hardware`)
<br>6 - 4x 4mm M2 mounting screws

### Optional components
<br />1 - Reset switch
<br />2 - ICSP headers (only required to flash the Arduino if the Caterina bootloader is not present)
<br />3 - WS2812 strip for RGB underglow)

# Assembly
![](photos/parts.jpg)
Step 1: Solder in the reset switch, ICSP ports, and Pro Micro headers (may need to trim the extra header length). Tape over the usb port to prevent shorts (the assembly is pretty tight).
![](photos/tape.jpg)
Step 2: Install rotaries wherever you want (supports upto 5). They will fit through the standard 14mm sqaure plate hole for Cherry MX switches.
![](photos/rotaries.jpg)
Step 3: Mount the board and press in the Chrry MX keys and solder
![](photos/casemount.jpg)
Step 4: Solder in the Pro Micro (USB port is oriented up). Add RGB (WS2812b) to VCC/DATA/GND headers.
![](photos/promicro.jpg)
Step 5: Program with QMK (look in /firmware/QMKv3/) and enjoy
![](photos/finish2.jpg)
