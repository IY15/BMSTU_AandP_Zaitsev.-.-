cmake_minimum_required(VERSION 3.19)
project(laborotory_work_1 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(laborotory_work_1
    main.cpp
)

target_link_libraries(laborotory_work_1
    PRIVATE
        Qt::Core
)

install(TARGETS laborotory_work_1
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
