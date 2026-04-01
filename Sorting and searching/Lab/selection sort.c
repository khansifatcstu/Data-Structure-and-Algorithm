#include <stdio.h>

int main()
{
    int A[] = {12, 18, 5, 7, 10, 8, 17};
    int n = 7;
    int min, temp;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        if ( min!=i)
        {
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
        }
    }

    printf("Sorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
