cmake_minimum_required(VERSION 3.21)
project(my_code)

set(CMAKE_CXX_STANDARD 14)

add_executable(my_code main.cpp Person.cpp Person.h Student.cpp Student.h)
