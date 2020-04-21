#include <iostream>
using namespace std;
int main()
{
cout << "Enter your name: ";
string username;
cin >> username;
cin.ignore();
cout << "Welcome " << username << " to ESCAPE THE DUNGEON"; //user put in name
cin.get();
int bow;
    
cout << "You are trapped in a dungeon with many hungry monsters!" << endl << " You see a sword and a bow. Choose your fate.";
cout << "1 is bow" << " 2 is sword"; //user picks which weapon to use
cin >> bow; //user input
    
switch (bow)
{
case 1: //user dies from picking the bow
cout << "You go to shoot one of the monsters but you find out there are no arrows to shoot with! "<< endl << " You are dead!";
cin.get();
cout << " ";
cin.get();
break;
case 2: //user picked sword
cout << "So you decide to grab the sword and fight off the hungry monsters";
cout << " ";
cin.get();
cout << " The monsters are now dead, but you realized you are still trapped in the dungeon but the only way out is through the door!";
cout << "The first thing you see is a cabinet. You decide to look in it. ";
cin.get();
cout << "You only find one thing in the cabinet. Its a key! But what can it be used for?";
cin.get();
int chestKey;
cout << "you see something under the bed.. its a chest! But there is a giant boss coming after you! It heard you and is very hungry!" << endl;
cout << "do you try to unlock the chest, or fight off the boss? ";
cout << "pick 1 to unlock" << endl << " pick 2 to fight the boss!"; //user enters 1 to unlock the chest or 2 to fight off the boss
cin >> chestKey; //user input
cin.get();

switch (chestKey){
case 1: //user picked unlock the chest
cout << "the boss comes after you and eats you up! You died!";
cout << " ";
cin.get();
break;
case 2: //user picked to fight off the boss
cout << "You fight off the boss.";
cin.get();
cout << "You are left with this key and you unlock the chest." << endl;
cout << "In the chest you find... a crowbar!This crowbar is useful, but for what?";
int crowbar;
cout << "Should you try breaking open the door? Or look under the rug for more items?" << endl << " 1 break the door" << endl << " 2 look under the rug";
cin >> crowbar; //user input
cin.get();

switch (crowbar){
case 1:
cout << "So you try to break open the door with the key but a guard hears you from the distance. He sees that you have been trying to escape and sentences you to death!" << endl;
cin.get();
cout << "You are then sentenced to death and die.";
cin.get();
cout << " ";
break;
case 2:
cout << "You look under the rug. There is loose wood. You take the crowbar and lift up the wood.";
cout << "You find a giant key. It must go to the exit door!";
cout << "You unlock the door and exit the dungeon." << endl;
cin.get();
cout << "The guards have found you! Should you fight them or run off into the woods?";
cout << "1 fight the guards" << endl << "2 run off into the woods"; //user has to pick how they will escape
int escape;
cin >> escape; //user input
cin.get();

switch (escape){
case 1: //user picked fight off the guards and dies
cout << "You try fighting off the guards, but you are outnumbered!" << endl;
cin.get();
cout << "You are unarmed and the guards kill you. You are dead." << endl;
cin.get();
case 2: //user picked run into the woods and wins
cout << "You run off into the woods as fast as you can." << endl;
cin.get();
cout << " The guards are still chasing you but then they lose sight of you. They give up." << endl << " YOU ESCAPED THE EVIL DUNGEON!";
cin.get();
}
}
}
}
}

