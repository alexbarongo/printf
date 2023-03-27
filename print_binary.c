#include "main.h"


/**
* printBinary - prints the binary representation of an unsigned integer.
* @args: the unsigned integer argument to be printed in binary
*
* Return: the number of digits printed.
*/

int printBinary(va_list args)
{
unsigned int num = va_args(args, unsigned int);
int count = 0;

if (num == 0)
{
_putchar('0');
count++;
}
else
{
char binary[64];
int i = 0;

while (num > 0)
{
binary[i] = (num % 2) + '0';
num /= 2;
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(binary[i]);
count++;

}
return (count);
}
