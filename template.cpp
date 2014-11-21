#include <string.h>
#include "template.h"
#include "iostream"

template <class T> Value<T>::Value<T>():pHead(NULL), pCurr(NULL) {
    pHead = pCurr;
}

template <class T> Value<T>::Value<T>(T element):{
    head = NULL;
    curr = NULL;
    addToHead(element);
}

template <class T> Value<T>::~Value<T>():{
    //clear();
}

template <class T> void Value<T>::setBeginning() {
    pCurr = pHead;
}


template <class T> void Value<T>::addToHead(T data) {
    if (pHead == NUll) {
        pHead = new Node;
        pHead->data = data;
        pHead->next = NULL;
        pHead->prew = NULL;
        return;
    }

    //pCurr = pHead;

    Node *pNewNode = new Node;
    pNewNode->data = data;
    pNewNode->prew = pHead->prew;
    pNewNode->next = pHead;
    pHead->prew = pNewNode;
    pHead = pNewNode;

}