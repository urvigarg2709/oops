#include<iostream>
using namespace std;

class Hero{
//properties

    private:
    int health; 
    //private
    public:
    char*name;
    char level;
   static int timeToComplete;

    Hero(){

        cout<<"constructor called"<<endl;
        name=new char[100];
    }
 
// PARAMETERISED CONSTRUCTOR
Hero(int health){
    cout<<"this ->"<<this<<endl;
   this-> health= health;
}
Hero(int health, char level){
    cout<<"this ->"<<this<<endl;
    this->level=level; 
   this-> health= health;
}
 
 //copy constructor
     
     Hero(Hero&  temp){cout<<"copy constructor called"<<endl;
          this->health=temp.health;
          this->level=temp.level;
     }

    void print(){

        cout<<endl;
        cout<<"name:"<<this-> name<<",";
        cout<<"health"<<this->health<<",";
        cout<<"level"<<this-> level<< endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }
    int getlevel(){
        return level;
    }

    void setHealth(int h){
        health =h;
    }

    void setlevel(char ch){
        level =ch;
    }

   // void setname(char name[]){
       // strcpy(this->name,name);
    //}
 
};

int Hero:: timeToComplete=5;
int main(){ 
    

cout<<Hero:: timeToComplete<<endl;


    Hero a;
      

   /**/
    //Hero suresh(70,'C');
    //suresh.print();
     

    //copy constructor
   // Hero ritesh(suresh);
    //ritesh.print();
  // obj created statically
   //cout<<"Hiii"<< endl;
    //Hero ramesh(10); 
    //cout<<"address of  ramesh"<< &ramesh<< endl;
    //cout<<"hello"<< endl; 
    //ramesh.print();
    //dynamically
   /**/
/*
    //static allocation 
    Hero a;

    a.setHealth(80);
    a.setlevel('A');
    cout<<"level is"<<a.level<<endl;
    cout<<"health is"<<a.getHealth() << endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setlevel('A');
    b->setHealth(70);
    cout<<"level is"<<(*b).level<<endl;
    cout<<"health is"<<(*b).getHealth() << endl;

 
    // create obj 
    //Hero ramesh;
   
    //cout<<"ramesh health is"<< ramesh.getHealth()<<endl;
    //use setter

    //ramesh.setHealth(70);
   // ramesh.level='A'; //values di hai
     
   //cout<<"size:"<< sizeof(h1)<<endl;
   //cout<<"health is:"<<ramesh.getHealth()<<endl;
   //cout<<"level is:"<<ramesh.level<<endl;

*/

    return 0;
}