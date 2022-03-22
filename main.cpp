//main.cpp main function
#include "Person.h"
#include "Student.h"

int main(){
    cout << "PERSON: " << "\n";
    //instantiate Person(base-class) object
    Person person1("John", "Hook", "1243", 12);
    //outputting objects
    person1.display();
    cout << "\n\n";
    cout << "STUDENT: " << "\n";
    //instantiate Student(derived-class) object
    Student student1("Abduganiev", "Abdullokh", "ac22", 19, "21SE020", 123.45);
    //outputting objects
    student1.display();
}


//end