
//include libraries 
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//define constants (includes tax amount, and ticket type cost)
const double TAX = 0.085;
const double firstClassCost = 750;
const double businessClassCost = 225;
const double economyClassCost = 150;

int main()
{
//defining variables (amount of tickets available)
int fCA = 15;
int bCA = 25;
int eCA = 50;
//character variables for user input
char s = ' ';
char yesOrNo = ' ';
int tickets = 0;
double pretotal = 0;

//round each output to 2 decimal places
cout << fixed << setprecision(2);
  
//create a menu driven program
//prompt user to enter ticket type
do
{
  if(fCA == 0 && bCA == 0 && eCA == 0)
  {
    exit(0);
  }
//display the possible selections
//these are dependent on whether there are tickets left
  if(fCA > 0)
  {
  cout << "(F)irst" << endl;
  }
  if(bCA > 0)
  {
  cout << "(B)usiness" << endl;
  }
  if(eCA > 0)
  {
  cout << "(E)conomy" << endl;
  }
  cout << "Enter a selection: ";
  cin >> s;
  cout << endl;

//check for valid input f, b, or e.
//make sure inputs of f, b, and e are not case sensitive
  while(s !='f' && s !='F' && s !='b' && s !='B' && s !='e' && s !='E')
  {
  cin.clear();
  cin.ignore(100, '\n');
  //if input is incorrect, reprompt question
  if(fCA > 0)
  {
  cout << "(F)irst" << endl;
  }
  if(bCA > 0)
  {
  cout << "(B)usiness" << endl;
  }
  if(eCA > 0)
  {
  cout << "(E)conomy" << endl;
  }
  cout << "Enter a selection: ";
  cin >> s;
  cout << endl;
  }

  //while loop to determine if there are tickets left
  //reprompt user if there are no more specific class type tickes
  while((fCA <= 0 && (s == 'f' || s == 'F')) || (bCA <= 0 && (s == 'b' || s == 'B')) || (eCA <= 0 && (s == 'e' || s == 'E')))
  {
  cin.clear();
  cin.ignore(100, '\n');
  //if input is incorrect, reprompt question
  if(fCA > 0)
  {
  cout << "(F)irst" << endl;
  }
  if(bCA > 0)
  {
  cout << "(B)usiness" << endl;
  }
  if(eCA > 0)
  {
  cout << "(E)conomy" << endl;
  }
  cout << "Enter a selection: ";
  cin >> s;
  cout << endl;
  //check for valid input again
  while(s !='f' && s !='F' && s !='b' && s !='B' && s !='e' && s !='E')
  {
  cin.clear();
  cin.ignore(100, '\n');
  //if input is incorrect, reprompt question
  if(fCA > 0)
  {
  cout << "(F)irst" << endl;
  }
  if(bCA > 0)
  {
  cout << "(B)usiness" << endl;
  }
  if(eCA > 0)
  {
  cout << "(E)conomy" << endl;
  }
  cout << "Enter a selection: ";
  cin >> s;
  cout << endl;
  }
  }
  
//case #1 first class tickets
  if(s == 'f' || s == 'F')
  {
  cout << "Enter amount: ";
  cin >> tickets;
  //validate input
  while(tickets > fCA || tickets < 0 || cin.fail())
    {
    cin.clear();
    cin.ignore(100, '\n');
    //if invalide inputs, repromt
    cout << "Enter amount: ";
    cin >> tickets;
    }
  cout << endl;
  //calculate total price of tickets
  fCA = fCA - tickets;
  pretotal = firstClassCost * tickets;
  pretotal = pretotal + TAX*pretotal;
  //display total cost to console
  cout << "Cost $ " << pretotal;
  cout << endl;
  }

//case #2 business class tickets
  else if(s == 'b' || s == 'B')
  {
  cout << "Enter amount: ";
  cin >> tickets;
  //validate input
  while(tickets > bCA || tickets < 0 || cin.fail())
    {
    cin.clear();
    cin.ignore(100, '\n');
    //if invalid inputs, reprompt
    cout << "Enter amount: ";
    cin >> tickets;
    } 
  cout << endl;
  //calculate total price of tickets
  bCA = bCA - tickets;
  pretotal = businessClassCost * tickets;
  pretotal = pretotal + TAX*pretotal;
  //display total cost to console
  cout << "Cost $ " << pretotal;
  cout << endl;
  }

//case #3 economy class tickets
  else if(s == 'e' || s == 'E')
  {
  cout << "Enter amount: ";
  cin >> tickets;
  //validate input
  while(tickets > eCA || tickets < 0 || cin.fail())
    {
    cin.clear();
    cin.ignore(100, '\n');
    //if user input is invalid, repromt
    cout << "Enter amount: ";
    cin >> tickets;
    } 
  cout << endl;
  //calculate total price of tickets
  eCA = eCA - tickets;
  pretotal = economyClassCost * tickets;
  pretotal = pretotal + TAX*pretotal;
  //print cost to console
  cout << "Cost $ " << pretotal;
  cout << endl;
  }

//Ask user if they want to end calculation of ticket prices
  cout << "Shutdown? (Y/N): ";
  cin >> yesOrNo;
//Make yesOrNo not case sensitive
//Validate wheter or not user has correct input
  while(yesOrNo!='N' && yesOrNo !='Y' && yesOrNo !='n' && yesOrNo !='y')
    {
    cin.clear();
    cin.ignore(100, '\n');
    //if the user doesn't have a good input, reprompt
    cout << "Shutdown? (Y/N): ";
    cin >> yesOrNo;
    }
  cout << endl;
  }
//end of do while loop. if user says 'Y' or 'y', program will end
while(yesOrNo != 'Y' && yesOrNo != 'y');
  return 0;
}
