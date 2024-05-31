#include "pch.h"
#include "template.cpp"
#include <iostream>
#include <vector>
using namespace std;

TEST(IncreaseElements, positive) {
    vector<int> input = { 1, 2, 3, 4, 5 };
    vector<int> expected = { 6, 7, 8, 9, 10 };
    ASSERT_EQ(increaseVector(input, 5), expected);
}
TEST(IncreaseElements, negative) {
    vector<int> input = { -1, -2, -3, -4, -5 };
    vector<int> expected = { 4, 3, 2, 1, 0 };
    ASSERT_EQ(increaseVector(input, 5), expected);
}
TEST(IncreaseElements, mixed) {
    vector<int> input = { -1, 0, 1, -2, 2 };
    vector<int> expected = { 4, 5, 6, 3, 7 };
    ASSERT_EQ(increaseVector(input, 5), expected);
}
TEST(IncreaseElements, empty) {
    vector<int> input = {};
    vector<int> expected = {};
    ASSERT_EQ(increaseVector(input, 0), expected);
}
TEST(IncreaseElements, zero) {
    vector<int> input = { 1, 2, 3, 4, 5 };
    vector<int> expected = { 1, 2, 3, 4, 5 };
    ASSERT_EQ(increaseVector(input, 0), expected);
}