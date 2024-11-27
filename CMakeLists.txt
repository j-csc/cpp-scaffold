cmake_minimum_required(VERSION 3.15)

# Set project name and version
project(cpp_scaffold VERSION 1.0
    DESCRIPTION ""
    LANGUAGES CXX)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable vcpkg integration
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file")

# Output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Add include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add subdirectories for source code and tests
add_subdirectory(src)
add_subdirectory(tests)

# Enable testing
enable_testing()
