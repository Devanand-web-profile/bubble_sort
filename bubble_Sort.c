#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[50], i, j, n, temp;

    printf("\n\t\t Plese Enter The Numbers OF Element In An Array :- ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf(" \t\t Arr[ %d ]=", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The Shorted Elements Are :- ");
    for ( i = 0; i < n; i++)
    {
        printf("\n \t Arr[%2d]=",i);
        printf("%d",arr[i]);
    }
    
}