cmake_minimum_required (VERSION 3.20)

project("algorithms" DESCRIPTION "Algorithms compilation, data structures and patterns" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include(algorithms.cmake)

add_custom_algorithm(insertion)


# make installation folder
#install(TARGETS ${PROJECT_NAME}
#        CONFIGURATIONS Debug
#        ARCHIVE DESTINATION "debug/algorithms/lib"
#        PUBLIC_HEADER DESTINATION "debug/algorithms/")
#install(TARGETS ${PROJECT_NAME}
#        CONFIGURATIONS Release
#        LIBRARY DESTINATION "release/algorithms"
#        PUBLIC_HEADER DESTINATION "release/algorithms")