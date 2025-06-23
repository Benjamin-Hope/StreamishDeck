# Streamish Desk

## Table of Contents

## Idea Description

The idea behind this project is to have a simple Steam Deck (or something similar) tailored for each user. This has to contain the following:

- Adjustable knob;
- Buttons;
- PowerButton;

Additional tools:

- Mini Display screen with some information
- Touch Screen with icons
- Configurable actions
- Switch option modes (Game/Dev/Stream/Work)
- Kill button to close all open apps

## Technologies

### Hardware

1. Pi Pico - Perhaps something that has a OS or a RTOS is better to handle the events.
2. ESP32
3. Arduino

### Software

1. C++ (FreeRTOS)
2. Python

### Inspiration

[Macro Keyboard](https://www.printables.com/model/1050534-macro-keyboard-9keys-1knob)
[PiPico Macropad](https://www.printables.com/model/152449-raspberry-pi-pico-macropad)

## Materials/Requirements

The materials and the design will be all 3D printed.

1. PiPico
2. Leds
3. Keys and Buttons
4. SDK for the Pico (extension available in VSCode)
5. [FreeRTOS.org](https://www.freertos.org) - Manual implementation
