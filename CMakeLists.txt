cmake_minimum_required(VERSION 3.18)
project(Core)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Math)

add_library(${PROJECT_NAME} SHARED glad.c Core.cpp Core.hpp)

target_include_directories(${PROJECT_NAME} PUBLIC include/)
target_link_libraries(${PROJECT_NAME} PUBLIC Math)