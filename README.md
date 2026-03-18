# STM32G473 Flight Controller (20x20mm)

## Overview
High-performance flight controller based on the **STM32G473** MCU, featuring a compact 20x20mm mounting pattern. This board is specifically designed for high-voltage builds (up to 12S) and high-speed processing, utilizing a 6-layer PCB stackup with all components mounted on a single side for optimal integration and cooling.

## Technical Specifications

### Core System
* **MCU:** STM32G473 (Cortex-M4, 170MHz)
* **IMU:** ICM-42688-P (Ultra-low noise 6-axis gyro)
* **Blackbox:** 128M-bit (16MB) Onboard Flash
* **PCB:** 6-layer, single-sided SMT

### Power Management
* **Main Buck Regulator:** LMR51625
    * **Input Voltage:** 7V to 55V
    * **Output:** 5V @ 2.5A Max
* **Dual LDO Regulation:** Two independent LDL212PV33R (1.2A each)
    * **LDO 1:** Dedicated to MCU and Flash memory
    * **LDO 2:** Dedicated to the ICM-42688-P sensor for maximum signal purity

### Protection & Hardware Robustness
* **USB Protection:** Integrated **TVS Diodes** (Transient Voltage Suppressors) on the USB port to protect the MCU against electrostatic discharge (ESD) and short-circuits caused by humidity or debris.
* **Filtering:** High-quality ceramic capacitors and dedicated power planes for a low noise floor.

### Connectivity & Interface
* **Connectors:** 2x JST-SH 1.0mm ports (DJI/Digital VTX and ESC)
* **Status LEDs:** 4x Onboard diagnostic LEDs:
    * 2x Betaflight Status (Green/Blue)
    * 1x 3.3V MCU Power
    * 1x 3.3V Sensor Power

## Hardware Visuals

### Front View
<img width="827" height="845" alt="front" src="https://github.com/user-attachments/assets/2dd6c3e0-6864-4fc9-9af6-0d84cc0f538e" />

### Back View (6-Layer Copper)
<img width="781" height="812" alt="back" src="https://github.com/user-attachments/assets/95e66dbe-a091-44e6-9f56-f2413c5e3434" />

## Hardware Design Principles
The 6-layer design ensures superior EMI shielding and thermal dissipation. By separating the power supplies for the MCU and the Gyroscope via dual high-performance LDOs, the board achieves minimal noise floor on the IMU data. All components are placed on the top side to allow a flat bottom surface for better clearance.

## License
Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International.
