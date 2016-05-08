# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

# Project's name

project(checksum-test)
# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# This is needed to use pkg-config
find_package(PkgConfig)
pkg_check_modules(GLIB2 glib-2.0 gio-2.0)
pkg_check_modules(GTK3 gtk+-3.0)

# The following folder will be included
# include the cmake modules directory
set(CMAKE_MODULE_PATH ${ChecksumTest_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

add_subdirectory(src)
