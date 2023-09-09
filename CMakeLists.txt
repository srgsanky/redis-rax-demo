cmake_minimum_required(VERSION 3.21)
project(rax_demo C)

set(CMAKE_C_STANDARD 11)

# Include rax
add_subdirectory(rax)

add_executable(rax_demo main.c)
target_link_libraries(rax_demo
        PRIVATE rax 
)
