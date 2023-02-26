#include <iostream>
#include "stack.h"
using namespace std;


template <class T, int n>
stack<T,n>::stack()
{  
};

template <class T, int n>
void stack<T,n>::push(T a){
    if(!(full())){
        arr[++at] = a;
    }else{
        cout<<"Your stack is full" <<endl;
    }
};


template <class T, int n>
bool stack<T,n>::full(){
    if(at == n-1){
        return true;
    }else{
        return false;
    }
};

template <class T, int n>
bool stack<T,n>::empty(){
    if(at == -1){
        return true;
    }else{
        return false;
    }
};


template <class T, int n>
void stack<T,n>::pop(){
    if(!(empty())){
        cout<<"The poped element is "<<arr[at]<<endl;
        at = at - 1;
    }else{
        cout<<"Cannot pop, you array is empty!"<<endl;
    }

};


template <class T, int n>
void stack<T,n>::top(){
    if(!(empty())){
        cout<<"Your top elemnt is "<< arr[at]<<endl;
    }else{
        cout<<"No top, you array is empty!"<<endl;
    };

};

template <class T, int n>
void stack<T,n>::display(){
    for(int i = 0; i<=at;i++){
        cout<<arr[i]<<" ";
    }
}