cmake_minimum_required(VERSION 3.14)
project(git_basics)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)

include_directories(inc)

add_executable(git_basics
        inc/StringFunctions.h
        src/StringFunctions.cpp
        src/StringFunctionsTest.cpp)
