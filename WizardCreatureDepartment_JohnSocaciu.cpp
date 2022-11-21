#include <iostream>
#include <array> 

using namespace std;

class Creature{
    
    public:
    
    string name; // accessors and mutators for name and quantity needed
    int quantity;
    string creatureType; 
    
    Creature(string name, int quantity){
        this->name = name; 
        creatureType = "unknown";
        this->quantity = quantity; 
    }
    
    Creature(){
        
    }
    
    string getName(){
        return name; 
    }
    
    void setName(string name){
        this->name = name; 
    }
    
    int getQuantity(){
        return quantity;
    }
    
    void setQuantity(int quantity){
        this->quantity = quantity; 
    }
    
    void printStatement(){ // the same function will be overridden in other classes
        cout << "There's " << quantity << " creatures named " << name << endl;
    }
    
}; 

class Phoenix: public Creature{
    
    private:
    
    string color; 
    
    public: 
    
    string getColor(){
        return color; 
    }
    
    void setColor(string color){
        this->color=color; 
    }
    
    void printStatement(){
        cout << "There's " << quantity << " golden phoenixes named " << name << endl; 
    }
    
};

class Basilisk: public Creature{
    
    public: 
    
    void printStatement(){
        cout << "There's " << 1 << " basilisk named " << name << endl; 
    }
    
}; 

int main()
{
	//create empty array of size 3 for storing name
    string nameArr[3];

    for(int i = 0; i < 2; i++){
        cin >> nameArr[i]; 
        nameArr[2] = "Clover";
    }

	// Write loop here to record user input as names
    // and set third name to “Clover”
    

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();

    return 0; 
}

