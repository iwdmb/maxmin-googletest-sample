#include "maxmin.h"
#include <gtest/gtest.h>

namespace {
	TEST(MaxTest, Positive) {
		EXPECT_EQ(20, Max(10, 20));
		EXPECT_EQ(20, Max(20, 10));
	}

	TEST(MinTest, Positive) {
		EXPECT_EQ(10, Min(10, 20));
		EXPECT_EQ(10, Min(20, 10));
	}

	TEST(MaxTest, Zero) {
		EXPECT_EQ(0, Max(0, 0));
		EXPECT_EQ(0, Max(0, 0));
	}

	TEST(MinTest, Zero) {
		EXPECT_EQ(0, Min(0, 0));
		EXPECT_EQ(0, Min(0, 0));
	}

	TEST(MaxTest, Negative) {
		EXPECT_EQ(-10, Max(-10, -20));
		EXPECT_EQ(-10, Max(-20, -10));
	}

	TEST(MinTest, Negative) {
		EXPECT_EQ(-20, Min(-10, -20));
		EXPECT_EQ(-20, Min(-20, -10));
	}
}
