cmake_minimum_required(VERSION 3.3)
project(octave)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp synthesizer.cpp synthesizer.h Note.cpp Note.h Piano.cpp Piano.h)
add_executable(octave ${SOURCE_FILES})