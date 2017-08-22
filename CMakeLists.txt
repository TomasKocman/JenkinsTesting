cmake_minimum_required(VERSION 3.7)
project(testCLion)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES Main.cpp
                 SomeClass.cpp
                 SomeClass.h)
add_executable(testCLion ${SOURCE_FILES})