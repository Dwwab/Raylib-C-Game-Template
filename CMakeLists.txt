cmake_minimum_required(VERSION 3.10)
project(PUT_PROJECT_NAME_HERE)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build")
set(BUILD_SHARED_LIBS ON)

set(RAYLIB_SOURCE_DIR "${PROJECT_SOURCE_DIR}/libraries/raylib")

add_subdirectory(${RAYLIB_SOURCE_DIR})

file(GLOB SOURCE
    "${PROJECT_SOURCE_DIR}/source/*.c"
)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(PUT_EXE_NAME_HERE ${SOURCE})
target_link_libraries(PUT_EXE_NAME_HERE raylib)