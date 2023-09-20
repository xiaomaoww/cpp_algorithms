#pragma once
#include <list>

class QuickSort
{
    static int partition(int array[], const int start, const int end) 
    {
        const int pivot = array[end];
        int point_index = start;

        for (int i = start; i < end; i++)
        {
            if (array[i] <= pivot)
            {
                std::swap(array[i], array[point_index]);
                point_index++;
            }
        }

        std::swap(array[point_index], array[end]);
        return point_index;
    }

public:
    static void sort(int array[], const int start, const int end)
    {
        if (start >= end)
        {
            return;
        }

        const int pivot = partition(array, start, end);
        sort(array, start, pivot - 1);
        sort(array, pivot + 1, end);
    }
};
