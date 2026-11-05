#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string registrationNumber;
    string model;
    float price;

public:
    void inputDetails()
    {
        cout << "Enter Registration Number: ";
        getline(cin, registrationNumber);

        cout << "Enter Model: ";
        getline(cin, model);

        cout << "Enter Price: ";
        cin >> price;
        cin.ignore(); // To ignore the newline character left in the buffer
    }

    void displayDetails()
    {
        cout << "\nCar Details" << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Car car1;

    car1.inputDetails();
    car1.displayDetails();

    return 0;
}