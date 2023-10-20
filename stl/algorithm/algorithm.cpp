#include <algorithm>

std::vector<int> c { 1, 2, 3 };

int main() {

    // sort c in descending order
    std::sort(c.begin(), c.end(), [](int a, int b) { return a > b; });

    // sort c in ascending order with even numbers first
    std::sort(c.begin(), c.end(), [](int a, int b) { return (a % 2 == 0 && b % 2 == 0) ? (a < b) : (a % 2 == 0) ? true : false; });
    // slower, useful in comparing structs
    std::stable_sort(c.begin(), c.end());

    // convert all characters in a string to lowercase
    std::transform(c.begin(), c.end(), c.begin(), [](char ch) { return ch = std::tolower(ch); });
    // or: for(char& ch : c) ch = std::tolower(ch);

    // returns itr pointing to end of unique elements
    std::unique(c.begin(), c.end());
    auto uitr = std::unique(c.begin(), c.end());
    int num_uniq = std::distance(c.begin(), uitr);



    return 0;
}