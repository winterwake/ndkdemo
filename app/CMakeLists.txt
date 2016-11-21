cmake_minimum_required(VERSION 3.4.1)

add_library( native-lib
             SHARED
             src/main/cpp/native-lib.cpp)
add_library( native-wake SHARED src/main/cpp/native-wake.cpp)

find_library( log-lib log )

target_link_libraries( native-lib ${log-lib} )
target_link_libraries( native-wake ${log-lib} )
