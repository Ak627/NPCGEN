#include <cstdlib>
#include <iostream>
using namespace std;

void NPC(int ctype);
int health = 100;

int main() {
  char input;
  int room = 1;
  int num;
  do {
    cout << "Health: " << health << endl;
    num = rand() % 3 + 1;
    switch (room){
      case 1:
      cout << "You are in room 1, you feel a strange presence." << endl;
      NPC(num);
      cout << "After your encounter you have one path (n)orth." << endl;
      cin >> input;
      if (input == 'n')
        room = 2;
      else 
       cout << "Nothing happens." << endl;
      break;
      case 2:
      cout << "You have entered room 2, there is another strange presence you feel." << endl;
      NPC(num);
      cout << "After this encounter you see an open door (w)est and your path back (s)outh." << endl;
      cin >> input;
      if (input == 'w')
        room = 3;
      else if (input == 's')
        room = 1;
      else
        cout << "Nothing happens."  << endl;
      break;
      case 3:
      cout << "You are now in room 3, You feel as if someone is watching you." << endl;
      NPC(num);
      cout << "After that encounter you see you can only go back (e)ast." << endl;
      cin >> input;
      if (input == 'e')
        room = 2;
      else
       cout << "Nothing happens." << endl;
      break;
    }
  }while (input != 'q');
}

void NPC(int ctype){
  switch(ctype){
    case 1:
    cout << "A very small dwarf like man walks out from behind a little hiding spot to say hi, he is very polite." << endl << endl;
    break;
    case 2:
    cout << "A fairy flies towards you and wants to give you some health." << endl << endl;
    health += 10;
    break;
    case 3:
    cout << "A really annoying man keeps following you around, you decide to hit him, he hits you back." << endl << endl;
    health -= 10;
    break;
  }
}
