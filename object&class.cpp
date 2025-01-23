# include <iostream>

using std::string; // using namespace std;

class Employee {
public:
	string Name;
	string Company;
	bool HaveCar;
	string CarBrand;
	int Age;

	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	} // creating a class method, with this I only need to call this method to print all the information

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
	Employee employee1;
	Employee employee2;

	employee1.Name = "Saldina";
	employee1.Company = "YT-CodeBeauty";
	employee1.Age = 25;
	employee1.HaveCar = false;
	employee1.IntroduceYourself(); // if no method, I need to std::cout each member
	employee1.TalkCar();

	employee2.Name = "John";
	employee2.Company = "Amazon";
	employee2.Age = 35;
	employee2.HaveCar = true;
	employee2.CarBrand = "Toyota";
	employee2.IntroduceYourself();
	employee2.TalkCar();
}

// The code above is a not that efficient as everytime I wanted to create an object I need to set each member
// It was using default constructor
// I can create a constructor to set the members when the object is created
// Constructors are special methods that are called when an object is created

// Three Rules of Contructors (a method)
// 1. Constructor is a "method" with no return type, and does not need to specify void
// 2. Constructor has the same name as the class belongs to. 
// 3. Constructor must be public.
