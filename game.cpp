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
	this->hp += rand()%20;
}

int main () {
	Warrior warr;
	Priest pri;
	
	int round = 0;
	/*
	char check='k';
	
		cout<<"Are you ready to start the deathmatch? If so, press 'y'."<<endl;
		cin>>check;
	*/

	while (pri.hp >0 && warr.hp>0){
		pri.hp -= warr.dealDmg();
		if (rand()%100+1 > pri.hp)
			pri.heal();
		else
			warr.hp -= pri.dealDmg();

	round++;
	cout<<"warr hp: "<<warr.hp<<endl;
	cout<<"pri hp: "<<pri.hp<<endl;
	}
	cout<<endl<<"The fight lasted for "<<round<<"rounds!"<<endl;
	if (pri.hp <1 && warr.hp <1)
		cout<<"Draw!";
	else if (pri.hp <1)
		cout<<"The warrior won!";
	else
		cout<<"The priest won!";
	
	return 0;
}