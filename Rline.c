#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	int returnvalue = 0, eof = 1;
	char *str = "end-of-file\n";

	while (eof != 0)
	{
		printf("$ ");
		returnvalue = getline(&line, &len, stdin);
		eof = strcmp (line, str);
		if(eof == 0)
		{
			break;
		}
		if (returnvalue == -1)
		{
			break;
		}
		else
		{
			printf("%s", line);
		}
	}
	free(line);
	return (0);
}
