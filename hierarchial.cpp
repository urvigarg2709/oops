#include<iostream>
using namespace std;


class a{

    public:
    void func(){
        cout<<"inside function 1"<<endl;
    }
};

class b:public a{
  public:
    void func(){
        cout<<"inside function 2"<<endl;
    }
};

class c: public a{
    public:
    void func3(){
        cout<<"inside function 3"<<endl;
    }

};

int main(){ 
  /*a object1;
   object1.func1();
   
   b object2;
   object2.func1();
   object2.func2();

   c object3;
   object3.func1();
   object3.func3();*/ 

   
    return 0;
}