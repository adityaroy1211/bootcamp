// #include<stdio.h>
// #include<stdbool.h>
// bool isSorted(int arr[],int size)
// {
//     for(int i=1;i<size;i++)
//     {
//         if(arr[i]<arr[i-1])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// int main()
// {
//     int size;
//     printf("Enter the size of array \n:");
//     scanf("%d",&size);
//     int arr[size];
//     printf("Enter the elements of array \n:");
//     for(int i=0;i<size;i++)
//     {
//         scanf("%d",arr[i]);
//     }
//     bool res=isSorted(arr,size);
//     printf("%d",res);

//

//}

#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}
