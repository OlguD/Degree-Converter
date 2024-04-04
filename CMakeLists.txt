cmake_minimum_required(VERSION 3.27)
project(UnitConverter C)

set(CMAKE_C_STANDARD 11)

add_executable(UnitConverter main.c
        main.h
        convert.c)
