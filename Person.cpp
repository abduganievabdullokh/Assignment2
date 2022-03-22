//
// Created by Abdullokh on 12/03/2022.
//Person.cpp file IMPLEMENTATION
#include "Person.h"//include definition of class Person from Person.h
//constructor
Person::Person(const string& fn, const string& ln, const string& id, const int& a) {
    this->first_name = fn;//using this-> pointer to access data member first_name
    this->last_name = ln;//using this-> pointer to access data member
    this->passport_id = id;//using this-> pointer to access data member passport_id
    this->age = a;//using this-> pointer to access data member age
}
void Person::set_first_name(const string& fn) {
     first_name = fn;
}//set first_name function
string Person::get_first_name() const{
    return first_name;
}//return first_name function
void Person::set_last_name(const string& ln) {
    last_name = ln;
}//set last_name
string Person::get_last_name() const{
    return last_name;
}//return last_name
void Person::set_passport_id(const string& id) {
    passport_id = id;
}//set passport_id
string Person::get_passport_id() const{
    return passport_id;
}//return passport_id
void Person::set_age(const int& a) {
    age = a;
}//set age function
int Person::get_age() const{
    return age;
}//return age function

//display function
void Person::display() const {
    cout << "First name: " << get_first_name() << endl <<
    "Last Name: " << get_last_name() << endl <<
    "Passport id: " << get_passport_id() <<  endl <<
    "Age: " << get_age() << endl;
}