//Author: Pachia Vang  
#include<iostream>
#include<string>
#include<vector>

using namespace std;
 
int main()
{
  vector <string> list; 
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
 
 
  if ( input == 'A' || input == 'a' ) 
  { cout<< "What is the item?\n";  
    cin >> item  ; 
    list.push_back(item);
   
  } 


 }while ( input != 'Q' && input != 'q');
 
 if (list.size() == 0) 
 {
    cout<<"No Items to buy!\n"; 
 }

 
 else if ( list.size() > 0 )
 { int listNumber = 1; 
 
 cout<< "==ITEMS TO BUY==\n";

 list.size(); 
 for ( numItems = 0 ; numItems < list.size() ; numItems++ )
  {
   cout<<listNumber<< " " << list[numItems]<<endl; 
   listNumber++;
  } 
}
  return 0;
}
