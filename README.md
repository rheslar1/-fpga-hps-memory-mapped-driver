# FPGA to HPS Memory-Mapped Hardware Driver

Intel SoC project that maps FPGA logic into Linux user space through the HPS-to-FPGA bridge and toggles hardware registers with mmap().

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

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
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

Hardware co-processing, memory-mapped register control, FPGA/Linux integration, and low-level driver reasoning.

## Remote

Intended public repository: https://github.com/rheslar1/fpga-hps-memory-mapped-driver
