#include <cstdio>

#include "BinarySearch/BinarySearch.h"
#include "QuickSort/QuickSort.h"

void test_quick_sort();
void test_binary_search();

int main()
{
    return 0;
}


void test_binary_search()
{
    int sorted_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    constexpr int x = 5;
    constexpr int length = std::size(sorted_array);
    const std::pair<int, int> result = BinarySearch::search(sorted_array, x, 0, length - 1);
    
    if (result.first == -1)
        printf("Not found");
    else
        printf("Element is found at index %d in %d steps", result.first, result.second);
}

void test_quick_sort()
{
    int array[] = { 9, -13, 5, 2, 2, 18, -6, 0, 3 };
    constexpr int n = std::size(array);
    
    QuickSort::sort(array, 0, n - 1);
 
    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
}