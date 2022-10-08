#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order using Bubble sort
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
    int i = 0, j = 0, swap;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
        size = swap;
    }

}
