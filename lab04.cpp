#include <iostream>
#include <string>

class Bicycle {
protected:
    std::string model;
    int wheelSize;

public:
    Bicycle(const std::string& m, int ws) : model(m), wheelSize(ws) {}

    void displayInfo() {
        std::cout << "Bicycle Model: " << model << ", Wheel Size: " << wheelSize << " inches.\n";
    }
};

class Ride : public Bicycle {
private:
    int number;
    std::string route;
    double time;

public:
    Ride(const std::string& m, int ws, int num, const std::string& rt, double t) : Bicycle(m, ws), number(num), route(rt), time(t) {}

    void displayRideDetails() {
        std::cout << "Ride Number: " << number << ", Route: " << route << ", Time: " << time << " hours.\n";
    }

    double getTime() const {
        return time;
    }

    void setTime(double t) {
        time = t;
    }
};

int main() {
    Ride ride1("Mountain Bike", 26, 101, "Forest Trail", 2.5);
    ride1.displayInfo();
    ride1.displayRideDetails();

    ride1.setTime(3.0);
    std::cout << "Updated Ride Time: " << ride1.getTime() << " hours.\n";

    return 0;
}