/*
Program: Book.cpp, Class AuthorBook Class
*/

#include<iostream>
using namespace std;
#include "Book.h"


     Book::Book(string N_Book, int p,Author A)
     {
         Name= N_Book;
         author = A;
         price = p;

    }
     Book::Book(string N_Book, int p,Author A, int q)
     {
         Name= N_Book;
         author = A;
         price = p;
         setQuantity(q);

    }
     string Book:: getName()
     {
         return Name;
     }
     Author Book:: getauthor()
     {
         return author;

     }
      void Book:: setPrice (int p )
      {
          price = p;
      }
       int Book:: getPrice()
       {
           return price;
       }
       void Book:: setQuantity (int q )
      {
          quantity = q;
      }
       int  Book:: getQuantity()
       {
           return quantity;
       }
       string Book::tostring()
       {
          return Name + " by " + author.tostring();
       }









