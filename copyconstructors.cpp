#include<iostream>
#include<string>
using namespace std;

class Player{
    
   private:
string name;
int health;
int xp;

public:

string get_name(){return name;}
int get_health(){return health;}
int get_xp(){return xp;}

Player(string name_val="None",int health_val=0,int xp_val=0);

Player(const Player &source);


~Player(){cout<<"Destructor called for "<<name<<endl;}




 
    
};


Player::Player(string name_val,int health_val,int xp_val)

  :name{name_val},health{health_val},xp{xp_val} {
      
      cout<< "three args constructor called for " <<name<<endl;
      
  }


Player::Player(const Player &source)
   :name(source.name),health(source.health),xp(source.xp)   {
       
       
     cout<<" copy constructor made copy of  " <<source.name<<endl; 
       
   }
   
   
   void display_player(Player p){
       
       cout<<" Name "<<p.get_name()<<endl;
       cout<<" Health "<<p.get_health()<<endl;
       cout<<"xp"<<p.get_xp()<<endl;
       
       
       
   }

int main(){
    
    Player empty;
    display_player(empty);
    
    Player Navneet("Navneet");
    
    Player Noob("Noob",100);
    
    Player villian("villian",100,87);
    
    
    return(0);
    
    
    
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    