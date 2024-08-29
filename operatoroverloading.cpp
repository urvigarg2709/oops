#include<iostream>
using namespace std;


class B{
 public:
 int a;
 int b;

 public:
 int add(){
    return a+b;
 }

 void operator+ (B &obj){
 /*   int value1= this-> a;
    int value2= obj.a;
    cout<<"output"<< value2-value1<<endl;
*/
cout<<"hello babbar"<<endl;
 }

 void operator() (){
    cout<<"mai bracket hoon"<<this->a<<endl;
     }
};

//run time polymorphism
class animal{
    public:
void speak(){
    cout<<"speaking"<<endl; 
}
};
class dog: public animal{
 public:
 void speak(){
    cout<<"barking"<<endl; 
}

};


int main(){

    dog obj;
    obj.speak();
    
// B obj1, obj2;
 //obj1.a=4;   
 //obj2.b=7;
 //obj1+obj2;
 //cout<<obj.add()<<endl;

    return 0;
}