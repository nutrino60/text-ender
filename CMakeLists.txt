cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 14)
project(test)

add_executable(test main.cpp)
target_link_libraries(test text_render)
add_subdirectory(text_render)