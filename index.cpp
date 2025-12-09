#include <iostream> 
#include <string> 
using namespace std; 
struct student {
string name; 
int age;
float grade;
};
int main() { 
int n;
cout << "Enter number of students: "; 
cin >> n;
student* students = new student[n];
// Input details for each student 
for (int i= 0; i< n;i++) {
cout<<"Student number: "<< i + 1 <<endl; 
cout << "Name: ";
cin>>students[i].name;
cout << "Age: ";
cin >>students[i].age; 
cout << "Grade: ";
cin >> students[i].grade;
}
// Display student details
cout << "\n----- Students Details ---- \n";
for (int i = 0; i < n; i++) {
cout << "Name: " << students[i].name<< " Age: " << students[i].age<< " Grade:" <<
students[i].grade << endl;
}
// Deallocate memory 
delete[] students; 
return 0;
}
