# Smart-door-lock
A smart door lock with 8051 microcontroller and esp8266 

Working
In the smart door locking system, there are two ways to unlock the door: 
through a keypad or by using a phone. The keypad is connected to the 
8051 microcontroller as an input device, while the buzzer and LCD display 
are connected as output devices. To unlock the door, we enter a password 
using the keypad. The microcontroller compares the entered password 
with the predefined password. If the password is correct, the 
microcontroller sets the P3.5 and P3.6 pins to a high logic level. These 
pins are connected to the inputs of the motor driver, which activates the 
door unlocking mechanism. If the entered password does not match the 
specified password, the microcontroller keeps the P3.5 and P3.6 pins at 
a low logic level, indicating an incorrect password and preventing the door 
from being unlocked. 
Another method to open the door is through a phone using the Blynk app. 
A custom app is created in the phone using Blynk software, allowing the 
user to lock and unlock the door remotely. The ESP8266 serves as the 
Wi-Fi module for this setup. When the unlock button is pressed in the 
Blynk app, a signal is sent to the Blynk cloud server. The server then 
forwards this signal to the microcontroller. Upon receiving the signal, the 
microcontroller triggers the door unlocking mechanism by sending a high 
signal to the inputs of the motor driver. The motor driver, in turn, provides 
the necessary power and control signals to operate the motor, resulting in 
the unlocking of the door. This enables convenient door access from 
anywhere using the Blynk app and the Wi-Fi-connected 
microcontroller setup.
