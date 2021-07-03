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
		system("ps");
		system("ls");
		system("ls -al");
		ret=0;
	}else
	{
		ret=1;
	}

	return ret;
}
