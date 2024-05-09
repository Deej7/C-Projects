
#include <iostream>
using namespace std;

//Define constants for the program

const int BUNDLE_SIZE = 100;
const double MARKUP = 0.75;

int main(){

//Create variables for user input

int bundles = 0;
double price = 0;

//Ask salesperson about the quantity of bundles

cout << "How many door bundles are needed? ";
cin >> bundles;

//Ask salesperson about the cost of each bundle 
  
cout << "How much does each bundle cost? ";
cin >> price;
cout << endl;
  
//Formulas for each calculations
  
int totalDoors = BUNDLE_SIZE*bundles;
double totalCost = bundles*price;
double singleDoorCost = totalCost/totalDoors;
double singleDoorSalesPrice = singleDoorCost+MARKUP*singleDoorCost;
double totalDoorSalesPrice = totalCost+MARKUP*totalCost;
double singleDoorProfit = singleDoorSalesPrice-singleDoorCost;
double profit = totalDoorSalesPrice-totalCost;

//Outputs calculations to salesman

cout << "Bundle Quantity: " << bundles << endl;
cout << "Bundle Cost: " << price << endl;
cout << "Total Doors Purchased: " << totalDoors << endl;
cout << "Single Door Cost: " << singleDoorCost << endl;
cout << "Total Cost: " << totalCost << endl;
cout << "Single Door Sale Price: " << singleDoorSalesPrice << endl;
cout << "Total Sale Price: " << totalDoorSalesPrice << endl;
cout << "Single Door Profit: " << singleDoorProfit << endl;
cout << "Total Profit: " << profit << endl;
return 0;
}
