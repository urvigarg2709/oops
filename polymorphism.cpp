#include<iostream>
using namespace std;




class a{

    public: 
    void sayhello(){
        cout<<"helloo love babbar"<<endl;

    } 
    void sayhello(string name){

        cout<<"hello"<<name<<endl;
    }
};
int main(){

    a obj;
    obj.sayhello(); 
    return 0;
}