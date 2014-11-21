#pragma once


template <class T>
class Value{
    struct Node {
        //T data;
        Node *prew;
        Node *next;
    };
public:
    Value();
    Value(T element);
    Value(const Value<T> &rhs);
    ~Value();
    void setBeginning();
    void addToHead(T data);
    void addToTail(T data);
    T pop(); //Получить элемент и удалить его из списка
    T get(); //Получить элемент неудаляя его
    void delData(T data);
    void printValue();
    void clear();
    void isEmpty();
    void goNext();
    void goPrew();

private:
    Node *pHead;
    Node *pCurr;
};