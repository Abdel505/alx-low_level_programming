#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *n = "123456789243457436782357457567847768578564"
	"5685876876774586734734563456453743756756784448";

	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		
	}
	else
	{

	}
	n = "1234567890";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "999999999";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	res = infinite_add(n, m, r3, 11);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	return (0);
}
