#include <gtest/gtest.h>

// Sample test case
TEST(SampleTest, BasicAssertions) {
    EXPECT_TRUE(true);
    EXPECT_EQ(2 + 2, 4);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
