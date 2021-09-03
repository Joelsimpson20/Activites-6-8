#include <iostream>
using namespace std;

class Info {
public:

    int num1, num2, sum;

    Info(int n1 = 0, int n2 = 0, int s = 0) {
        num1 = n1;
        num2 = n2;
        sum = s;
    }

    void getValue() {
        do {
            cout << "What is the value of num1 : ";
            cin >> num1;
            if (num1 >= 0 && num1 <= 1000000)
                break;
        } while (true);

        do {
        cout << "\nWhat is the value of num2 : ";
        cin >> num2;
        if (num1 >= 0 && num1 <= 1000000)
            break;
        } while (true);
    }
};



class Display : public Info{
public: 
    void getSum() {
        sum = num1 + num2;
    }
    void display() {
        cout << num1 << " + " << num2;
        cout << "\nThe sum is : " << sum;
    }

};


int main()
{
    Display d;
    int ans;
    do {
        cout << "How many times would you like to run : ";
        cin >> ans;
        if (ans >= 1 && ans <= 10)
            break;
    } while (true);
    
    for (int i = 0; i < ans; i++) {
        d.getValue();
        d.getSum();
        d.display();
    }
}
