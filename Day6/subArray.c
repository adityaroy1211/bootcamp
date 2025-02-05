#include <stdio.h>

// void printSubarrays(int arr[], int n) {

//     for (int i = 0; i < n; i++) {
    
//         for (int j = i; j < n; j++) {

//             for (int k = i; k <= j; k++) {
//                 printf("%d ", arr[k]);
//             }
//             printf("\n");
//         }
//     }
// }
// int main() {
//     int arr[] = {1, 2, 3};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printSubarrays(arr, n);
//     return 0;
// }



// -------------------------------------------------------------------------------------------------------
// max sum of sub array


// int maxSumSubarray(int arr[], int n) {
//     int max_sum = arr[0];  
//     int current_sum = arr[0];  
//     for (int i = 1; i < n; i++) 
//     {
//         current_sum = (current_sum + arr[i] > arr[i]) ? current_sum + arr[i] : arr[i];
//         if (current_sum > max_sum) 
//         {
//             max_sum = current_sum;
//         }
//     }
//     return max_sum;  
// }

// int main() {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  
//     int n = sizeof(arr) / sizeof(arr[0]);  
//     int result = maxSumSubarray(arr, n);  
//     printf("maximum sum of subarray is: %d\n", result);

//     return 0;
// }



// ---------------------------------------------------------------------------------------------------------
// int max_sum_subarray(int arr[], int n, int k) {
//     int window_sum = 0;

//     for (int i = 0; i < k; i++) {
//         window_sum += arr[i];
//     }

//     int max_sum = window_sum;

//     for (int i = k; i < n; i++) {
//         window_sum += arr[i] - arr[i - k];
//         if (window_sum > max_sum) {
//             max_sum = window_sum;
//         }
//     }

//     return max_sum;
// }

// int main() {
//     int arr[] = {2, 1, 5, 1, 3, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;

//     int result = max_sum_subarray(arr, n, k);
//     printf("maximum sum of a subarray of size %d is: %d\n", k, result);

//     return 0;
// }



