/*

Module:
    bubble-sort.c

Function:
    Find the bubble sort of 15 numbers provided by users

Copyright notice:

    This file copyright (C) 2022 by

    MCCI Corporation
    3520 Krums Corners Road
    Ithaca, NY 14850

    An unpublished work. All rights reserved.

    This file is proprietary information, and may not be disclosed or
    copied without the prior permission of MCCI Corporation.

Author:
    Athisankar, MCCI Corporation   May 2022

*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/****************************************************************************\
|
|    Code.
|
\****************************************************************************/

/*

Name: SwapFunc.

Function:
    exchanging the values of two variables

Definition:
    int main(
        void
        );

Returns:
    Functions returning type: nothing.

*/

void SwapFunc(int *i, int *j)
    {
    int Temp;

    Temp = *i;
    *i = *j;
    *j = Temp;
    }

void bubbleSortExample(int *arr, int num)
    {
    int x, y, temp;

    for (x = 0; x < num; x++)
        {
        for (y = 0; y < num - x - 1; y++)
            {
            if (*(arr + y) > *(arr + y + 1))
                {
                SwapFunc ((arr + y),(arr + y + 1));
                }
            }
        }
    }

/*

Name: main()

Function:
    Find the bubble sort of 15 numbers provided by users.

Definition:
    int main(
        void
        );

Returns:
    Functions returning type: integer.

*/


int main(void)
    {
    int *arr, n = 15, x;
    arr = (int *) malloc(15 * sizeof(int));

    printf("Please Enter the Value of Elements:");
    for (x = 0; x < n; x++)
        scanf("%d", (arr + x));

    bubbleSortExample(arr, n);

    printf("Array after implementing bubble sort: ");
    for (x = 0; x < n; x++)
        {
        printf("%d  ", *(arr + x));
        }
    getch();
    }