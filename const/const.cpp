#include<iostream>
#include"position.h"

using namespace std;

int main()
{


	Position dog(10,50);
	dog.getPosition();
	dog.setPosition(50,100);
	dog.getPosition();

	Position house(100,200);

	house.getPosition();
	house.setPosition(444,100);
	house.getPosition();
	return 0;
}
