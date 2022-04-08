#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "Program.h"
using namespace std;
using std::vector;
enum Direction { North = 0, South = 1, East = 2, West = 3 };

struct Room {

	
	Room();
	Room( string name, string description);
	void SetExit(Room* ptrNorth, Room* ptrSouth, Room* ptrWest, Room* ptrEast);
	void Setup(string name = "", string description = "");
	void Neighbour();
	bool canGo(Direction direction);
	void OutputRoomInfo();



	string name;
	string description;
	Room* ptrup;
	Room* ptrdown;
	Room* ptrleft;
	Room* ptrright;

};
Room::Room()
{
	Setup();
}


Room::Room( string name, string description )
{
	Setup( name, description);
}

void Room::Setup(string name, string description) {
	this->name = name;
	this->description = description;

	ptrup = nullptr;
	ptrdown = nullptr;
	ptrleft = nullptr;
	ptrright = nullptr;
}

void Room::SetExit(Room* ptrNorth, Room* ptrSouth, Room* ptrWest, Room* ptrEast) {
	ptrup = ptrNorth;
	ptrdown = ptrSouth;
	ptrleft = ptrWest;
	ptrright = ptrEast;

}

void Room::OutputRoomInfo() {
	cout << name << endl
	<< endl << description << endl;
	Neighbour();
	cout << endl;
}
void Room::Neighbour() 
{
	cout << "You can go: ";
	if (ptrup != nullptr) { cout << "north"; }
	if (ptrdown != nullptr) { cout << "south"; }
	if (ptrright != nullptr) { cout << "east"; }
	if (ptrleft != nullptr) { cout << "west"; }

	cout << endl;
}

bool Room::canGo (Direction direction) {
	if ( direction == North && ptrup != nullptr)
	{
		return true;
	}
		else if ( direction == South && ptrdown != nullptr)
	{
		return true;
	}
		else if ( direction == East && ptrright != nullptr)
	{
		return true;
	}
		else if ( direction == West && ptrleft != nullptr)
	{
		return true;
	}
	return false;
};
#endif