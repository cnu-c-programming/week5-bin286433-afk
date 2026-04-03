#include <stdio.h>

void print_reverse(int *arr, int size){
    int *ptr = arr+size-1;
    
    for(int i=0; i<size; i++){
        if(i==size){
            printf("%d", *ptr);
        }
        printf("%d ", *ptr);
        ptr--;
    }
}


int main() {
    int nums[] = {1, 2, 3, 4,5};

    print_reverse(nums, 5);
    printf("\n");

    return 0;
}
