add_subdirectory(quickfix)

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" OR ${CMAKE_SYSTEM_NAME} STREQUAL "Darwin" )

add_executable(at at.cpp getopt.c)

target_include_directories(at PRIVATE ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/src/quickfix ${PROJECT_SOURCE_DIR}/UnitTest++/src)
  
target_link_libraries(at ${PROJECT_NAME})

ADD_CUSTOM_TARGET(at_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:at> ${PROJECT_SOURCE_DIR}/test/at)


add_executable(ut ut.cpp getopt.c ${ut_SOURCES})

target_include_directories(ut PRIVATE ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/src/quickfix ${PROJECT_SOURCE_DIR}/UnitTest++/src ${PROJECT_SOURCE_DIR}/src/quickfix/test/)
  
target_link_libraries(ut ${PROJECT_NAME} UnitTest++)

ADD_CUSTOM_TARGET(ut_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:ut> ${PROJECT_SOURCE_DIR}/test/ut)

add_executable(pt pt.cpp getopt.c)

target_include_directories(pt PRIVATE ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/src/quickfix ${PROJECT_SOURCE_DIR}/UnitTest++/src)
  
target_link_libraries(pt ${PROJECT_NAME})

ADD_CUSTOM_TARGET(pt_target ALL
                  COMMAND ${CMAKE_COMMAND} -E create_symlink $<TARGET_FILE:pt> ${PROJECT_SOURCE_DIR}/test/pt)


endif()
