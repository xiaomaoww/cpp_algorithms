#pragma once
#include <iostream>

class BinarySearch
{
public:
    std::pair<int, int> binary_search(int sorted_array[], int x, int low, int high)
    {
        int iterations = 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            iterations++;

            if (sorted_array[mid] == x)
                return {mid, iterations};

            if (sorted_array[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;

        }

        return {-1, 0};
    }
};
