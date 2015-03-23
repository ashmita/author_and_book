/*
Program : Book.h, From class AuthorBook Class
*/

#include<iostream>
#include "Author.h"
using namespace std;

class Book{
private:
     string Name ;
     int quantity;
     Author author;
     int price;
public:
      Book (string NB, int p,Author A);

     Book (string NB, int p,Author A, int q);

     string getName();

     Author getauthor();

      void setPrice (int price );

       int getPrice();

       void setQuantity (int Quantty );

       int getQuantity();

       string tostring();

};









