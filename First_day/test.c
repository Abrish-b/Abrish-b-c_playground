#include <stdio.h> // define the header file
void main()        // define the main function
{
    int age;
    char c;
    char name[10];
    scanf("%s %d %c", &name, &age, &c);
    printf("My name is %s and I am %d and I am currently studing %c in ALX.", name, age, c); // print the statement.
}