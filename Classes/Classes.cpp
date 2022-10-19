#include <string> 
#include <iostream>        

// getters and setters for private attributes/variables inside the Car class 

using namespace std; 

class Car{ // public car class 
    private: 

    int year; // encapsulation (using price) // To access a private attribute, use public "get" and "set" methods:
    string make; 
    string model; 

    public:
    Car(int yearCar, string makeCar, string modelCar){ // non-default constructor 
        year = yearCar; 
        make = makeCar; 
        model = modelCar; 
    }

    Car(){
        
    }

    public:
    int getYear(){
        return year; 
    }
    string getMake(){
        return make; 
    }
    string getmodel(){
        return model; 
    }

    void setYear(int yearDate){
        year = yearDate; 
    }
    void setMake(string makeType){
        make = makeType; 
    }
    void setModel(string modelType){
        model = modelType; 
    }

};

int main(){

    Car firstCar(2013,"Ford","Fusion"); 

    cout << firstCar.getYear() << "\n" << firstCar.getmodel() << "\n" << firstCar.getMake() << endl;  

    Car secondCar; 

    secondCar.setYear(2005);

    secondCar.setModel("f150"); 

    secondCar.setMake("Ford");

    cout << secondCar.getYear() << "\n" << secondCar.getmodel() << "\n" << secondCar.getMake() << endl; 

    return 0; 
}
