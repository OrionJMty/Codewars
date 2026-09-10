// 8kyu Opposite number — C++23 version with concepts (local/portfolio only).
// Kata: https://www.codewars.com/kata/56dec885c54a926dcd001095

#include <cassert>
#include <concepts>
#include <iostream>

template <typename T>
concept Negatable = requires(T a) {
    { -a } -> std::same_as<T>;
};

template <Negatable T>
T opposite(T number) {
    return -number;
}

int main() {
    assert(opposite(1) == -1);
    assert(opposite(14) == -14);
    assert(opposite(-34) == 34);
    assert(opposite(2.5) == -2.5);
}
