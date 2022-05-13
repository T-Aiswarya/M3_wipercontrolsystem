# INTRODUCTION
The speed of a wiper is controlled by a wiper speed control system in accordance with frequencies. The pulse signal is digitally processed to provide a control signal. A wiper driver circuit receives the control signal and adjusts the operational speed or timing in line with it.

# SOFTWARE REQUIREMENT
STM32 CUBE IDE

# COMPONENTS USED
STM32F4O7VG MICROCONTROLLER BOARD

# WORKING PRINCIPLE
When the button is pressed, the first led (red) turns on, the wiper starts, and the second led (blue) turns on at the appropriate rate. The third led (green) will turn on if the button is pressed again, and the wiper speed will be increased in contrast to the previous one. The fourth press will activate the fourth led (orange) and raise the wiper speed in accordance with the previous one. After the fifth click, the microcontroller (vehicle) is turned off.
