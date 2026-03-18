# STM32G473 Flight Controller (20x20mm)

## Overview
High-performance flight controller based on the **STM32G473** MCU, featuring a compact 20x20mm mounting pattern. This board is specifically designed for high-voltage builds (up to 12S) and high-speed processing, utilizing a 6-layer PCB stackup with all components mounted on a single side for optimal integration and cooling.
## Hardware Visuals

### Front View
<img width="827" height="845" alt="front" src="https://github.com/user-attachments/assets/2dd6c3e0-6864-4fc9-9af6-0d84cc0f538e" />

### Back View (6-Layer Copper)
<img width="781" height="812" alt="back" src="https://github.com/user-attachments/assets/95e66dbe-a091-44e6-9f56-f2413c5e3434" />

## Technical Specifications
### Core System
* **MCU:** STM32G473 (Cortex-M4, 170MHz)
* **IMU:** ICM-42688-P (Ultra-low noise 6-axis gyro)
* **Blackbox:** 16M-bit (2MB) Onboard Flash
* **PCB:** 6-layer, single-sided compoment 

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
    * many soldering pads to add GPS, buzzer, led, or IO 

## Cost (BOM)

Mouser price : 

| Composant / Valeur | Réf. Mouser | Qty | Price (1 pc) | Tot 1 board | Tot 100 board | Tot 1000 board |
| :--- | :--- | :---: | :---: | :---: | :---: | :---: |
| 100n | 710-885012104005 | 13 | 0.12 € | 1.56 € | 39.00 € | 130.00 € |
| 10n | 710-885012104014 | 1 | 0.12 € | 0.12 € | 3.00 € | 10.00 € |
| 1u | 710-885012105012 | 3 | 0.18 € | 0.54 € | 18.00 € | 90.00 € |
| 4.7u | 710-885012105012 | 3 | 0.18 € | 0.54 € | 18.00 € | 90.00 € |
| 0.1u | 81-GRM155R62A104ME4J | 1 | 0.10 € | 0.10 € | 2.00 € | 10.00 € |
| 2.2u | 710-885012105007 | 1 | 0.22 € | 0.22 € | 8.00 € | 40.00 € |
| 2.2u | 81-GRT21BD72A225KE13 | 2 | 0.24 € | 0.48 € | 18.00 € | 100.00 € |
| 47u | 81-GRM21BR61A476ME5K | 2 | 0.55 € | 1.10 € | 44.00 € | 240.00 € |
| USB4110-GF-A | 710-629722000214 | 1 | 1.15 € | 1.15 € | 85.00 € | 650.00 € |
| LED 150040BS73240 (Bleue) | 710-150040BS73240 | 1 | 0.26 € | 0.26 € | 12.00 € | 80.00 € |
| LED 150040GS73240 (Verte) | 710-150040GS73240 | 1 | 0.26 € | 0.26 € | 12.00 € | 80.00 € |
| LED 150040RS73240 (Rouge) | 710-150040RS73240 | 2 | 0.26 € | 0.52 € | 24.00 € | 160.00 € |
| MCU STM32G473CEU6 | 511-STM32G473CEU6 | 1 | 7.58 € | 7.58 € | 545.00 € | 4800.00 € |
| 5.1k | 667-ERJ-1GNF5101C | 2 | 0.10 € | 0.20 € | 2.00 € | 10.00 € |
| 100k | 667-ERJ-1GNF1003C | 2 | 0.10 € | 0.20 € | 2.00 € | 10.00 € |
| 10k | 667-ERJ-1GNF1002C | 3 | 0.10 € | 0.30 € | 3.00 € | 15.00 € |
| 1k | 667-ERJ-1GNF1001C | 6 | 0.10 € | 0.60 € | 6.00 € | 30.00 € |
| 20k | 667-ERJ-1GNF2002C | 1 | 0.10 € | 0.10 € | 1.00 € | 5.00 € |
| 19.1k | 667-ERJ-1GNF1912C | 1 | 0.10 € | 0.10 € | 1.00 € | 5.00 € |
| 22R | 667-ERJ-1GNF22R0C | 7 | 0.10 € | 0.70 € | 7.00 € | 35.00 € |
| 100R | 667-ERJ-1GNF1000C | 1 | 0.10 € | 0.10 € | 1.00 € | 5.00 € |
| Ferrite 74279220800 | 710-74279220800 | 1 | 0.14 € | 0.14 € | 4.00 € | 20.00 € |
| Inductor 74479335329247 | 710-74479335329247 | 1 | 0.78 € | 0.78 € | 45.00 € | 320.00 € |
| JST SH 6-pin | 306-M06BSRSSTBLFSNPP | 1 | 0.64 € | 0.64 € | 42.00 € | 310.00 € |
| LDO LDL212PV33R | 511-LDL212PV33R | 2 | 0.53 € | 1.06 € | 76.00 € | 560.00 € |
| Flash MX25R1635FZUIH0 | 95-25R1635FZUIH0TR | 1 | 1.84 € | 1.84 € | 115.00 € | 950.00 € |
| TVS SP3222-02ETG | 576-SP3222-02ETG | 1 | 0.42 € | 0.42 € | 22.00 € | 150.00 € |
| Bouton 435151014824 | 710-435151014824 | 1 | 0.85 € | 0.85 € | 52.00 € | 380.00 € |
| MOSFET 2N7002KQBZ | 771-2N7002KQBZ | 1 | 0.18 € | 0.18 € | 6.00 € | 30.00 € |
| Osc. CSTNE8M00GH5C000R0 | 81-CSTNE8M00GH5C000R | 1 | 0.45 € | 0.45 € | 24.00 € | 160.00 € |
| IMU ICM-42688-P | 410-ICM-42688-P | 1 | 4.86 € | 4.86 € | 355.00 € | 2900.00 € |
| JST SH 8-pin | 306-SM08BSRSSTB | 1 | 0.72 € | 0.72 € | 48.00 € | 350.00 € |
| Diode BAT60JFILM | 511-BAT60JFILM | 2 | 0.28 € | 0.56 € | 22.00 € | 120.00 € |
| Buck LMR51625YFDDCR | 595-LMR51625YFDDCR | 1 | 1.25 € | 1.25 € | 88.00 € | 650.00 € |
| **TOTAL ESTIMÉ (Composants)**| **-** | **-** | **-** | **30.48 €** | **1750.00 €** | **13495.00 €** |
| **PRIX MOYEN PAR CARTE** | **-** | **-** | **-** | **30.48 €** | **17.50 €** | **13.50 €** |

## Hardware Design Principles
The 6-layer design ensures superior EMI shielding and thermal dissipation. 
stackup: signal-gnd-signal-gnd-power-gnd   
provide shielded power from signal and from the outside.

## License
Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International.
