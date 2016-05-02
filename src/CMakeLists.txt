# Include the directory itself as a path to include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Create a variable called helloworld_SOURCES containing all .cpp files:
set(ChecksumTest_SOURCES gchksum.c gchksum.h)

# Create an executable file called helloworld from sources:
add_executable(checksum-test ${ChecksumTest_SOURCES})
