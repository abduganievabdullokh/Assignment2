//
// Created by Abdullokh on 13/03/2022.
//Student.cpp

#include "Student.h"//
//calling Studendt constructor from Student.h header file and inheriting with Person constructor
Student::Student( string fn, string ln, string id, int a, string student_id, float grade)
:Person(fn, ln, id, a){
     this -> student_id = student_id;
     this -> grade = grade;
}
//set function for student_id
void Student::set_student_id(string student_id){
    student_id = student_id;
}
//get function for student_id
string Student::get_student_id(){
    return student_id;
}
void Student::set_grade(float grade){
    grade = grade;
}
float Student::get_grade(){
    return grade;
}
void Student::display(){
    Person::display();
    cout << "Student id: " << get_student_id() <<
    endl << "Grade: " << get_grade() << endl;

};




