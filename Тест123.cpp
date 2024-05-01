#include <iostream>
#include <vector>

using namespace std;

std::vector<int> Vec(std::vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i] += n;
    }
    return vec;
}

bool testVec() {
    std::vector<int> vec1 = { 1, 2, 3, 4, 5 };
    std::vector<int> result1 = Vec(vec1, 10);
    if (vec1[1] + 10 == result1[1] && vec1[2] + 10 == result1[2] && vec1[3] + 10 == result1[3]) {
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    cout << testVec();
}