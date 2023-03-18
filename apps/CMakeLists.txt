cmake_minimum_required(VERSION 3.11)

project(main)

add_executable(main main.cc)
target_link_libraries(main
    PRIVATE template_lib)

target_compile_features(main PUBLIC cxx_std_20)