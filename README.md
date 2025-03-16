# BasicCPP

Learning Basic CPP Especially For The Object-Oriented Programming (OOP)
4 Pillars of Object-Oriented Programming

Virtual ---- allows the function to be overidden !

1. Encapsulation 
- bundling or tying the data and the methods which operate on the data, so that the data is grouped together within the class
- data hiding, the data is not accessible outside the class, prevent anything outside the class from directly accessing/modifying the data
- the data is only accessible through the methods of the class, which are called "getters and setters"

2. Abstraction
- hiding complex things behind the procedures to make those things look simple
- e.g. -> smartphone call, user only needs to know how to click a button and call the person they want to call but actually
behind calling, there is a logic behind once u press the call button
- hiding complex logic from user --- abstraction
- declare a virtual function at base class, for e.g shape class has virtual function called area() = 0;
- all derived class from the shape class are forced to sign contract/inherit that function with own logic, e.g. : triangle class derived from shape class had to implement area() method with own logic, same goes to pentagon derived class....

3. Inheritance
- It has a base class/super class/parent class
- It has a derived class/sub class/child class
- child class will have all members (same attributes/behaviours) of parent class
- e.g. : 
	1) car is parent class - have name, model, colour, price, has drive() method
		a) gas car - also have name, model, colour, price, has drive() , filltank(), tankstatus()
		b) electric car - also have name, model, colour, price has drive(), charge(), batterystatus()
- the use of "public [parent class]" allows the child to use parent class method and properties

4. Polymorphism
- Means many forms
- when a parent class reference is used to refer an object of a child class
- so meaning : a method from a parent class can be overidden by child class
- if there's no pointer involved, the method does not need "virtual function", it will just automatically choose the method in child class
- if there's pointer involved, the method in parent class had to be "virtual" so that it will scan the child class's method first and execute them if they have the same method