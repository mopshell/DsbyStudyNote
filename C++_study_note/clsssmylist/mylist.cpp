#include "mylist.h"
//如果用到模版，则需要把实现和生命写在同一个文件里
/*using namespace std;

template <typename T>
mylist<T>::mylist(T node)
{
    pLast = new pNode<T>;
    pFist = pLast;
    pLast = new pNode<T>;
    pLast->node = node;
    pLast->next = nullptr;
    pFist->next = pLast;
}

template <typename T>
mylist<T>::mylist()
{
    pLast = new pNode<T>;
    pFist = pLast;
    pLast->next = nullptr;
}

template <typename T>
mylist<T>::mylist(const mylist &temp)
{
    pFist = new pNode<T>;
    pLast = pFist;
    pNode<T> * tp;
    for(int i = 0; i<temp.size(); ++i)
    {
        tp = pLast;
        pLast = new pNode<T>;
        pLast->node = temp.at(i);
        pLast->next = nullptr;
        tp->next = pLast;
    }
}

template <typename T>
mylist<T>::~mylist()
{
    this->clear();
    delete pFist;
    pFist = nullptr;
    pLast = pFist;
}

template <typename T>
void mylist<T>::addNode(T  node)
{
    pNode<T> * tp = pLast;
    pLast = new pNode<T>;
    pLast->node = node;
    pLast->next = nullptr;
    tp->next = pLast;
    return;
}

template <typename T>
void mylist<T>::showNode()
{
    if (this->isNull())
    {
        cout << "链表为空" <<endl;
        return;
    }

    for (int i=0; i<this->size();++i)
    {
        cout << this->at(i) <<"  ";
    }
}

template <typename T>
T mylist<T>::at(int i) const
{
    if(this->isNull())
    {
        return -1111111111;
    }
    else
    {
        int j = 0;
        pNode<T> * tp = pFist->next;
        do
        {
            if (j == i)
            {
                return tp->node;
            }
            else
            {
                j++;
                tp = tp->next;
            }
        }while(tp != pLast->next);
        return -1111111111;
    }

}

template <typename T>
const mylist<T> mylist<T>::operator =(const mylist & temp)
{
    if (temp.isNull())
    {
        this->clear();
    }
    else
    {
        for (int i = 0;i<temp.size();++i)
        {
            this->addNode(temp.at(i));
        }
    }
    return *this;
}

template <typename T>
bool mylist<T>::isNull() const
{
    if(pLast == pFist)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <typename T>
int mylist<T>::size() const
{
    if(this->isNull())
    {
        return 0;
    }
    else
    {
        int j = 0;
        pNode<T> * tp = pFist->next;
        do
        {
            j++;
            tp = tp->next;
        }while(tp != pLast->next);
        return j;
    }
}

template <typename T>
void mylist<T>::clear()
{
    if (this->isNull())
    {
        return ;
    }
    else
    {
        pNode<T> * tp = pFist->next;
        pLast = pFist;
        pLast->next = nullptr;
        do
        {
            pNode<T> * tmp = tp;
            tp = tp->next;
            delete tmp;
        }while (tp != pLast->next);
    }
}
*/
