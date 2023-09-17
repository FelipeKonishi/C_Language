#include <stdio.h>

void InsertionSort(int arr[], int lenght);

int main(void){

int arr[] = {3,9,1,7,5,8,6};
int tam = sizeof(arr)/sizeof(arr[1]);


InsertionSort(arr,tam);
for(int i=0; i<tam; i++) printf("Array[%d] = %d\n",i,arr[i]);


return 0;
}

void InsertionSort(int arr[], int lenght){
    for(int i=1; i<lenght; i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}