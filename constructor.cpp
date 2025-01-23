# include <iostream>

using std::string; // using namespace std;

class Employee {
public:
	string Name;
	string Company;
	bool HaveCar;
	string CarBrand;
	int Age;

	Employee (string name, string company, bool havecar, string carbrand, int age) { // creating a public constructor
		Name = name;
		Company = company;
		HaveCar = havecar;
		this->CarBrand = carbrand;
		Age = age;
	}

	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}

	void TalkCar() {
		if (HaveCar == true) {
			std::cout << "I have a car which its brand is " << CarBrand << std::endl;
		}
		else {
			std::cout << "I don't have a car" << std::endl;
		}
	}
}; // all members are private by default

// private members are not accessible outside the class
// public members are accessible outside the class
// protected members are accessible in the class and its derived classes

int main()
{
	Employee employee1 = Employee("Chris", "Twitch", false, "", 25);
	Employee employee2 = Employee("John", "Amazon", true, "Honda", 35);

	employee1.IntroduceYourself();
	employee1.TalkCar();

	employee2.IntroduceYourself();
	employee2.TalkCar();
}

// Three Rules of Contructors (a method)
// 1. Constructor is a "method" with no return type, and does not need to specify void
// 2. Constructor has the same name as the class belongs to. 
// 3. Constructor must be public.
