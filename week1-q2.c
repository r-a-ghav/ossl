#include <stdio.h>

struct str1
{
    int i;
    char c;
    float f;
    char s[30];
};

int main()
{
    struct str1 var1 = { 1, 'A', 1.00, "Raghav" };
    printf("Struct 1\n\tinteger = %d, character = %c, float = %f, string = %s\n", var1.i, var1.c, var1.f, var1.s);
    return 0;
}
