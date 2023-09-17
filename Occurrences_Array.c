#include <stdio.h>


int main(void){

    int arr[] = {6,8,2,4,3,3,1,5};

    int count = 0;
    int find = 3;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length; i++){
        if(arr[i] == find){
            count++;
        }
    }
    printf("The number of %ds found: %d", find,count);

return 0;
}