// Heap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

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


class Item {
public:
	Item(std::string intem_name) : m_item_name(intem_name)
	{
		std::cout << "Item " << m_item_name << " was created\n";
	}
	~Item()
	{
		std::cout << "Item " << m_item_name << " was destroyed\n";
	}

	std::string getItemName()
	{
		return m_item_name;
	}
private:
	std::string m_item_name;
};

class Player {
public:
	Player(std::string player_name) : m_player_name(player_name)
	{
		std::cout << "Player " << m_player_name << " has joined\n";
	}
	void add_item(Item* item)
	{
		std::cout << "Do you want to store this item? " << item->getItemName() << std::endl;
		std::cout << "YES or NO\n";
		std::string raspuns;
		std::cin >> raspuns;
		if (raspuns == "YES")
		{
			m_invetory.push_back(item);
		}
	}

private:
	std::string m_player_name;
	std::vector<Item*> m_invetory;
};

Item* generateItem()
{
	std::string item_name;
	std::cout << "What should the item name be? \n";
	std::cin >> item_name;
	Item* item = new Item(item_name);
	return item;

}


int main()
{
	//Enemy  inamic = createEnemy();
	//pointer * nume_ptr = new Obj()
	int* numar = new int();
	//Enemy e = Enemy(); e  este pe stiva -> destructor chemat automat la sfarsitul lui main
	Enemy* inamic = new Enemy(); // inamicul a fost creat pe heap si nu este  distrus
	delete inamic; // delete va chema destructorul inamicului
	Enemy* inamic_2 = nullptr;
    inamic_2 = new Enemy();
	inamic_2->m_name = "DarthVader";


	std::cout << "Te lupti cu DarthVader , ce power level ai? " << std::endl;
	int power_level;
	std::cin >> power_level;


	if (power_level > 10)
	{
		std::cout<< "Ai castigat , il chilarim pe DarthVader\n";
		delete inamic_2;
		inamic_2 = nullptr;
	}


	//daca inamicul inca este in viata il stergem
	if (inamic_2 != nullptr)
		delete inamic_2;

}