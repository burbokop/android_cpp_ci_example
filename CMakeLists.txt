cmake_minimum_required(VERSION 3.24.2)

project(
  android_cpp_ci_example
  VERSION 1.0
  LANGUAGES CXX)

add_executable(${CMAKE_PROJECT_NAME} src/main.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME} log)
