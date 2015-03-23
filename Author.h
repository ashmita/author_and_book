/*
Program : Author.h, From class AuthorBook Class
*/

#include<iostream>
using namespace std;

class Author{
private:
    string author;
    char gender;
    string email;
public:
    Author (string n,char g, string email  );
    Author();
    string getauthor();

    char getGender();

    void setEmail(string e);

    string tostring();


};


