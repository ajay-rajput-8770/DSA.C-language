#include <stdio.h>

void quick(int a[], int n, int beg, int end, int *loc)
{
    int left, right, temp;
    left = beg;
    right = end;
    *loc = beg;

step1:
    while (a[*loc] <= a[right] && *loc != right)
        right--;

    if (*loc == right)
        return;

    if (a[*loc] > a[right])
    {
        temp = a[*loc];
        a[*loc] = a[right];
        a[right] = temp;
        *loc = right;
    }

step2:
    while (a[*loc] >= a[left] && *loc != left)
    {
        left++;
    }
        

    if (*loc == left)
    {
        return;
    }

    if (a[*loc] < a[left])
    {
        temp = a[*loc];
        a[*loc] = a[left];
        a[left] = temp;
        *loc = left;
    }

    goto step1;
}

void quickshort(int a[], int n)
{
    int upper[20], lower[20];
    int top = -1, beg, end, loc;

    if (n > 1)
    {
        top++;
        lower[top] = 0;
        upper[top] = n - 1;
    }

    while (top != -1)
    {
        beg = lower[top];
        end = upper[top];
        top--;

        quick(a, n, beg, end, &loc);

        if (beg < loc - 1)
        {
            top++;
            lower[top] = beg;
            upper[top] = loc - 1;
        }

        if (loc + 1 < end) // ✅ fixed condition
        {
            top++;
            lower[top] = loc + 1;
            upper[top] = end;
        }
    }
}

int main()
{
    int a[] = {20, 45, 33, 99, 88, 55, 11, 77, 66, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int i;

    quickshort(a, n);

    printf("Quick sort result:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // ✅ space added
    }
    printf("\n");
}
