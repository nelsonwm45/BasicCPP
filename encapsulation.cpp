# include <iostream>
using std::string; // using namespace std;

// 1. Encapsulation 
	// - bundling or tying the data and the methods which operate on the data, so that the data is grouped together within the class
	// - data hiding, the data is not accessible outside the class, prevent anything outside the class from directly accessing/modifying the data
	// - the data is only accessible through the methods of the class, which are called "getters and setters"

class Employee {
private:
	string Name;
	string Company;
	int Age;

public:
	bool HaveCar;
	string CarBrand;

	Employee (string name, string company, bool havecar, string carbrand, int age) { // creating a public constructor
		Name = name;
		Company = company;
		HaveCar = havecar;
		this->CarBrand = carbrand;
		Age = age;
	}

	// Creating a setter for Name
	void SetName(string name) {
		Name = name;
	}

	// Creating a getter for Name
	string GetName() {
		return Name;
	}

	// Creating a setter for Company
	void SetCompany(string company) {
		Company = company;
	}

	// Creating a getter for Company
	string GetCompany() {
		return Company;
	}

	// Creating a setter for Age
	void SetAge(int age) {
		if (age >= 18) // apply rules to the setter
			Age = age;
	}

	// Creating a getter for Age
	int GetAge() {
		return Age;
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

	employee1.SetAge(39);
	std::cout << employee1.GetName() << " is " << employee1.GetAge() << " years old" << std::endl;

	employee1.SetAge(15); // this will not change the age because the setter has a rule
	std::cout << employee1.GetName() << " is " << employee1.GetAge() << " years old" << std::endl;
}

// Three Rules of Contructors (a method)
// 1. Constructor is a "method" with no return type, and does not need to specify void
// 2. Constructor has the same name as the class belongs to. 
// 3. Constructor must be public.
