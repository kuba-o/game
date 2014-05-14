#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Warrior {
public:
	int hp;
	Warrior(){
		hp = 150;
	}
	int dealDmg();
};

class Priest {
  public:
	int hp;
	Priest(){
		hp = 100;
	}
	int dealDmg();
	void heal();
};

int Warrior::dealDmg(){
	return rand()%15+1;	
}

int Priest::dealDmg(){
	return rand()%10+1;
}

void Priest::heal(){
	this->hp += rand()%15;
}

int main () {
	Warrior warr;
	Priest pri;
	
	/*
	cout<<"pri.hp: "<<pri.hp<<endl;
	pri.hp = pri.hp - warr.dealDmg();
	cout<<"pri.hp: "<<pri.hp<<endl;
	cout<<"warr.hp:"<<warr.hp<<endl;
	warr.hp = warr.hp - pri.dealDmg();
	cout<<"warr.hp"<<warr.hp<<endl;
	

	cout<<"pri.hp: "<<pri.hp;
	pri.heal();
	cout<<"pri.hp: "<<pri.hp;
	*/
	return 0;
}