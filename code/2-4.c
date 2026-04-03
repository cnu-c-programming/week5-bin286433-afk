#include <stdio.h>

long my_strtol(char *str, char **endptr){
    long res = 0;

    while(isdigit(str)){
        char
    }
}



int main() {
    char str[] = "20266hello";
    char *end;

    long val = my_strtol(str, &end);

    printf("%ld %s\n", val, end);

    return 0;
}
