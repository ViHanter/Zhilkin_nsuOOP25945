cmake_minimum_required(VERSION 3.14)
project(Task5_5 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build the Google Test suite" ON)

add_subdirectory(math_lib)

if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(tests)
endif()

add_executable(main_app main.cpp)
target_link_libraries(main_app PRIVATE my_lib)
