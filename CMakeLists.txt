cmake_minimum_required(VERSION 3.5)

project(Graphs_view LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set (gtest_disable_pthreads on)

add_subdirectory (googletest-main)
config_compiler_and_linker()

add_executable(${PROJECT_NAME}
    src/container_couts.h
    src/graph_views.h
    src/graph_views.cpp
    src/main.cpp
    src/tests.cpp
    src/Tests.h

)
target_link_libraries (${PROJECT_NAME} gtest gmock)

include(GNUInstallDirs)
install(TARGETS Graphs_view
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
