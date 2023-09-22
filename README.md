# Psychology Response Box

An open-source psychological button box designed with 3D printing, arcade buttons, and Arduino. 

## Introduction

This project provides a simple and customizable solution for researchers and hobbyists looking to utilize a multi-button response system. Whether you're conducting experiments or just need a versatile button system, our design is open and ready for modifications.

## Features

- **Open Source:** Modify, use, and share as you see fit.
- **Customizable:** Multiple button configurations available.
- **Simplified Wiring:** Uses internal pull-ups to reduce the need for external components.

## Setup

### Hardware

1. **Components:**
   - Arduino (The provided code is generic and should work with most variants)
     [Metro Mini fits in the bottom plate](https://www.adafruit.com/product/2590)

   - 4x Arcade Buttons
   - Jumper Wires

2. **Wiring:** See our [wiring diagram](link-to-wiring-diagram.png) for a detailed setup.
   
  +---------+         +----+
  |         |   Pin3  |    |
  |  Arduino|-------->|Btn1|
  |         |         |    |
  +---------+         +----+
  
  +---------+         +----+
  |         |   Pin4  |    |
  |  Arduino|-------->|Btn2|
  |         |         |    |
  +---------+         +----+
  
  +---------+         +----+
  |         |   Pin8  |    |
  |  Arduino|-------->|Btn3|
  |         |         |    |
  +---------+         +----+
  
  +---------+         +----+
  |         |  Pin12  |    |
  |  Arduino|-------->|Btn4|
  |         |         |    |
  +---------+         +----+
  
GND Connection:
  +---------+         +----+
  |         |   GND   |    |
  |  Arduino|-------->| ALL|
  |         |         |Btns|
  +---------+         +----+

### Software

1. Clone this repository or download the provided `.ino` file.
2. Open the file using the Arduino IDE.
3. Upload the code to your Arduino device.

## Usage

Once set up, the Arduino will send button press values over serial. Connect the Arduino to a computer and use a serial monitor to view the output.

## Contributing

Contributions are welcome! Please read the [contributing guidelines](link-to-contributing.md) before submitting any changes.

## License

This project is licensed under the [MIT License](LICENSE).
