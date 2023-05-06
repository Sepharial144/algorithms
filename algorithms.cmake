function(add_custom_algorithm name_algorithm)
        file(GLOB_RECURSE ALGO_SOURCE "${name_algorithm}/*.hpp" "${name_algorithm}/*.cpp")
        add_executable(${name_algorithm} ${ALGO_SOURCE})
        target_include_directories(${name_algorithm} PRIVATE ${name_algorithm})
endfunction()