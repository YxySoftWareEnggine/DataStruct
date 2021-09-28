#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SerialList.h"

int main(int argc,char **argv)
{
    int a =10;
    int b = 133;
    SerialList * inital = SerialList_Create(10);
    int Capacity = SerialList_Capacity(inital);
    printf("capacity = %d\n",Capacity);
    SerialList_Insert(inital,(SerialListNode*)&a,0);
    SerialList_Insert(inital,(SerialListNode*)&a,1);
    SerialList_Insert(inital,(SerialListNode*)&b,2);
    SerialList_Insert(inital,(SerialListNode*)&a,3);
    SerialList_Insert(inital,(SerialListNode*)&a,4);
    int*ret =(int*)SerialList_Get(inital,2);
    printf("data = %d\n", *ret);
    SerialLis_Delete(inital,2);
    int len = SerialList_Length(inital);
    printf("len = %d\n",len);
    int*aret =(int*)SerialList_Get(inital,2);
    printf("data = %d\n", *aret);


}