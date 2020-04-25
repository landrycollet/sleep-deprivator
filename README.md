# SleepDeprivator

Don't let your computer go to sleep, like, ever.

By [Landry COLLET](https://www.github.com/landrycollet).


## Description

On some machines, you don't have the possibility to disable the automatic screen lock, and it's set aggressively low by
your IT admin. Most of the time, it's for your own good, especially on a laptop. But if you work from home and have a
test running that you need to monitor, or deep in a conf call, you might end up losing 20 minutes a day typing that
annoying 25-character password to unlock the screen.

SleepDeprivator is a tiny USB device, made of a Trinket Pro, that will automatically send an invisible keyboard input
periodically, mimicking a keyboard press that postpones the computer screen lock.

The firmware, as is, sends a press on the left control key every 30 seconds. That's nice for a Mac, but for your PC,
you might want to change it to something else, unless you never use the Q key (:

SleepDeprivator is a free software, licensed under GNU GPLv3.


## Disclaimer

SleepDeprivator obviously lowers the security of your machine and might expose it to danger.

I can't be held responsible in any way if the use of that solution as is or modified causes any prejudice to yourself,
your company or anybody/anything else.

This software is distributed AS IS, with no warranty expressed or implied. Use it at your own risks.


## License

SleepDeprivator is licensed under the GNU General Public License version 3. http://www.gnu.org/licenses/gpl-3.0.html
```
SleepDeprivator,  don't let your computer go to sleep, like, ever.

Copyright (C) 2018, by Landry COLLET
SleepDeprivator is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or any
later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see https://www.gnu.org/licenses/.
```


## Getting started

- Find a Trinket Pro board: https://www.adafruit.com/product/2000 (also available in every electronic shop).

- Make sure your Arduino IDE handles the Adafruit Trinket boards. If not, follow those steps:
https://learn.adafruit.com/adafruit-trinket-m0-circuitpython-arduino/arduino-ide-setup

- Make sure you have the Adafruit Trinket Pro Keyboard library installed. If not, download it here and install it:
https://learn.adafruit.com/pro-trinket-keyboard/library
Refer to that guide if you don't know how to install a library:
https://learn.adafruit.com/adafruit-all-about-arduino-libraries-install-use/arduino-libraries

- Open the Arduino project in `ArduinoCode/sleepDeprivator.ino`. Build and send it to the Arduino Trinket Pro.

- Optional: you can connect a switch between ground and pin 4. Pulling that pin low will disable the virtual keybaord.

- Print the case for the Trinket Pro with a 3D printer, and install the board in.

Plug it to your USB hub that stays on your desk, and your computer will never go to sleep anymore as long as it's
connected to it.


## Author

Landry COLLET [www.landrycollet.fr](http://www.landrycollet.fr/blog)
[Offer me a beer here!](https://www.paypal.me/LandryCOLLET)


## Credits

SleepDeprivator relies heavily on the following:
- [Pro-Trinket-Keyboard](https://learn.adafruit.com/pro-trinket-keyboard/library)
