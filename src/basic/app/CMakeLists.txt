add_executable(pretty_echo main.cpp pretty_echo.cpp)
add_dependencies(pretty_echo printer)
target_link_libraries(pretty_echo printer)