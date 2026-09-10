// 8kyu Opposite number — C++17 version (this one goes to Codewars).

#include <cassert>
#include <iostream>

int opposite(int number) {
    return -number;
}


int main() {
    assert(opposite(1) == -1);
    assert(opposite(14) == -14);
    assert(opposite(-34) == 34);
    assert(opposite(0) == 0);
    std::cout << "All sample tests passed\n";
}
