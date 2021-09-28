#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Linklist.h"

typedef struct _tag_SingleLinkList
{
    int val;
    struct _tag_LinkList* next;
}T_SingleLinkList;


LinkList* LinkList_signle_Create(int len)
{
    T_SingleLinkList* tmp = (T_SingleLinkList*)malloc(sizeof(T_SingleLinkList));
    T_SingleLinkList *end =tmp;
    if(tmp==NULL)
    {
        printf("func LinkList_Create() error %d\n",-1);
        return NULL;
    }
    for(int i=0;i<len;i++)
    {
        T_SingleLinkList* mid = (T_SingleLinkList*)malloc(sizeof(T_SingleLinkList));
        mid->val = 0;
        end->next = mid;
        end = mid;
    }
    end->next = NULL;
    return tmp;
}

int LinkList_Length(LinkList* list)
{
    int length= 0;
    T_SingleLinkList* tlist  = (T_SingleLinkList*)list;
    if(tlist==NULL)
    {
        printf("this is a NULL LinkList\n");
        return -1;
    }
    while(tlist->next!=NULL)
    {
        length++;
        tlist = tlist->next;
    }
    return length;
}
