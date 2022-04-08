#include <iostream>
#include<stdlib.h>
#include <fstream>
#include<vector>
using namespace std;

class Wordle
{
    string line;
    void SharedLetters();
    vector<string> lines;
    ifstream fin("Worlde.txt"); 

       int total_lines=0;
    while(getline(file,line))
    {
       total_lines++; 
    lines.push_back(line);  

  int random_number=rand()%total_lines;

  void SharedLetters()
  {
      cout << "type a five letter word" >> endl;
      cin >> *p2;
      int count[256] = {0};

      while (*lines[random_number])
      count[*lines[random_number]++]++;

      while(*p2)
      {
          if(count[*p2] > 0)
          {
              printf("%c", *p2);
          }
          p2++;
      }

  }

  }
};