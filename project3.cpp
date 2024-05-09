
//including libraries
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
//defining variables
int p1Score = 0;
int p2Score = 0;
int p1Cards = 0;
int p2Cards = 0;
int p1CardNumber = 0;
int p1Total = 0;
int p2CardNumber = 0;
int p2Total = 0;
int i = 0;
string yesOrNo = " ";

//Output the header and output the score of each player
cout << "*******************************************" << endl;
cout << "**  Welcome to CS135’s Blackjack game!   **" << endl;
cout << "*******************************************" << endl << endl;

cout << "Player 1 Score: " << p1Score << endl;
cout << "Player 2 Score: " << p2Score << endl << endl;

//prompt player 1 to deal 2 cards
/*
If the player only chooses 1 card, we must ask the player to ask
the player to choose another card
*/
cout << "Dealer: Player 1, how many cards would you like to choose?";
cin >> p1Cards;
cout << endl;

//loop for how many cards chosen to draw
for(i = 0; i < p1Cards; i = i + 1)
  { 
cout << "Please, choose a random card for Player 1:";
cin >> p1CardNumber;
cout << endl;
/*
if value 13, change the value of your variable to 10.
if value 14, change the value of your variable to 11.
*/
if (p1CardNumber == 13 || p1CardNumber == 12 || p1CardNumber == 11)
{ p1CardNumber = 10;
}
else if (p1CardNumber == 14)
{ p1CardNumber = 11;
}
//add total of cards
p1Total = p1Total + p1CardNumber;
  }
//if only 1 card, ask the player to choose another card
if (p1Cards == 1)
  {
cout << "Player 1, you need to choose another card." << endl;
cout << "Please, choose a random card for Player 1:";
cin >> p1CardNumber;
cout << endl;
/*
if value 13, change the value of your variable to 10.
if value 14, change the value of your variable to 11.
*/
if (p1CardNumber == 13 || p1CardNumber == 12 || p1CardNumber == 11)
{ p1CardNumber = 10;
}
else if (p1CardNumber == 14)
{ p1CardNumber = 11;
}
p1Total = p1Total + p1CardNumber;
  }
//ask player if they want another card
cout << "Dealer: Player 1, would you like to choose another card?";
cin >> yesOrNo;
if (yesOrNo == "Yes")
{
cout << endl;
cout << "Please, choose a random card for Player 1:";
cin >> p1CardNumber;
cout << endl;
/*
if value 13, change the value of your variable to 10.
if value 14, change the value of your variable to 11.
*/
if (p1CardNumber == 13 || p1CardNumber == 12 || p1CardNumber == 11)
{ p1CardNumber = 10;
}
else if (p1CardNumber == 14)
{ p1CardNumber = 11;
}
p1Total = p1Total + p1CardNumber;
}
else if (yesOrNo == "No")
{
cout << endl;
}

//player 2's turn
cout << "Dealer: Player 2, how many cards would you like to choose?";
cin >> p2Cards;
cout << endl;

//loop for how many cards chosen to draw
for(i = 0; i < p2Cards; i = i + 1)
  { 
cout << "Please, choose a random card for Player 2:";
cin >> p2CardNumber;
cout << endl;
/*
if value 13, change the value of your variable to 10.
if value 14, change the value of your variable to 11.
*/
if (p2CardNumber == 13 || p2CardNumber == 12 || p2CardNumber == 11)
{ p2CardNumber = 10;
}
else if (p2CardNumber == 14)
{ p2CardNumber = 11;
}
//add total of cards
p2Total = p2Total + p2CardNumber;
  }
//if only 1 card, ask the player to choose another card
if (p2Cards == 1)
  {
cout << "Player 2, you need to choose another card." << endl;
cout << "Please, choose a random card for Player 2:";
cin >> p2CardNumber;
cout << endl;
/*
if value 13, change the value of your variable to 10.
if value 14, change the value of your variable to 11.
*/
if (p2CardNumber == 13 || p2CardNumber == 12 || p2CardNumber == 11)
{ p2CardNumber = 10;
}
else if (p2CardNumber == 14)
{ p2CardNumber = 11;
}
p2Total = p2Total + p2CardNumber;
  }
//ask player if they want to choose another card
cout << "Dealer: Player 2, would you like to choose another card?";
cin >> yesOrNo;
if (yesOrNo == "Yes")
{
cout << endl;
cout << "Please, choose a random card for Player 2:";
cin >> p2CardNumber;
cout << endl;
/*
if value 13, change the value of your variable to 10.
if value 14, change the value of your variable to 11.
*/
if (p2CardNumber == 13 || p2CardNumber == 12 || p2CardNumber == 11)
{ p2CardNumber = 10;
}
else if (p2CardNumber == 14)
{ p2CardNumber = 11;
}
p2Total = p2Total + p2CardNumber;
cout << endl;
}
else if (yesOrNo == "No")
{
cout << endl << endl;
}

//display player scores
cout << "Player 1 Score: " << p1Total << endl;
cout << "Player 2 Score: " << p2Total << endl;
cout << endl;

//compare scores
//if both players surpass 21
if (p1Total > 21 && p2Total > 21)
{
cout << "Sorry, no one wins, both players busted.";
}
//if only one player surpasses 21
else if (p1Total > 21)
{
cout << "Player 2 wins because player 1 busted.";
}
else if (p2Total > 21)
{
cout << "Player 1 wins because player 2 busted.";
}
//if both are under 21, find player with greatest value
else if (p1Total > p2Total)
{
cout << "Player 1 wins with a higher score than player 2.";
}
else if (p1Total < p2Total)
{
cout << "Player 2 wins with a higher score than player 1.";
}
//if players tie
else if (p1Total == p2Total)
{
cout << "Both player 1 and player 2 tie.";
}
//program terminated display
cout << endl << "** Program Terminated **" << endl;
  return 0;
}
