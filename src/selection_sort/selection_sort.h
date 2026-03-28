#pragma once

#include <algorithm>
#include <vector>

namespace selection_sort {

void sort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i;
        for (int j = i; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        std::swap(arr[i], arr[minIndex]);
    }
}
    
} // namespace selection_sort
