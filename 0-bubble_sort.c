#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending order using Bubble sort
 * @array: array of integers
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
    int i , j, swap, tmp;

    for (i = 0; i < size; i++)
    {
        swap = 0

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;

                swap = 1;
            }
        }
        if (swap == 0)
            break;
    }
}