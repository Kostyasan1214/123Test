#include <iostream>
#include <vector>

using namespace std;

std::vector<int> Vec(std::vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
    return vec;
}

TEST(Vec, PositiveNumbers) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {4, 5, 6, 7, 8};

    ASSERT_EQ(Vec(input, 3), expected);
}
