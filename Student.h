//
// Created by Abdullokh on 13/03/2022.
//Student.h header file inherited with the Person

#ifndef MY_CODE_STUDENT_H //if not defined
#define MY_CODE_STUDENT_H //defined
#include "Person.h"//Person class declaration
//creating a derived class Student which is inherited with the class Person publicly
class Student : public  Person{
private:
    string student_id;//Student student_id data member
    float grade{0.0};//Student grade data member
public:
    //Student constructor inherited with the class Person
    Student(string fn, string ln, string id, int a, string student_id, float grade);

    void set_student_id( string student_id);//set student_id
    void set_grade( float grade);//set grade

    string get_student_id();//return student_id
    float get_grade();//return grade

    void display();//display function to display messages to screen
};

#endif //MY_CODE_STUDENT_H
