# CLI Calculator

A command-line calculator written in C++20. The project is currently under
development and is being built around a lexer/parser architecture.

## Current status

The command-line entry point currently collects the arguments after the
executable name and prints the resulting expression. Token definitions and an
initial lexer interface are present, while tokenization and parsing are still
being implemented.

## Requirements

- C++20-compatible compiler
- CMake 3.20 or newer

## Build

Configure and build the project from the repository root:

```bash
cmake -S . -B build
cmake --build build
```

The executable is generated at `build/calc`.

## Usage

Pass an expression as command-line arguments:

```bash
./build/calc "2 + 3"
```

At the current stage, the program displays the argument list and reconstructed
expression. Expression evaluation will be added as the lexer and parser are
completed.

## Project structure

```text
.
├── CMakeLists.txt       # CMake project configuration
├── include/
│   ├── Lexer.hpp        # Lexer interface
│   ├── Parser.hpp       # Parser interface placeholder
│   └── Token.hpp        # Token types and token representation
└── src/
    ├── Lexer.cpp        # Lexing implementation in progress
    ├── Parser.cpp       # Parsing implementation placeholder
    └── main.cpp         # Command-line entry point
```

## Planned functionality

- Tokenize numbers, arithmetic operators, and parentheses
- Parse expressions using the lexer output
- Evaluate and print calculation results
- Add automated tests for lexing, parsing, and evaluation
