cmake_minimum_required(VERSION 4.0.0 FATAL_ERROR)

# Value in CMake's source code (Help/dev/experimental.rst)
# According to the documentation, this variable must be set BEFORE the call to "project" (which discovers the C++ toolchain) 
set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "d0edc3af-4c50-42ea-a356-e2862fe7a444") # 4.2.3

project(template LANGUAGES CXX)

add_executable(exe)

set_target_properties(exe PROPERTIES
    CXX_MODULE_STD 1
    CXX_STANDARD 23
)

target_sources(exe 
    # Files which are not modules go here
    PRIVATE
        src/main.cpp
    # Files which are modules must be added to a CXX_MODULES file set
    PRIVATE FILE_SET modules TYPE CXX_MODULES FILES
        src/module.cppm
)