# SMART-HOME-AUTOMATION-SYSTEM-USING-8051-MICROCONTROLLER
This project involves designing a smart home automation system using 8051 microcontroller to control various appliances and devices in a house through a user‑friendly interface.


# PROBLEM STATEMENT
Design system level solutions or processes for engineering problems that meet the
specified needs with appropriate consideration for public health and safety, and
cultural, societal, and environmental considerations with an understanding of the
limitations."

# INTRODUCTION
The aim of the project is to make a home automation system which controls the
status of various appliances. It primarily combines hardware and software through a
wireless network to enable the control of your home electronic components and
devices through one particular device. Modern day devices like Alexa and Google
Home are an example of smart home automation.
Certain basic requirements for home automation systems:
1. A smart device phone
2. A particular hub which talks to the device
3. A connected application

# Need for home automation
We need to realise that home automation is quite useful and very important in our
lives. For example, we can use home automation for:
1. Keeping our house safe and protected.
2. Energy savings, which is beneficial for us as well as the environment.
3. Increase convenience in day to day lifestyle.
These above points highlight the fact that smart devices, automation and their
applications in our life is no more a luxury but a very huge necessity.

# Circuit Principles

The main principles used in this project are AT89C51 microcontroller, Bluetooth HC-
06 module, LM016L LCD interface, Relay, an alternator and a Lamp as the load and

the android app. The operation of the circuit starts from a random state of working of
the appliances, the HC-06 module listens to receive a signal via bluetooth, it then
sends that signal to the receiving port of our IC which then turns on the relay or vice
versa resulting in change of state of the appliance. The successful completion of the
operation is displayed on the LCD module.

# 8051 [AT89C51]
The 8051 microcontroller was designed by Intel in 1981. It is an 8-bit
microcontroller. It is built with 40 pins DIP (dual inline package), 4kb
of ROM storage and 128 bytes of RAM storage, 2 16-bit timers. 32
I/O pins. It consists of four parallel 8-bit ports, which are
programmable as well as addressable as per the requirement. An
on-chip crystal oscillator is integrated in the microcontroller having a
crystal frequency of 12 MHz.


# HC-06 Bluetooth module
HC-06 is a Bluetooth module designed for
establishing short range wireless data
communication between two microcontrollers or
systems. The module works on Bluetooth 2.0
communication protocol and it can only act as a
slave device. This is the cheapest method for
wireless data transmission and more flexible
compared to other methods and it even can transmit
files at speed up to 2.1Mb/s.
HC-06 uses frequency hopping spread spectrum technique (FHSS) to avoid
interference with other devices and to have full duplex transmission. The device
works on the frequency range from 2.402 GHz to 2.480GHz.

# LM016L LCD display
It is a 16 character x 2 lines display, Controller
LSI HD44780 is built-in. +5V single power supply,
Display colour : LM016L : Grey


# BLOCK DIAGRAM

![image](https://user-images.githubusercontent.com/126688687/229297606-9867c6f4-7ced-4d5d-9166-321e0cb9f188.png)

The HC-06 module keeps the track of any change in bits sent by the mobile device, if
there is a change in the bit, it conveys it to the microcontroller, which in turn
processes the signal accordingly and sends signals to both, the respective relay and
the LCD display.


# Circuit Design:

The whole circuit has been simulated in the Proteus 8 Professional Simulation
Software. With the code being written in embedded C using Keil Microvision 4.
Working Principle:
HC-06 module, connected to
Port 3.0 and 3.1 of the IC
monitors and signal change
from the original bluetooth
device.

![image](https://user-images.githubusercontent.com/126688687/229297812-62e1b9b1-3bd8-44ec-8cc6-be6056fbc1d2.png)

# Working Principle:
HC-06 module, connected to
Port 3.0 and 3.1 of the IC
monitors and signal change
from the original bluetooth
device.

# Android App:
Our in-house built android app communicates
with the HC-06 module and sends the respective
signal to the module.
The app was built using MIT App Inventor which
is a block based tool to develop apps quicker and
efficiently.
The app searches for nearby bluetooth devices,
connects to the laptop running the simulation and
communicates with it.
 
![image](https://user-images.githubusercontent.com/126688687/229297898-a933900b-321b-4ce6-bcaa-3e5107d157c0.png)

After receiving the signal
from hc-06, the IC then
processes it and sends the
signal to the relays
connected to Port 0.0
through Port 0.3

The IC also sends the
signal to the LCD display
which prints out relevant
information.

# Limitations
1. Security Issues:
Security is becoming a great issue day by day as more people continue to opt
for smart home devices.
Almost all smart devices derive their functionality from some form of wireless
communication (Wi-Fi or Bluetooth). As with all digital communications, there
is potential for hackers to intercept wireless communications and use this to
gain access to your smart home devices.
2. Cost:
Setting up smart home appliances can be very expensive. Even though it is
becoming affordable for a few, it is still extremely expensive to fully equip a
home with smart devices.
3. Helplessness if technology fails/connectivity issues
If technology fails there can be operating blunders like not being able to use
the air conditioning system on a hot day or locking yourself out of your own
house.
4. Maintenance and repair issues
Needs to be kept clean and dry. Dusty or moist environment can affect the
performance. We also need to keep updating our devices regularly.Repair
cost is more expensive.

5. The elderly might find it difficult to operate
As most of the elderly are not quite well versed with technology they might find
it confusing and difficult to operate compared to old school ways of using
home appliances

# Modern engineering tools, techniques and resources that can improve the project.
Smart control thermostats. Most energy is used up for heating or cooling houses.
These devices have motion sensors which they can use to detect activity throughout
the house and use the data to adjust temperature according to different times.
Smart lighting around the house which operates on motion sensors and is energy
and cost efficient.
Smart sleep trackers can help us get good sleep and track the amount of sleep we
get on a daily basis to help manage our time effectively.
Smart lock systems to provide better security.
Customised smart home services that cater to just the needs of a particular family.
There are many services that one home may need and the other won't, customised
smart home appliances can be cost efficient in this way.

# The impact of the project on consideration for public health and safety, and cultural, societal, and environment.
Smart phone connected home appliances are sustainable, more energy efficient and
provide lifestyle improvements.
For example, if you leave your refrigerator door open, you’ll be prompted with a
message on your phone. When you’re not in a particular room or at home, all the
appliances will be switched off to save energy.
Smart home appliances provide a large range of home improvements and enhance
user experience. Managing home becomes easier. You can now sit on your bed and
operate an appliance in another room.
It offers increased convenience for people with disabilities or patients. Convenience
is the primary benefit of smart home appliances. All appliances become very easy to
operate with just a click. They do not have to move or operate complex devices.
Example: voice-controlled appliances.
Aged people will enjoy the improved elderly care and greater access to basic
services. It can become a support system for them. Smoke alarms, security systems,
voice activated speakers are some of the smart appliances that can make everyday
life safer, convenient and more social for older adults.


# Conclusion:
The basic idea of this project is to automate and enable smart functioning of home
appliances through HC-06 Bluetooth module and 8051-IC and other small scale
components. This project successfully demonstrates the automation is no more a
luxury but a necessity.
