#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void hex_string(char str[], int length)
{
  //hexadecimal characters
  char hex_characters[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  
  int i;
  for(i=0;i<length;i++)
  {
    str[i]=hex_characters[rand()%16];
  }
  str[length]=0;
}
char prog_ident = 'y';
char string_ident = 'y';
char line_numbers = 'n';

int main()
{
  int n,length;
  char hex[255];
    cout<<"Enter number of random hexadecimal strings you want."<<endl;
    cin>>n;
    cout<<"Enter length of the hexadecimal strings.(Up to 254)"<<endl;
    cin>>length;
    cout << "Do you want to include program generator identity? (y or n?)" << endl;
    cin>>prog_ident;
    cout << "Do you want to include the string line identifier? (y or n?)" << endl;
    cin>>string_ident;
    
    cout << "\n" << endl;
    srand(time(0));
    if  ( prog_ident == 'y' ){
    cout << "\n**** Output by randomhex255 ****\n" << endl;
}
    for(int i=0;i<n;i++)
    {
    	hex_string(hex,length);
        
         if (string_ident == 'n' && line_numbers == 'n' ){
            cout << hex << endl;
        };
        
        if ( string_ident == 'y' ){
            cout << "HString "  << i+1 << ": " << hex  << endl;
        } 
        
        
        
       
  }
  cout << "\n" << endl;
    return 0;
}
