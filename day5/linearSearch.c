#include<stdio.h>
int LinearSearch(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        
            return i;
        
        
    }
    return -1;
}

int main()
{
    
    int arr[5] = {5,8,54,88,74};
    int size=sizeof(arr)/sizeof(int);
    int element=54; 
    int SearchIndex=LinearSearch(arr,size,element);
    printf("The element %d was found at index %d \n",element,SearchIndex , arr[size]);
    return 0;

}
