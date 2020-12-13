#include "foo/Add.hpp"
#include <gtest/gtest.h>

TEST(AddTests, Add_3_Positive)
{
	EXPECT_EQ(foo::add(2, 3, 4), 9);
	EXPECT_EQ(foo::add(12, 2, 7), 21);
	EXPECT_EQ(foo::add(5, 5, 5), 15);
}

TEST(AddTests, Add_2_Positive_And_1_Negative)
{
	EXPECT_EQ(foo::add(4, 5, -2), 7);
	EXPECT_EQ(foo::add(-9, 4, 5), 0);
	EXPECT_EQ(foo::add(5, -5, -5), -5);
}