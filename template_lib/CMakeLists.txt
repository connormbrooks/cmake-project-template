cmake_minimum_required(VERSION 3.11)

project(template_lib)

add_library(template_lib)
target_sources(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/utils.cc
    PUBLIC
        ${PROJECT_SOURCE_DIR}/utils.h)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})

target_compile_features(template_lib PUBLIC cxx_std_20)

add_subdirectory(test)