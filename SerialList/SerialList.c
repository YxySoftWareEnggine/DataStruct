#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SerialList.h"

typedef struct _tag_SerialList
{
    int length;
    int capacity;
    unsigned int* array;
}T_SerialList;


SerialList* SerialList_Create(int capacity)
{
    T_SerialList* tmp = (T_SerialList*)malloc(sizeof(T_SerialList));
    if(tmp==NULL)
    {
        printf("func SerialList_Create() error %d\n",-1);
        return NULL;
    }

    memset(tmp,0,sizeof(T_SerialList));
    tmp->array = (unsigned int* )malloc(sizeof(unsigned int)*capacity);
    if(tmp->array ==NULL)
    {
        printf("func SerialList_Create() error %d\n",-1);
        return NULL;
    }

    tmp->capacity = capacity;
    tmp->length = 0;
    return tmp;
}

int SerialList_Destroy(SerialList* list)
{
    T_SerialList* tList = (T_SerialList*)list;
    if(tList==NULL)
        printf("this List is NULL\n");
    else if (tList->array==NULL)
        printf("Node is NULL\n");
    else
    {
        free(tList->array);
        free(tList);
    }
    return 0;
}

int SerialList_Clear(SerialList *list)
{
    if(list==NULL)
    {
        printf("this list is NULL\n");
        return -1;
    }
    T_SerialList *tlist = (T_SerialList*)list;
    tlist->length = 0;

    return 0;
}

int SerialList_Length(SerialList* list)
{
    if(list==NULL)
    {
        printf("this list is NULL\n");
        return -1;
    }
    T_SerialList *tlist = (T_SerialList*)list;
    return tlist->length;
}

int SerialList_Capacity(SerialList* list)
{
    if(list==NULL)
    {
        printf("this list is NULL\n");
        return -1;
    }
    T_SerialList *tlist = (T_SerialList*)list;
    return tlist->capacity;

}

int SerialList_Insert(SerialList* list, SerialListNode* Node, int pos)
{
    T_SerialList *tlist = (T_SerialList*)list;
    if((pos>tlist->capacity)||(pos>tlist->length)||((tlist->length+1)>tlist->capacity)||(Node==NULL)||(tlist==NULL))
    {
        printf("this pos is not allow\n");
        return -1;
    }
    for(int i=tlist->length+1 ;i>pos ;i--)
        tlist->array[i] = tlist->array[i-1];
    tlist->array[pos] = (*(unsigned int *)Node);
    tlist->length++;
    return 0;
}

SerialListNode *SerialList_Get(SerialList* list, int pos)
{
    T_SerialList *tlist = (T_SerialList*)list;
    int  *ret = NULL;
    if((pos>tlist->capacity)||(pos>tlist->length)||((tlist->length+1)>tlist->capacity)||(tlist==NULL))
    {
        printf("this pos is not allow\n");
        return NULL;
    }
    return (SerialListNode *)(&tlist->array[pos]); 
}

int  SerialLis_Delete(SerialList* list, int pos)
{
    T_SerialList *tlist = (T_SerialList*)list;
    if((pos>tlist->capacity)||(pos>tlist->length)||((tlist->length+1)>tlist->capacity)||(tlist==NULL))
    {
        printf("this pos is not allow\n");
        return -1;
    }
    for(int i=pos+1;i<tlist->length;i++)
    {
        tlist->array[i-1]=tlist->array[i];
    }
    tlist->length--;
    return 0;
}
