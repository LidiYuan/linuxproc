#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "proc_task.h"

#define PROC_TASK_COMM_PATH "/proc/%d/comm"

int proc_task_comm(int pid,char *buff,int size)
{
    int ret =0 ;
    FILE *fp = NULL;

    if(NULL == buff || size <=0)
    {
        return -1;
    }
    sprintf(buff,PROC_TASK_COMM_PATH,pid); //拼接字符串 /proc/[pid]/comm

    fp = fopen(buff,"r");   //对comm文件进行读打开
    if(NULL == fp)
    {
        printf("open %s error\n",buff);
        return -1;
    }

    if(NULL == fgets(buff,size,fp)) //读取comm中的内容
    {
        ret = -1;
        printf("read comm failed\n");
    }
    if(buff[strlen(buff)-1] == '\n')
    {
        buff[strlen(buff)-1] = '\0';
    }

    fclose(fp);         
    return ret;
}
