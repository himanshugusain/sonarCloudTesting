#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

#define TESTFILE	"/tmp/testfile"
int main()
{
	int ret;
	FILE *fp = fopen(TESTFILE,"r");
	if ( fp != NULL )
	{
		printf("able to open file\n");

		system("ps");
		system("ls");
		system("ls -al");
		fclose(fp);
		ret=0;
	}else
	{
		printf("Unable to open file\n");
		ret=1;
	}

	system("ps -aux");
	return ret;
}
