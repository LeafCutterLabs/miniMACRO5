# miniMACRO5
QMK powered macropad based on Arduino Pro Mini with support for up to 5 rotary encoders or 5 mechanical switches and RGB underglow.
![](photos/finish3.jpg)
<br>
<p style=":center"><a href="https://www.tindie.com/products/13487/" target="_blank"><img src="https://github.com/LeafCutterLabs/docs/blob/master/GetOneNow.png" width="500"></a></p>
<br><b>BOM:</b>
<br>1 - Arduino Pro Micro with headers - SparkFun, eBay, Amazon
<br>2 - Rotary encoders - Bourns Pec12r and Pec11r, Alps, and the cheap chinesse versions have been tasted. Any quadrature encocder that fits should work. Supports switch encoders.
<br>3 - Cherry MX style switches
<br>4 - Reset switch (optional)
<br>5 - ICSP headers (optional)
<br>6 - WS2812 strip for RGB underglow (optional)
<br>7 - Case (3d printable STL in /hardware) and M2 mounting screws
<br><h1>Assembly:</h1>
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
