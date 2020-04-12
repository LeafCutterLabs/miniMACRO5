# miniMACRO5
QMK powered macropad based on Arduino Pro Mini with support for up to 5 rotary encoders or 5 mechanical switches and RGB underglow.
![](photos/miscconfigs.jpg)
![](photos/underglow.jpg)
<br>
<a href="https://www.tindie.com/products/13487/" target="_blank"><img src="https://github.com/LeafCutterLabs/docs/blob/master/getonenow.png" width="500"></a>
<br>
<a href="https://www.etsy.com/listing/772600648/minimacro5-a-custom-programmable" target="_blank"><img src="https://github.com/LeafCutterLabs/docs/blob/master/intgetonenow.png" width="500"></a>
<br><b>BOM:</b>
<br>1 - Arduino Pro Micro with headers - SparkFun, eBay, Amazon
<br>2 - Rotary encoders - Bourns Pec12r and Pec11r, Alps, and the cheap chinesse versions have been tested. Any quadrature encocder that fits should work. Supports switch encoders.
<br>3 - Cherry MX style switches
<br>4 - Reset switch (optional)
<br>5 - ICSP headers (optional)
<br>6 - WS2812 strip for RGB underglow (optional)
<br>7 - Case (3d printable STL in /hardware) and M2 mounting screws

<br><h1>Assembly:</h1>
![](photos/parts.jpg)
Step 1: Solder in the reset switch, ICSP ports, and Pro Micro headers (you may need to trim the extra header length). Tape over the USB port to prevent shorts (the assembly is pretty tight).
![](photos/tape.jpg)
Step 2: Install rotaries wherever you want (supports up to 5). They will fit through the standard 14mm square plate hole for Cherry MX switches.
![](photos/rotaries.jpg)
Step 3: Mount the board, press in the Cherry MX keys and solder.
![](photos/casemount.jpg)
Step 4: Solder in the Pro Micro (USB port is oriented up). Add RGB (WS2812b) to VCC/DATA/GND headers.
![](photos/promicro.jpg)
Step 5: Program with QMK (look in ``/firmware/QMKv3/`) and enjoy.
![](photos/finish2.jpg)
