
#include <gtest/gtest.h>
#include "solution.h"

using namespace task_3133;

TEST(SolutionTest, SimpleConstruction) {
    EXPECT_EQ(Solution::minEndSimple(3, 4), 6);
    EXPECT_EQ(Solution::minEndSimple(2, 7), 15);
}

TEST(SolutionTest, BitsetConstruction) {
    EXPECT_EQ(Solution::minEndBitset(3, 4), 6);
    EXPECT_EQ(Solution::minEndBitset(2, 7), 15);
}
