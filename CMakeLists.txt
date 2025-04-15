cmake_minimum_required(VERSION 3.30)
project(terraria_cpp VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(terraria_cpp
        src/main.cpp
        src/config.h
        src/glad.c
)

target_include_directories(terraria_cpp PRIVATE dependencies)

target_link_libraries(terraria_cpp PRIVATE glfw OpenGL::GL)
