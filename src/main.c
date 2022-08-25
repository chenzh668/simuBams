#include "main.h"

#include <stdio.h>


#include <dlfcn.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "threads.h"

PARA_BAMS para={2,{9600,9600},{2,2}};
int main(int argc,char *argv[])
{
	int i;
	printf("argc = %d\n",argc);
	for(i=0;i<argc;i++)
	   printf("argv[%d] is %s\n",i,argv[i]);
	CreateThreads((void*)&para);
	return 0;
}