//Author: Pachia Vang  
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item;

do 
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin >> input; 

  if (( input == 'A' || input == 'a') && numItems < 5 ) 
  { cout<< "What is the item?\n";  
    cin >> item  ; 
    list[numItems] = item; 
    numItems++; 
  }

 else if ( numItems > 4 && ( input == 'a' || input == 'A' ) ) 
  {
  cout<< "What is the item?\nYou'll need a bigger list!\n";
  } 


  if ( input == 'q' || input == 'Q' )
  {
   input = 'q' ; 
  }

 }while ( input != 'Q' && input != 'q');
 
 int listNumber = 1 ;
 cout<< "==ITEMS TO BUY==\n";

 for ( numItems = 0 ; numItems < 5 ; numItems++ )
  {
   cout<<listNumber<< " " << list[numItems]<<endl; 
   listNumber++;
  } 

  return 0;
}
