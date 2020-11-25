#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
    FILE *fp = NULL;
    char buff[256]={0};
    int pid = getpid();    
    
    snprintf(buff,256,"/proc/%d/comm",pid);
    fp = fopen(buff,"w");
    if(NULL == fp)
    {
       printf("open %s error\n",buff);
       return -1;
    }
    fwrite("modifyname1", 1,strlen("modifyname1"),fp);
    fclose(fp);
    while(1){ sleep(1); }
    
    return 0;
}
