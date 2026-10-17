cmake_minimum_required(VERSION 3.19)
project(BMSTU_AandP_Zaitsev---- LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(BMSTU_AandP_Zaitsev----
    main.cpp
)

target_link_libraries(BMSTU_AandP_Zaitsev----
    PRIVATE
        Qt::Core
)

install(TARGETS BMSTU_AandP_Zaitsev----
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
