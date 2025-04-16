cmake_minimum_required(VERSION 3.5.0)
project(terraria_cpp VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenGL REQUIRED)

# This block will run if the OS is Windows
if(WIN32)
    message(STATUS "Configuring for Windows")
    # Add Windows-specific commands here
endif()

# This block will run if the OS is macOS
if(APPLE)
    message(STATUS "Configuring for macOS")
    # Add macOS-specific commands here
    find_package(glfw3 REQUIRED)

endif()

add_executable(terraria_cpp
        src/main.cpp
        src/config.h
        src/glad.c
)

target_include_directories(terraria_cpp PRIVATE dependencies)

target_link_libraries(terraria_cpp PRIVATE glfw OpenGL::GL)
