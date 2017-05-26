cmake_minimum_required(VERSION 3.7)
project(pin-one)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c src/seek/research.c src/topics/weather.c src/topics/weather.h src/concept.c src/concept.h src/giventake/take.c src/giventake/take.h src/giventake/give.c src/giventake/give.h)
add_executable(pinone ${SOURCE_FILES})