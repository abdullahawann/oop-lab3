#include <iostream>
#include <string>
using namespace std;

class MyClass
{
	long long int roll_no, CNIC;
	string name, degree, address;

public :

    // Setters.
	void setA(long long int rn)
	{
		roll_no = rn;
	}

	void setB(long long int cnic)
	{
		CNIC = cnic;
	}

	void setC(string n)
	{
		name = n;
	}

	void setD(string deg)
	{
		degree = deg;
	}

	void setE(string add)
	{
		address = add;
	}

	// Getters
	long long int getA()
	{
		return roll_no;
	}

	long long int getB()
	{
		return CNIC;
	}

	string getC()
	{
		return name;
	}

	string getD()
	{
		return degree;
	}

	string getE()
	{
		return address;
	}
};

int main()
{
	MyClass obj;

	long long int roll_no, CNIC;
	string name, degree, address;

	cout << "Enter your roll no : ";
	cin >> roll_no;
	cout << "Enter your cnic : ";
	cin >> CNIC;
	cin.ignore();
	cout << "Enter your name : ";
	getline(cin, name);
	cout << "Enter your degree : ";
	getline(cin, degree);
	cout << "Enter your address : ";
	getline(cin, address);

	obj.setA(roll_no);
	obj.setB(CNIC);
	obj.setC(name);
	obj.setD(degree);
	obj.setE(address);

	cout << endl;
	cout << "Your roll no is : " << obj.getA() << endl;
	cout << "Your CNIC is : " << obj.getB() << endl;
	cout << "Your name is : " << obj.getC() << endl;
	cout << "Your degree is : " << obj.getD() << endl;
	cout << "Your address is : " << obj.getE() << endl;

	system("pause");
	return 0;
}
