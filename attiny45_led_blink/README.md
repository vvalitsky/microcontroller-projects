# This is description of project
### ATTiny45 pinout schematic
![ATTiny45 Pinout](https://raw.githubusercontent.com/vvalitsky/microcontroller-projects/master/attiny45_led_blink/images/attiny45_pinout.png)

For programming ATTiny45 we can use different programmators, which are supporting this controller.
For example AVR USBASP
In this project we will use TL866CS, which is universal programmator.
By the programmator rules we must insert controller into controller holder.
After it we must check, that all is fine, just try to read chip. (Notice: for TL866CS we must choose controller in controllers selector)

### ATTiny45 reading chip
![ATTiny45 reading chip](https://raw.githubusercontent.com/vvalitsky/microcontroller-projects/master/attiny45_led_blink/images/read_chip.png)

### ATTiny45 info
![ATTiny45 info](https://raw.githubusercontent.com/vvalitsky/microcontroller-projects/master/attiny45_led_blink/images/empty_chip.png)

### Code compile                  

After successful controller reading we must compile code. 
For example we can use WinAVR with Programmers Notepad. For those we should open make file and main.c file.
Click to Tools tab and then click to Make All

### Tools tab
![Tools tab](https://raw.githubusercontent.com/vvalitsky/microcontroller-projects/master/attiny45_led_blink/images/programmers_notepad.png)

After successful compilation go to the project directory and you will find main.hex

### main.hex in directory
![main.hex in directory](https://raw.githubusercontent.com/vvalitsky/microcontroller-projects/master/attiny45_led_blink/images/hex_in_directory.png)

#### That is what we want. 

### Controller programming
Now we need to open our main.hex file in TL866CS Programming Tool
This should looks like this:

### main.hex in TL866CS Programming Tool
![main.hex in TL866CS Programming Tool](https://raw.githubusercontent.com/vvalitsky/microcontroller-projects/master/attiny45_led_blink/images/loaded_hex.png)

Just click to programm button and see the result.

### ATTiny45 programming by TL866CS
![ATTiny45 programming by TL866CS](https://raw.githubusercontent.com/vvalitsky/microcontroller-projects/master/attiny45_led_blink/images/programming_chip.png)

If all is fine, you will see message about successful controller programming.

### Video example of programming ATTiny45
[![Led blink](https://pp.userapi.com/c841127/v841127360/8f4/ZPrDdOw3VCI.jpg)](https://youtu.be/29DwQwQ4U8Y "Led blink example - Click to Watch!")