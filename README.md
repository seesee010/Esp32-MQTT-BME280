# Esp32-MQTT-BME280

![GitHub issues](https://img.shields.io/github/issues/seesee010/Esp32-C3-SuperMini-MQTT-BME280)
![GitHub PRs](https://img.shields.io/github/issues-pr/seesee010/Esp32-C3-SuperMini-MQTT-BME280)
![GitHub last commit](https://img.shields.io/github/last-commit/seesee010/Esp32-C3-SuperMini-MQTT-BME280)
![GitHub License](https://img.shields.io/github/license/seesee010/Esp32-C3-SuperMini-MQTT-BME280)

ESP32-C3 Super Mini with BME280 sensor sending data via MQTT to Home Assistant.

## How2Use

### Guide
Here is for you a quick Guide, you can use if you want to.

1. create a file called `config.h` in `src/BMEMqtt`.
2. In the file there should stand everything from the `config.example.h`, but replace it with your data. It will auto use config instead of config.example if it exists.
3. Everything should work fine from this point on. You may want to change the topic defines in the `BMEMqtt.ino`.

### Wiring diagram
Here you can get a great view about how you should connect the wires:

<img src="https://github.com/seesee010/Esp32-C3-SuperMini-MQTT-BME280/blob/main/pic/project.png" width="300">

## Dependencies

This project uses the following libraries:

- [BME280 by Tyler Glenn](https://github.com/finitespace/BME280) - **GPL-3.0**
- [AViShaMQTT by Ajang](https://github.com/avisha95/AViShaMQTT) - **GPL-3.0**
- [MQTT by Joel Gaehwiler](https://github.com/256dpi/arduino-mqtt) - **MIT License**

Each library is licensed under its own terms (GPL-3.0).
Please refer to their respective repositories for full license text.

## Hardware
- ESP32-C3 Super Mini
- BME280 Sensor

## Tests

In fact there are no real tests (like unit tests), but the device is currently in use. So it definitly works.

## Problems

You may want to use an original / high quallity usb c male wire, else it could cause some minor problems.

> [!NOTE]
> You can solve that problems in 2 ways:
>
> 1. use the required usb c male calbe (with the right specs)
>
> 2. use an capacitor

## License
This project is licensed under GPL-3.0
