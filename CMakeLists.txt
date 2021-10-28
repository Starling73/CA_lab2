cmake_minimum_required(VERSION 3.15)

project(lab2)

add_library(calculator STATIC calculator.cpp)

add_executable(lab2 main.cpp)

target_link_libraries(lab2 calculator)