#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;

    printf("Enter your age: ");

    // ampersand denotes a pointer
    scanf("%d", &age);

    printf("You are %d years old", age);

    return 0;
}