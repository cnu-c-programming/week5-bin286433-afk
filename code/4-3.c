#include <stdio.h>
#include <stdlib.h>



int main() {
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int index;

    scanf("%d", &index);

    if(index<5){
        printf("%d",arr[index]);
    }
    else if(index>5){
        printf("Error!");
    }

    return 0;
}
