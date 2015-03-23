/*
Program :Main.cpp, using AuthorBook Class
Name : Ashmita Kunwar
Date : 3/23/2017

*/
#include <iostream>

using namespace std;

#include "Book.h"


int main()
{
   char gender;
   string NameOfBook, NameOfAuthor,email;
   int price , quantity;
   cout<<"Name of Author: ";
   getline(cin, NameOfAuthor);
   cout<<endl;
   cout<<"Name of Book: ";
   getline(cin,NameOfBook);
   cout<<endl;
   cout<<"Email of the author: ";
   getline(cin,email);
   cout<<endl;
   cout<<"Gender of Author: ";
   cin>>gender;
    cout<<endl;
   cout<<"Price of book: ";
   cin>>price;
   cout<<endl;
   cout<<"Quantity Of book: ";
   cin>>quantity;
   cout<<endl;
   Author a1(NameOfAuthor, gender,email);
   Book b1(NameOfBook, price, a1);
   cout << b1.tostring();
   cout<<endl;
   cout<<endl;

}
