#include <iostream>

using namespace std;

class Player
{
public:
	Player();
	~Player();
	int strength;
	int dexterity;
	int wisdom;
	int health;
	int armor;
	int magicResist;
	string name;

	void modifyStrength(int s);
	void modifyDexterity(int d);
	void modifyWisdom(int w);
	void modifyHealth(int h);
	void modifyArmor(int a);
	void modifyMagicResist(int m);
};

void Player::modifyStrength(int s)
{
	strength += s;
}

void Player::modifyDexterity(int d)
{
	dexterity += d;
}

void Player::modifyWisdom(int w)
{
	wisdom += w;
}

void Player::modifyHealth(int h)
{
	health += h;
}

void Player::modifyArmor(int a)
{
	armor += a;
}

void Player::modifyMagicResist(int m)
{
	magicResist += m;
}

Player::Player()
{
}

Player::~Player()
{
}

class Mage :public Player
{
public:
	Mage()
	{
		strength = 2;
		dexterity = 2;
		wisdom = 4;
		health = 100;
		armor = 10;
		magicResist = 75;
	}

	void setDefaultStats();
	void setSatchelSize();

};

void Mage::setDefaultStats()
{
	strength = 2;
	dexterity = 2;
	wisdom = 4;
	health = 100;
	armor = 10;
	magicResist = 75;
}

class Warrior :public Player
{
public:
	Warrior()
	{
		strength = 4;
		dexterity = 2;
		wisdom = 2;
		health = 100;
		armor = 30;
		magicResist = 25;
	}

	void setDefaultStats();
	void setSatchelSize();

};

void Warrior::setDefaultStats()
{
	strength = 4;
	dexterity = 2;
	wisdom = 2;
	health = 100;
	armor = 30;
	magicResist = 25;
}

class Ranger :public Player
{
public:
	Ranger()
	{
		strength = 4;
		dexterity = 2;
		wisdom = 2;
		health = 100;
		armor = 30;
		magicResist = 25;
	}

	void setDefaultStats();
	void setSatchelSize();

};

void Ranger::setDefaultStats()
{
	strength = 2;
	dexterity = 4;
	wisdom = 2;
	health = 100;
	armor = 20;
	magicResist = 50;
}

class Room
{
  public:
    string dialogue;
    int probOfEvent1; // if they make the choice to attempt the Room event
                      // this would be a number 1 - 10 that if they roll less than they get event 1 otherwise get event 2

    string event1; //
    string event2; //

    item reward; // if the succseed in event 1

    void printDialog();


    Node(std::string a, int b, std::string c, std::string d, item e, ): dialogue(a), probOfEvent1(b), event1(c), event2(d), reward(e){};
};

int main()
{

}
