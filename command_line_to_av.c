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
	char *token = NULL;

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
			token = strtok(line, " ");
			while (token != NULL)
			{
				printf("%s", token);
				token = strtok(NULL, " ");
				if (token != NULL)
				{
					printf("\n");
				}
			}
		}
	}
	free(line);
	return (0);
}
