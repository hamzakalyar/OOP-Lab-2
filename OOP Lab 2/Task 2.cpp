#include<iostream>
#include<string>
using namespace std;


class Plant {
public:
    virtual void grow() = 0; // Pure virtual function
    virtual void displayHeight() const = 0;
};

class Flower : public Plant {
private:
    double height; // in centimeters
    double growthRate; // cm per day
public:
    Flower(double initialHeight) : height(initialHeight), growthRate(0.5) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Flower height: " << height << " cm" << endl;
    }
    // TODO: Implement the Tree and Bush classes based on the Flower class template.
};

class Bush : public Plant {
private:
    double height; // in centimeters
    double growthRate; // cm per day
public:
    Bush(double initialHeight) : height(initialHeight), growthRate(0.2) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Bush height: " << height << " cm" << endl;
    }
};

class Tree : public Plant {
private:
    double height; // in centimeters
    double growthRate; // cm per day
public:
   Tree(double initialHeight) : height(initialHeight), growthRate(0.7) {}
    void grow() override {
        height += growthRate;
    }
    void displayHeight() const override {
        cout << "Tree height: " << height << " cm" << endl;
    }
};


int main()
{
	Flower flower(10);
	Tree tree(20);
	Bush bush(30);

	Plant* plants[] = { &flower, &tree, &bush };
    for (int i = 0; i < 3; i++) {
		plants[i]->grow();
		plants[i]->displayHeight();
	}
	return 0;
}