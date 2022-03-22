//
// Created by Abdullokh on 13/03/2022.
//Person.h header file INTERFACE
#ifndef MY_CODE_PERSON_H //if not defined
#define MY_CODE_PERSON_H //define

#include <iostream>//input_output library
#include <string>//C++ standard string class
using namespace std;
//creating a Base class Person
//Person class definition
class Person{
private:
    string first_name;//Person first_name data member
    string last_name;//Person last_name data member
    string passport_id;//Person passport_id
    int age{0};//Person age data member
public:
    //Person constructor initializes each data members
    Person(const string& fn, const string& ln, const string& id, const int& a);

    void set_first_name(const string& fn);//function to set the first_name
    void set_last_name(const string& ln);//function to set the last_name
    void set_passport_id(const string& id);//function to set the passport_id
    void set_age(const int& a);//function to set the age

    string get_first_name()const;//return first_name
    string get_last_name()const;//return last_name
    string get_passport_id()const;//return passport_id
    int get_age()const;//return age
    //creating display function
    void display() const;
};
//end class Person

#endif //MY_CODE_PERSON_H
