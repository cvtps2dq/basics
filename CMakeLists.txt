cmake_minimum_required(VERSION 3.26)
project(basics)

set(CMAKE_CXX_STANDARD 23)

add_executable(basics main.cpp
        Box/Box.cpp
        Box/Box.h)
