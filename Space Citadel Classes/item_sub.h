#pragma once
#include "Items.h"
#include <iostream>
#include <string>

/*
	Tada here is where we have the variants of potions, weapons, and armor
*/

//its a bottle of red stuff. totally drink that
class RedPotion : public Potion
{
	int HP = 20;
	string effect = "Restore";
};

//bottle o' green stuff. probably dont drink
class GreenPotion : public Potion
{
	int HP = 10;
	string effect = "Poison";
};

//normal sword
class Sword : public Weapon
{
	int dmg = 7;
	int cost = 10;
	int sell = 5;
};

class Stick : public Weapon {
	int dmg = 3;
	int cost = 1;
	int sell = 1;
};

//variant of sword
class Cutlass : public Sword {
	int dmg = 20;
	int cost = 15;
	int sell = 8;
};

//another variant of sword
class Scimitar : public Sword {
	int dmg = 25;
	int cost = 20;
	int sell = 10;
};

//rock out with ya glock out
class Glock : public Weapon {
	int dmg = 10;
	int cost = 10;
	int sell = 5;
};

//for those older people
class HasselSawedOff : public Weapon {
	int dmg = 30;
	int cost = 20;
	int sell = 10;
};

//its a spear! and an Axe! and a hammer!
class Halberd : public Weapon {
	int dmg = 20;
	int cost = 15;
	int sell = 8;
};

//its... a bucket.
class Bucket : public Weapon {
	int armor = 2;
	int cost = 5;
	int sell = 3;
};