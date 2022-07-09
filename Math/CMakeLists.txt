cmake_minimum_required(VERSION 3.18)
project(Math)
set(CMAKE_CXX_STANDARD 17)
add_library(${PROJECT_NAME} SHARED Math.cpp Math.hpp)

target_include_directories(${PROJECT_NAME} PUBLIC include/)