#include <iostream>
using namespace std;
class student{
    string name;
public:
    void setName(string n){  
    name=n;
    }
    void showName(){
        cout << "Student's Name : " << name;
    }
};
int main()
{ 
    student first_student;
    first_student.setName("aaqib");
    first_student.showName();
return 0;
}