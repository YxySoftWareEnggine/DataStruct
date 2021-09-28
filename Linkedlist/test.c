#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Linklist.h"


int main(int argc,char**argv)
{
    LinkList *inital = LinkList_signle_Create(10);
    int len  = LinkList_Length(inital);
    printf("this LinkList length =%d\n",len);
}