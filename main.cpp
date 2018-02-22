//Author: Pachia Vang  
#include<iostream>
#include<string>
using namespace std;

const int LIST_SIZE = 5;
 
int main()
{
  string groceryList[LIST_SIZE]; //array of 5 strings
  int numItems = 0;
  char input;

do 
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
} while ( input != 'Q' && input != 'q');
  return 0;
}
