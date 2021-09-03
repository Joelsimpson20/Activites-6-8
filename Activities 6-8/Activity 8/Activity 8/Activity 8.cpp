#include <iostream>
using namespace std;

class Parent {
public:
	void whoAreYou() {
		cout << "I am the Parent\n";
	}
};

class Derived :public Parent {
public:
	void whoAreYou() {
		Parent::whoAreYou();
		cout << "I am a Child\n";
	}
};

int main()
{
	Derived d;
	d.whoAreYou();
}