#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "proc_task.h"

int main(int argc,char *argv[])
{
    char buff[256]={0};
 
    if (0 == proc_task_comm(getpid(),buff,256))
    {
        printf("comm = %s\n",buff);
    }

    return 0;
}



