#include "pch.h"
#include "../Project1/Math.h" 
#include <gtest/gtest.h>

TEST(MathTest, MultiplyFunctions) {
    EXPECT_EQ(Multiply(2, 3), 6);
    EXPECT_EQ(Multiply(-2, 3), -6);
    EXPECT_EQ(Multiply(0, 3), 0);
}
