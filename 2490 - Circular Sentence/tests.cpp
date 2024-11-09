#include <gtest/gtest.h>
#include "solution.h"

TEST(SolutionTest, NaiveImplementation) {
    EXPECT_TRUE(Solution::isCircularSentenceNaive("leetcode exercises sound delightful"));
    EXPECT_TRUE(Solution::isCircularSentenceNaive("eetcode"));
    EXPECT_FALSE(Solution::isCircularSentenceNaive("Leetcode is cool"));
}

TEST(SolutionTest, FindImplementation) {
    EXPECT_TRUE(Solution::isCircularSentenceFind("leetcode exercises sound delightful"));
    EXPECT_TRUE(Solution::isCircularSentenceFind("eetcode"));
    EXPECT_FALSE(Solution::isCircularSentenceFind("Leetcode is cool"));
}

TEST(SolutionTest, FindViewImplementation) {
    EXPECT_TRUE(Solution::isCircularSentenceFindView("leetcode exercises sound delightful"));
    EXPECT_TRUE(Solution::isCircularSentenceFindView("eetcode"));
    EXPECT_FALSE(Solution::isCircularSentenceFindView("Leetcode is cool"));
}
