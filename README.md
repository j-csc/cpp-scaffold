# cpp-scaffold

Scaffolds C++ projects

## Prerequisites
- CMake (>= 3.15)
- C++17 compiler
- Git

## Setup

```bash
# Initialize vcpkg
git submodule init
git submodule update
./vcpkg/bootstrap-vcpkg.sh

# Build (using CMake preset)
cmake --preset default
cmake --build build

# Run tests
./build/bin/cpp_scaffold_tests
```
