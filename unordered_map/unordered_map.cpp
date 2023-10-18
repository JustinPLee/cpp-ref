#include <algorithm>

/*

// sort c in descending order
    std::sort(c.begin(), c.end(), [](int a, int b) { return a > b; });

// sort c in ascending order with even numbers first
    std::sort(c.begin(), c.end(), [](int a, int b) { return (a % 2 == 0 && b % 2 == 0) ? (a < b) : (a % 2 == 0) ? true : false; });
    std::stable_sort(c.begin(), c.end());

    std::transform(s.begin(), s.end(), s.begin(), [](char c) { return c = std::tolower(c); });

*/