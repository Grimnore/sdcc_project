# SDCC Learning Project

A personal workspace for getting comfortable with SDCC (Small Device C Compiler) and 8051 microcontroller programming.

## Setup
- Compiler: SDCC
- Target: 8051
- Editor: VS Code

## Programs

| File | Description |
|------|-------------|
| `main.c` | 8051 timer program |
| `blink.c` | LED blink on Port 1 using software delay |

## Compile & Generate Hex
```cmd
sdcc -mmcs51 [program_name].c
packihx main.ihx > main.hex
```

## Notes
Work in progress: I am using this repo to practice and experiment with SDCC.
