//Q2 HOW TO FIND THE LARGEST AND SMALLEST AMONG THE GIVEN ARRAY// 
#include <stdio.h> 
int main(){ 
    int arr[5]; 
    printf("enter the 5 elements of your array : \n"); 
    for(int i=0; i<5; i++){ 
        scanf("%d",&arr[i]); 
    } 
int largest=arr[0]; 
int smallest=arr[0]; 

for(int i=1 ; i<5 ; i++){ 
    if(arr[i]>largest){ 
        largest=arr[i]; 
    } 
} 

for(int i=1 ; i<5 ; i++){ 
    if(arr[i]<smallest){ 
        smallest=arr[i]; 
    } 
} 

printf("THE LARGEST NO. IN THE ARRAY IS : %d ", largest); 
printf("THE SMALLEST NO. IN THE ARRAY IS : %d ", smallest); 
return 0; 
}*/ 
