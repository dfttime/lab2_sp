cmake_minimum_required(VERSION 3.10)

# Define project name and version
project(CalculatorProject VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
add_library(calculator STATIC calculator.cpp)

# Add executable
add_executable(main main.cpp)

# Link the calculator library to the main executable
target_link_libraries(main PRIVATE calculator)

# Specify where the build output should go
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Specify the build system to use Ninja
set(CMAKE_GENERATOR "Ninja")
