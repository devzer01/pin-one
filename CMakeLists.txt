cmake_minimum_required(VERSION 3.7)
project(sandbox)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c research.c weather.c weather.h)
add_executable(sandbox ${SOURCE_FILES})