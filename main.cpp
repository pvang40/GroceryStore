//Author: Pachia Vang  
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;

do 
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin >> input; 

  if ( numItems > 4 ) 
  {
  cout<< "What is the item?\nYou'll need a bigger list!";
  input = 'q'; 
  cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
      cout<<"\n (A)dd an item";
        cout<<"\n (Q)uit";
          cout<<"\nYour choice (A/Q): What is the item?\nYou'll need a bigger list!";
          
 }

 else  if ( input == 'A' || input == 'a'&& numItems < 5 ) 
{

   cout<< "What is the item?\n";
   cin>> list[numItems];
   numItems++; 
   } 

}while ( input != 'Q' && input != 'q');
  return 0;
}
