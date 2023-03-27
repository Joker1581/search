#include <stdio.h>


#define GET_ARRAY_LEN(array, len) {len = sizeof(array) / sizeof(array[0]);}
 

int BinarySearch_Rec(int num[], int target, int left, int right)
{
    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (num[mid] == target)
            return mid;
        else if (num[mid] > target)
            return BinarySearch_Rec(num, target, left, mid - 1);
        else if (num[mid] < target)
            return BinarySearch_Rec(num, target, mid + 1, right);
    }
    return -1;
}

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7};
    int len;
    GET_ARRAY_LEN(num, len)
    //找到5的位置
    int loc = BinarySearch_Rec(num, 7, 0, len);
    printf("%d", loc);
 
    return 0;
}