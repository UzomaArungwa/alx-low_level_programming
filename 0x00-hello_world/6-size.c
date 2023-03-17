#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %d byte (s)\n", (unsigned long)Sizeof(a));
printf("size of a int:  %d byte (s)\n", (unsigned long)Sizeof(b));
printf("size of a long int:  %d byte (s)\n", (unsigned long)Sizeof(c));
printf("size of a long long int:  %d byte (s)\n", (unsigned long)Sizeof(d));
printf("size of a float:  %d byte (s)\n", (unsigned long)Sizeof(f));
return (0);
}
