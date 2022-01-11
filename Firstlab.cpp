// Program to find total, average of given two numbers by using function with default arguments, static data members and this keywords

//Submitted by : Arun Jaswal
//Roll number : 20124021
#include<iostream>

using namespace std;

class first {
    int n1, n2;

    public:
        int total(int n1 = 0, int n2 = 0) {
            this -> n1 = n1;
            this -> n2 = n2;
            return n1 + n2;
        }

    double avg(int n1 = 0, int n2 = 0) {
        this -> n1 = n1;
        this -> n2 = n2;

        double average = (n1 + n2) / 2.0;
        return average;
    }
};

int main() {
    int n1, n2;
    cout << "Enter two numbers one by one : ";
    cin >> n1 >> n2;
    first obj1;
    cout << "\nThe sum of the two numbers is : " << obj1.total(n1, n2) << endl <<
        "\nThe average of the two numbers is : " << obj1.avg(n1, n2) << endl;


}