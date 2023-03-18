#include <gtest/gtest.h>
#include "utils.h"

TEST(TestUtils, UtilMsgCorrect) {
    tmplt::ExampleClass<std::string> test;
    ASSERT_EQ(test.GetMsg(), "Hello, world");
}