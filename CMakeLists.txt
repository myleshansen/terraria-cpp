cmake_minimum_required(VERSION 3.26.0)
project(terraria_cpp VERSION 1.0.0)
cmake_policy(SET CMP0072 NEW) # For CMake 3.26 and above, to allow using find_package with imported targets

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

add_executable(terraria_cpp
        src/main.cpp
        src/config.h
        src/glad.c
)

target_include_directories(terraria_cpp PRIVATE dependencies)

target_link_libraries(terraria_cpp ${GLFW3_LIBRARY} OpenGL::GL)
