#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main (void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	pid_t child;
	int i;
	int status;

	for (i = 0; i < 5; i++)
	{
		{

			child = fork();
			if (child == 0)
			{
				printf("Child process : %d\n", getpid());

				if (execve(argv[0], argv, NULL) == -1)
				{
					printf("Error\n");
				}
			}
			else
			{
				wait(&status);
				printf("I am the parent process: %d\n", getppid());
			}
		}
	}
	return (0);
}
