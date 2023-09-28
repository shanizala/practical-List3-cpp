#include<iostream>
using namespace std;

class Shape {
public:
    double height;
    double base;

    void display_shape();
};

void Shape::display_shape() {
    cout<<"shani zalavadiya"<<endl;
    cout<<"220130318007"<<endl;
    cout << "Height: " << height <<endl<<"Base: " << base << endl;
}

int main() {
    Shape myShape;
    cout<<" Enter your height ::";
    cin>>myShape.height;
    cout<<"Enter your base ::";
    cin>>myShape.base;
    

    myShape.display_shape();

    return 0;
}
