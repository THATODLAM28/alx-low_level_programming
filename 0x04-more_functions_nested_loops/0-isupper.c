#include "main.h"
/**
 * checks for the uppercase character.
 * @c: Variable text
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
