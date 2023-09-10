cmake_minimum_required(VERSION 3.21)
project(rax_demo C)

set(CMAKE_C_STANDARD 11)

# Enable debug messages for RAX? ON/OFF
set(RAX_DEBUG_MSG OFF)

if (${RAX_DEBUG_MSG})
    add_compile_definitions(RAX_DEBUG_MSG)
endif ()

# Include rax
add_subdirectory(rax)

add_executable(rax_demo main.c)
target_link_libraries(rax_demo
        PRIVATE rax 
)

# Add address sanitizer
# https://stackoverflow.com/a/70272150/954439
# https://www.jetbrains.com/help/clion/google-sanitizers.html
target_compile_options(rax_demo PRIVATE -fsanitize=address)
target_link_options(rax_demo PRIVATE -fsanitize=address)
