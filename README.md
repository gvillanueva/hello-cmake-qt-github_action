# hello-cmake-qt-github_action
Demonstrative example of building Qt with CMake and GitHub Actions

## Requirements
* [CMake](https://cmake.org/download/)
* C++ compiler of your choice

## Repository layout
    .       - Root directory

## Build instructions
Once required tools are installed, this minimum reproducible project can be
built via command-line using the following commands:

1. mkdir build
1. cd build
1. cmake ..
1. cmake --build .

The project should now be built in a location appropriate to your C++ compiler.
For example, the build location for *Visual Studio 16 2019* should be
./build/Debug/hello-cmake.exe.

### Troubleshooting
Ensure that your C++ compiler and CMake are in your PATH environment variable so
that the executables are visible.
