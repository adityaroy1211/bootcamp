


// #include<stdio.h>
// int BinarySearch(int arr[],int size,int target,int high,int low ,int mid)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(mid==target)
//         {
//             return mid;
//     }
//     if(mid>target)
//     high=mid-1;
//     else{
//         low=mid+1;
//     }
              
//     }
//     return -1;
// }

// int main()
// {
    
//     int arr[5] = {5,8,54,88,74};
//     int size=sizeof(arr)/sizeof(int);
//     int element=54; 
//     int SearchIndex=BinarySearch(arr,size,element);
//     printf("The element %d was found at index %d \n",element,SearchIndex , arr[size]);
//     return 0;

// }

#include<stdio.h>
int main()
{
   int arr[6]={33,44,55,66,77,88},i=0,item;
    printf("Enter elements:");
    scanf("%d",&item);
    while(i<6)
    {
        if(arr[i]==item)
        {
            printf("the item location=%d",i);
            break;
        }
        i++;

    }
    if(i>=6)
    {
        printf("the item is not found");
    }
    return 0;

    

}

