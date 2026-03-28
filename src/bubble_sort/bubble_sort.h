#pragma once

#include <algorithm>
#include <vector>

namespace bubble_sort {
    
void sort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        bool swapped = false;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                swapped = true;
                std::swap(arr[i], arr[j]);
            }
        }

        if (!swapped) {
            break;
        }
    }
}

} // namespace bubble_sort
