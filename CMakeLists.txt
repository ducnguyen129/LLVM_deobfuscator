cmake_minimum_required(VERSION 3.13)
project(LLVM_deobfuscator)

find_package(LLVM REQUIRED CONFIG)

message(STATUS "Using LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "LLVM dir: ${LLVM_DIR}")

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(main main.cpp)

llvm_map_components_to_libnames(llvm_libs
    core
    irreader
    support
)

target_link_libraries(main ${llvm_libs})
target_link_options(main PRIVATE -lzstd)
set(LLVM_ENABLE_ZSTD OFF)
