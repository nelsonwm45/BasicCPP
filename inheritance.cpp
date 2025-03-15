// Inheritance
# include <iostream>
using std::string; // using namespace std;

class AbstractEmployee { // Abstract class
	virtual void AskForPromotion() = 0; // pure virtual function, abstract function
};

class Employee:AbstractEmployee // Employee is a subclass of AbstractEmployee, signing a contract to implement the pure virtual function
{
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

		void AskForPromotion()
		{
			if (Age > 30)
				std::cout << Name << " got promoted" << std::endl;
			else
				std::cout << Name << " needs to work harder" << std::endl;
		}
}; // all members are private by default

// Inheritance always private by default
class Developer: public Employee // Developer is a subclass of Employee (Inheritance)
{
	public:
		string FavProgrammingLanguage;

		Developer(string name, string company, bool havecar, string carbrand, int age, string language)
			:Employee(name, company, havecar, carbrand, age) // calling the constructor of the base class
		{
			FavProgrammingLanguage = language;
		}

		void FixBug()
		{
			std::cout << GetName() << " fixed bug using " << FavProgrammingLanguage << std::endl;
		}

		void BragCar()
		{
			if (HaveCar == true) {
				std::cout << GetName() << " has a car which its brand is " << CarBrand << std::endl;
			}
			else {
				std::cout << GetName() << " doesn't have a car" << std::endl;
			}
		}

};

class Teacher: public Employee
{
	public:
		string Subject;

		Teacher(string name, string company, bool havecar, string carbrand, int age, string subject)
			:Employee(name, company, havecar, carbrand, age)
		{
			Subject = subject;
		}

		void PrepareLesson()
		{
			std::cout << GetName() << " is preparing " << Subject << " lesson" << std::endl;
	}
};

int main()
{
	Developer dev1 = Developer("Jack", "Google", true, "Tesla", 30, "C++");
	Teacher teacher1 = Teacher("John", "Amazon", true, "Honda", 35, "Math");

	dev1.FixBug();
	dev1.BragCar();
	dev1.AskForPromotion();
	dev1.IntroduceYourself();

	teacher1.PrepareLesson();
	teacher1.AskForPromotion();
	teacher1.IntroduceYourself();
}
