project(lib_tests)

# Unit Tests
add_executable(UtilsUnitTest utils_test.cc)
target_link_libraries(UtilsUnitTest
    PRIVATE template_lib GTest::gtest_main)

gtest_discover_tests(UtilsUnitTest)