#include <stdio.h>

int main (__attribute__((unused))int ac, char **av)
{
	int a;

	for (a = 1; av[a] != 0; a++;)
	{
		printf("%s\n", av[a]);
	}
	return 0;
}
