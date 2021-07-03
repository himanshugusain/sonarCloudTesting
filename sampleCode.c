#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
	int ret;
	ret = WEXITSTATUS(system("ps"));
	if (ret != 0)
	{
		printf("failure in execution of ps command\n");
		return 1;
	}else
	{
	
		printf("success in execution of ps command\n");
	}
	return 0;
}
