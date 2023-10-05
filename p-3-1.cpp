#include <iostream>
using namespace std;

struct Student
 {
    string name;
    int std;
    float percentage;
};

int main() {
       Student student;
       cout<<"sani zalavadiya"<<endl;
       cout<<"220130318007"<<endln;
     cout << "Enter name: ";
    getline(cin, student.name);

    cout << "Enter std: ";
    cin >> student.std;

    cout << "Enter percentage: ";
    cin >> student.percentage;

     cout << "\nStudent Information:\n";
    cout << "Name: " << student.name << endl;
    cout << "Standard: " << student.std << endl;
    cout << "Percentage: " << student.percentage << "%" << endl;

    return 0;
}
