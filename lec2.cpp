#include<iostream>
using namespace std;

//encapsulation
class Student {
    private:
    string name;
    int age;
    int height;

     public:
     int getAge(){
        return this-> age;
     }
};
int main(){
     
     Student first;
     cout<<"sb sahi chl raha hai"<<endl;
     

    return 0;
}