# FPGA to HPS Memory-Mapped Hardware Driver

Intel SoC project that maps FPGA logic into Linux user space through the HPS-to-FPGA bridge and toggles hardware registers with mmap().

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

All generated Embedded Systems repos are C++17-first and are framed around C++ design patterns and SOLID design principles.

## Stack

- C++17
- C++ Design Patterns
- SOLID
- FPGA
- HPS bridge
- mmap
- Verilog
- SystemVerilog
- Register map

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/fpga_hps_memory_mapped_driver
ctest --test-dir build --output-on-failure
```

## Implementation Slices

- C++17 starter executable that exposes the project identity, stack, and validation target.
- Small strategy-style readiness check that keeps the scaffold aligned with C++ design patterns.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- CTest smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

Hardware co-processing, memory-mapped register control, FPGA/Linux integration, and low-level driver reasoning.

## Remote

Intended public repository: https://github.com/rheslar1/fpga-hps-memory-mapped-driver
