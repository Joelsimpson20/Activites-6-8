#include <iostream>
using namespace std;

class A {
public:
	void display() {
		cout << "I am the Grand Parent\n\n";
	}
};

class B :public A {
public:
	void display() {
		cout << "I am the Parent\n";
	}
	void view() {
		cout << "I am Derived from Class A\n\n";
	}
};

class C : public B {
public:
	void display() {
		cout << "I am a Child\n";
	}
	void view() {
		cout << "I am Derived from Class B\n\n";
	}
};

int main()
{
	A a;
	B b;
	C c;

	c.display();
	c.view();
	b.display();
	b.view();
	a.display();
	return 0;
}
