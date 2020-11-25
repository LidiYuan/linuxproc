#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/prctl.h>

int main(int argc,char *argv[])
{
    prctl(PR_SET_NAME, "modifyname2", 0, 0, 0);
    while(1){ sleep(1); }  
    return 0;
}
