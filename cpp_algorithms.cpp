#include <cstdio>

#include "BinarySearch.h"

int main()
{
    auto* searcher = new BinarySearch();
    
    int sorted_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    constexpr int x = 5;
    constexpr int length = std::size(sorted_array);
    const std::pair<int, int> result = searcher->binary_search(sorted_array, x, 0, length - 1);
    
    if (result.first == -1)
        printf("Not found");
    else
        printf("Element is found at index %d in %d steps", result.first, result.second);

    
    return 0;
}
