#include<stdio.h>
void main()
{
    int i,n;
    int largest;
    printf("enter the number of elements in an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number of elements in an arrays:");
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    for(i = 0;i<n;i++){
        if(largest>arr[i]){
           largest = arr[i];
        }
    }
    printf("The largest element of array is: %d",largest);
    
}