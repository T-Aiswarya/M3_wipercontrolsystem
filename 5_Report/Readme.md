# M3_Wipercontrolsystem

# INTRODUCTION
The speed of a wiper is controlled by a wiper speed control system in accordance with frequencies. The pulse signal is digitally processed to provide a control signal. A wiper driver circuit receives the control signal and adjusts the operational speed or timing in line with it.

# SOFTWARE REQUIREMENT
STM32 CUBE IDE

# COMPONENTS USED
STM32F4O7VG MICROCONTROLLER BOARD
 
# FEATURES
-->STM32F407VGT6 microcontroller featuring 32-bit Arm® Cortex®-M4 with FPU core, 1-Mbyte Flash memory and 192-Kbyte RAM in an LQFP100 package USB OTG FS.
ST MEMS 3-axis accelerometer.
ST-MEMS audio sensor omni-directional digital microphone.
Audio DAC with integrated class D speaker driver.
User and reset push-buttons.
Eight LEDs: * LD1 (red/green) for USB communication * LD2 (red) for 3.3 V power on * Four user LEDs, LD3 (orange), LD4 (green), LD5 (red) and LD6 (blue) * Two USB OTG LEDs, LD7 (green) VBUS and LD8 (red) over-current.
Board connectors: * USB with Micro-AB * Stereo headphone output jack * 2.54 mm pitch extension header for all LQFP100 I/Os for quick connection to prototyping board and easy probing.
Flexible power-supply options: ST-LINK, USB VBUS, or external sources.
External application power supply: 3 V and 5 V.
Comprehensive free software including a variety of examples, part of STM32CubeF4 MCU Package, or STSW-STM32068 for using legacy standard libraries.
On-board ST-LINK/V2-A debugger/programmer with USB re-enumeration capability: mass storage, Virtual COM port, and debug port.
Support of a wide choice of Integrated Development Environments (IDEs) including IAR Embedded Workbench®, MDK-ARM, and STM32CubeIDE
Components.

# WORKING PRINCIPLE
When the button is pressed, the first led (red) turns on, the wiper starts, and the second led (blue) turns on at the appropriate rate. The third led (green) will turn on if the button is pressed again, and the wiper speed will be increased in contrast to the previous one. The fourth press will activate the fourth led (orange) and raise the wiper speed in accordance with the previous one. After the fifth click, the microcontroller (vehicle) is turned off.

# 4W's and 1'H
# Who
Wiper system in the car

# What
To bulid a Wiper system with different speed modes of high realibiity that used in rain conditions

# When
When in Rain Conditions and also to clear the dust in Windscreen

# Where
This can be applied any any type of car as it is very important also in buses and lorries with differnt operations

# How
By displaying and liting the LED in STM32F40 as a model that potraying the working of wiper system
