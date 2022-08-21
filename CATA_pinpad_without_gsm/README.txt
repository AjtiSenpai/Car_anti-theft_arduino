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
2x1kΩ resistor

for the switching:
2 relays (You can use some transistors two, but I think raelays will be better. You will turn on and off 12 volt signals.)
2 transistors (It depends on what relay you choose, I mean pre made or you build the board a I desinged)
2x1 kΩ resistor
2 diodes

for the key:
1 transistor (It's important bacause, if you connect the key signal directly to the mictrocontroller, the 12 volts gonna blow it up.)

for the programming:
an FTDI breakout board
or
an Arduino UNO (You have multiple choices how you program your Atmega)
if you're using an Arduino UNO or NANO, you don't have to use a programmer
and you will need the Arduino app and the Keypad.h.zip library
Video about the programming: https://youtu.be/J3DYgzRvLT8 (Huge thanks for the great video to GreatScott)
