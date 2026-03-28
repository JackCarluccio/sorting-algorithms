#pragma once

#include <algorithm>
#include <vector>

namespace {

bool isSorted(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}

} // namespace anonymous

namespace miracle_sort {

void sort(std::vector<int>& arr) {
    while (!isSorted(arr)) {}
}

} // namespace miracle_sort
