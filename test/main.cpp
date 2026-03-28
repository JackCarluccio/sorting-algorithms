#include <functional>
#include <iostream>
#include <string>
#include <vector>

#include "../src/bubble_sort/bubble_sort.h"
#include "../src/miracle_sort/miracle_sort.h"

std::function<void(std::vector<int>&)> find_callback(const std::string& algorithm) {
    if (algorithm == "bubble") {
        return bubble_sort::sort;
    } else if (algorithm == "miracle") {
        return miracle_sort::sort;
    } else {
        throw std::invalid_argument("Unsupported sorting algorithm: " + algorithm);
    }
}

int main(int argc, char** argv) {
    if (argc != 2) {
        throw std::invalid_argument("Expected one argument");
    }

    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    std::string algorithm = argv[1];
    auto sort = find_callback(algorithm);

    std::cout << "Running " + algorithm << std::endl;
    sort(arr);

    for (auto n : arr) {
        std::cout << n << ", ";
    }
    std::cout << std::endl;
}
