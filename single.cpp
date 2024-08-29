#include<iostream>
using namespace std;


class animal{
    public:
    int age;
    int weight;

    public:
    void speak(){

        cout<<"speaking"<<endl;

    }
};

class dog:public animal{


};

class sitzuu:public dog{

};

int main(){

   // dog d;
    //d.speak();
    //cout<<d.age<<endl;

    sitzuu s;
    s.speak();


    return 0;
}