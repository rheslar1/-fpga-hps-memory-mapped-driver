# FPGA to HPS Memory-Mapped Hardware Driver Design Package

## Purpose

Intel SoC project that maps FPGA logic into Linux user space through the HPS-to-FPGA bridge and toggles hardware registers with mmap().

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/fpga-hps-memory-mapped-driver` |
| Primary stack | C++17, C++ Design Patterns, SOLID, FPGA, HPS bridge, mmap, Verilog, SystemVerilog, Register map |
| Review proof point | Hardware co-processing, memory-mapped register control, FPGA/Linux integration, and low-level driver reasoning. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
