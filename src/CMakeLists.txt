include_directories(${PROJECT_SOURCE_DIR}/include/)

set(SFML_DIR ${PROJECT_SOURCE_DIR}/lib/SFML-2.5.1/lib/cmake/SFML)
find_package(SFML 2.5.1 COMPONENTS graphics REQUIRED)

add_library(application application.cpp)
target_link_libraries(application sfml-graphics)

add_executable(base-sfml-app main.cpp)
target_link_libraries(base-sfml-app application)
