#include<stdio.h>

int main(void){

    int arr[] = {5,11,3,8,10,4,2};

    int length = sizeof(arr)/sizeof(arr[0]);
    int min,i;
    min = arr[0];


    for(i = 0; i<length; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Minimum number: %d\n", min);


    return 0;
}