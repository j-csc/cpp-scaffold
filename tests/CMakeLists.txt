find_package(GTest CONFIG REQUIRED)

add_executable(${PROJECT_NAME}_tests test_main.cpp)
target_link_libraries(${PROJECT_NAME}_tests PRIVATE GTest::gtest GTest::gtest_main)

add_test(NAME ${PROJECT_NAME}_tests COMMAND ${PROJECT_NAME}_tests)
