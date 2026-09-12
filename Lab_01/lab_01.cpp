#include <iostream>

int main(){

     int arr[5];
    printf("enter the 5 elements of your array: \n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
int largest=arr[0];
int smallest=arr[0];

for(int i=1 ; i<5 ; i++)
{
    if(arr[i]>largest)
    largest =arr[i];
    
    if(arr[i] < smallest)
     smallest = arr[i];
    
    
    
        
    }

printf("THE LARGEST NO. IN THE ARRAY IS: %d\n", largest);
printf("THE SMALLEST NO, IN THE ARRAY IS: %d\n",smallest);
    return 0;
}
