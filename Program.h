#ifndef PROGRAM_H_
#define PROGRAM_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Room.h"

class Program
{
    public:
    
    Program();
    void Run();

    private:
    // method to setup the rooms
    void SetupRooms();
    // check the current room the player is in
    Room CurrentRoom;
    // bool to check true or false if the game is still active
    bool m_done;
    // sets exits for rooms
    void SetExits();
};

Program::Program()
{
    CurrentRoom;
    SetupRooms();
    // set the game to not being done
    m_done = false;
}

void Program::Run()
{
    string userInput;
    string status = "";
// loop to keep the game active
    while (!m_done )
    {
        // if you can go in a certain direction, it tells you and changes current room
        if( CurrentRoom.canGo( North ) )
        {
            status = "You went North";
            CurrentRoom = CurrentRoom.SetExit(nullptr, nullptr, nullptr, nullptr);
        }
        else {
            status = "You can't go North here!";
        }

                if( CurrentRoom.canGo( South ) )
        {
            status = "You went South";
            CurrentRoom = Room.SetExit(nullptr, nullptr, nullptr, nullptr);;
        }
        else {
            status = "You can't go South here!";
        }
                if( CurrentRoom.canGo( East ) )
        {
            status = "You went East";
            CurrentRoom = CurrentRoom.SetExit(nullptr, nullptr, nullptr, nullptr);;
        }
        else {
            status = "You can't go East here!";
        }

                if( CurrentRoom.canGo( West ) )
        {
            status = "You went West";
            CurrentRoom = CurrentRoom.SetExit(nullptr, nullptr, nullptr, nullptr);;
        }
        else {
            status = "You can't go West here!";
        }
        
    }


}



void Program::SetupRooms() {

    //code to setup the rooms uniquely

    Room StartingRoom = Room("Computer Science Building", "Nerds reside here");
    Room SecondRoom = Room("Foundation Building", "Many great people have enetered here, oh and you");
    Room ThirdRoom = Room("Library", "Almost like an alternate reality, time doesn't seem to move here!");
    Room FourthRoom = Room("Courtyard", "Where people come to socialise and spend all their money");
    Room FifthRoom = Room("Stables", "Great place to meet new people and get drunk! beware of horses!");
    Room SixthRoom = Room("Living Bridge" "A portal between worlds");

     

     CurrentRoom = StartingRoom;

  

   

}

#endif