#ifndef _YXY_LINKLIST_H
#define _YXY_LINKLIST_H

typedef void LinkList;
typedef void LinkListNode;


LinkList* LinkList_signle_Create(int len);

LinkList* LinkList_Twoway_Create(int len);

int LinkList_Destroy(LinkList* list);

int LinkList_Clear(LinkList *list);

int LinkList_Length(LinkList* list);

int LinkList_Insert(LinkList* list, LinkListNode* Node, int pos);

LinkListNode* LinkList_Get(LinkList* list, int pos);

int LinkList_Delete(LinkList* list, int pos);


#endif