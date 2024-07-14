cmake_minimum_required(VERSION 3.24 FATAL_ERROR)
project(prj1 LANGUAGES CXX)

set(src_files "./src/prj1/c++.cpp")

add_executable(prj1 ${src_files})

find_package(Eigen3 CONFIG REQUIRED)

set_target_properties(prj1 PROPERTIES CXX_STANDARD 20)
target_link_libraries(prj1 PRIVATE Eigen3::Eigen)
