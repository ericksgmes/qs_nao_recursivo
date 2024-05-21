//
// Created by Erick Gomes on 21/05/24.
//

#include <stdio.h>
#include "stack.h"

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int l, int h)
{
    int x = arr[h];
    int i = (l - 1);

    for (int j = l; j <= h - 1; j++) {
        if (arr[j] <= x) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void quickSortIterative(int arr[], int l, int h)
{
    t_stack *stack = createStack(h - l + 1);

    push(stack, l);
    push(stack, h);

    while (!is_empty(stack)) {
        pop(stack, &h);
        pop(stack, &l);

        int p = partition(arr, l, h);

        if (p - 1 > l) {
            push(stack, l);
            push(stack, p - 1);
        }

        if (p + 1 < h) {
            push(stack, p + 1);
            push(stack, h);
        }
    }

    destroyStack(stack);
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
}
