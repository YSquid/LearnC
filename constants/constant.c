#include <stdio.h>
#include <stdlib.h>

int main() {

    // non constant
    int num = 5;
    printf("%d\n", num);

    num = 10;
    printf("%d", num);
    

    //caps for const variables are a convention
    const int CONSTNUM = 10;

    // constnum = 5;


    return 0;
}