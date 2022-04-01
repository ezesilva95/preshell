#include <stdio.h>
#include <unistd.h>

int main ()
{
	int ppid;
	
	ppid = getppid();

	printf("Parent Process ID: %d\n", ppid);

	return 0;
}
