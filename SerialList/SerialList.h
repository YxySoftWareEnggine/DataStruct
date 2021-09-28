#ifndef _YXY_SERIALLIST_H
#define _YXY_SERIALLIST_H

typedef void SerialList;
typedef void SerialListNode;


SerialList *SerialList_Create(int capacity);

int SerialList_Destroy(SerialList* list);

int SerialList_Clear(SerialList *list);

int SerialList_Length(SerialList* list);

int SerialList_Capacity(SerialList* list);

int SerialList_Insert(SerialList* list, SerialListNode* Node, int pos);

SerialListNode *SerialList_Get(SerialList* list, int pos);

int SerialLis_Delete(SerialList* list, int pos);


#endif