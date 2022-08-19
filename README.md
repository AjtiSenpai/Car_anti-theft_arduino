# Car_anti-theft_arduino
It's an Atmega based anti-theft system for cars.
There are multiple version.
In general it turns off the fuel pump and the ignition system in your car making it impossible to start, some versions even send a text message to your phone with coordinates when someone tries to steal it.

CATA pinpad without gsm
It turns off the fuel pump and ignition system in your car. You can turn them back on if you put in the right pin.
It doesn´t send text message

What you will need:
for the head:
Atmega 328P
16 MHz clock crystal
2x 22pF capacitors
10 kΩ resistor
(or an Arduino uno or nano)

for the panel:
3x4 pinpad
2 LEDs

for the switching:
2 relays
2 transistors (It depends on what relay you choose)
1 kΩ resistor
