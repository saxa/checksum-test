# Include the directory itself as a path to include directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Create a variable called helloworld_SOURCES containing all .cpp files:
set(ChecksumTest_SOURCES gchksum.c gchksum.h)

link_directories(${GLIB2_LIBRARY_DIRS} ${GTK3_LIBRARY_DIRS})

include_directories(${GLIB2_INCLUDE_DIRS} ${GTK3_INCLUDE_DIRS})


# Create an executable file called helloworld from sources:
add_executable(checksum-test ${ChecksumTest_SOURCES})

target_link_libraries(checksum-test ${GLIB2_LIBRARIES} ${GTK3_LIBRARIES})
