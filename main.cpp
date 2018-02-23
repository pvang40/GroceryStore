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
  cin>>input;
  if ( input == 'A' || input == 'a'&& numItems < 5 ) 
{
   cout<< "What is the item?\n";
   cin>> list[numItems];
   numItems++; 
   }
else if ( input == 'A' || input == 'a' && numItems > 4 )

{
cout<< "What is the item?\nYou'll need a bigger list!\n\n\n\n\n\n "; 
 
} 

}while ( input != 'Q' && input != 'q');
  return 0;
}
