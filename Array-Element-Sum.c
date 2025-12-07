// Array Element Sum......
#include <stdio.h>
int main()
{

    int n, sum = 0;
    printf("Enter the Size Of Array:");
    scanf("%d", &n);

    int arr[n];

    // Put value array......

    for (int i = 0; i < n; i++)
    {

        printf("Enter the element in the Array[%d]:", i);
        scanf("%d", &arr[i]);
    }

    // Display Which Value there ......

    for (int i = 0; i < n; i++)
    {
        printf("\nThe Array Element [%d] Is:%d" ,i,arr[i]);
    }

    // Sum Array....

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nThe Sum Of Array Element Is:%d", sum);
    return 0;
}