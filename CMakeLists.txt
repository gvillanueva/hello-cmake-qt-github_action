cmake_minimum_required(VERSION 3.10)

# Set the project name
project(hello-cmake-qt)

# Find Qt5 and Qt6 packages
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

# Add the executable
add_executable(hello-cmake-qt main.cpp)

# Link to the Qt Core library
target_link_libraries(hello-cmake-qt Qt${QT_VERSION_MAJOR}::Core)
