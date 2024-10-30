#include "my_math.h"

#include "stdio.h"

int main(int argc, char* argv[]){
    printf("%s\n", "Hello, World!");

    int a = my_mul(1, my_dif(4, 3));
    printf("%d\n", a);
    return 0;
}
