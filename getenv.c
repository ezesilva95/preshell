#include "main.h"
/*
*
*
*/
int _getenv(char *name)
{:
	int i = 0;
	int j = 0;
	int flag = 1;

	while (environ[i])
	{
		if (name[0] == environ[i][0])
		{
			flag = 1;
			for (j = 0; name[j]; j++)
			{
				if (name[j] != environ[i][j])
				{	
					flag = 0;
				}
			}
			if (flag && environ[i][j] == '=')
			{
				return (i);
			}
		}
		i++;
	}
	return (-1);
}


char *tokenenv( char *name)
{
	char *token = NULL, *name2;
	int count;


	name2 = strdup(name);
	
	while (name[count])
	{
		count++;

		if(name[count] != "=")
		{
			count++;
		}

