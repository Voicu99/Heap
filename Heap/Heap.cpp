// Heap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Enemy
{
public:
	Enemy()
	{
		std::cout << "A enemy was created\n";
	}
	~Enemy()
	{
		std::cout << "A enemy was destroyed\n";
	}
	std::string m_name;
};

Enemy createEnemy()
{
	Enemy e;
	return e;
}

int main()
{
	//Enemy  inamic = createEnemy();
	//pointer * nume_ptr = new Obj()
	int* numar = new int();
	//Enemy e = Enemy(); e  este pe stiva -> destructor chemat automat la sfarsitul lui main
	Enemy* inamic = new Enemy(); // inamicul a fost creat pe heap si nu este  distrus
	//delete inamic; // delete va chema destructorul inamicului

	Enemy* inamic_2 = new Enemy();
	inamic_2->m_name = "DarthVader";


	std::cout << "Te lupti cu DarthVader , ce power level ai? " << std::endl;
	int power_level;
	std::cin >> power_level;


	if (power_level > 10)
	{
		std::cout<< "Ai castigat , il chilarim pe DarthVader\n";
		delete inamic_2;
	}

}