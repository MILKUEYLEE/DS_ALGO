#include <stdio.h>

int BSearch(int ar[], int len, int target)
{
    int first = 0;
    int last = len - 1;
    int mid;

    while(first <= last)
    {
        mid = (first + last)/2;

        if(ar[mid] == target)
        {
            return mid;
        }

        else
        {
            if(target < ar[mid])
            {
                last = mid - 1;
            }
            else
            {
                first = mid + 1;
            }
        }
    }
    return -1;
}

int main(void)
{
    
}