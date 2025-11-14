# ESP32-Real-Time-Sound-System-Base-Setup
*FreeRTOS • Custom Drivers • Interrupts • I2C • MQTT • Low-Power Modes*

This project is a professional-grade embedded systems application built on the ESP32 using the ESP-IDF framework. It demonstrates mid-level firmware engineering skills, including:

+ **Real-time signal acquisition**

+ **Custom ADC driver**

+ **FreeRTOS task scheduling**

+ **I2C peripheral control**

+ **WiFi + MQTT networking**

+ **Low-power optimization**

+ **Modular firmware architecture**

The system continuously samples audio using a sound sensor, processes the signal (RMS + peak detection), displays real-time output on an I2C display, and publishes data over MQTT.

# 📸 Project Overview

This firmware implements a real-time, multi-tasking audio monitoring system using:

+ **Interrupt-driven ADC sampling**

+ **FreeRTOS queues for inter-task communication**

+ **Custom I2C driver for output display**

+ **WiFi + MQTT logging for remote monitoring**

+ **Deep sleep/light sleep based on sound activity**

It is designed to resemble the architecture used in professional firmware projects.
