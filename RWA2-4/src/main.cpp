// main.cpp
#include <iostream>
#include <memory>
#include <vector>
#include "../include/sensor.h"

namespace RWA2 {
    class Battery {
        // Battery class definition (Assuming it exists, as mentioned in the MobileRobot attributes)
    };

    class MobileRobot {
    private:
        std::pair<double, double> position_;
        double orientation_;
        double speed_;
        Battery battery_;
        std::vector<std::unique_ptr<Sensor>> sensors_;
        std::string model_;

    public:
        MobileRobot(const std::string& model);
        void move(double distance, double angle);
        void print_status();
        void addSensor(const std::string& model);
        void readSensorData(unsigned int duration);

    protected:
        void rotate(double angle);
    };

    // Implementation of MobileRobot methods
    MobileRobot::MobileRobot(const std::string& model) : orientation_(0.0), speed_(0.0), model_(model) {}

    void MobileRobot::move(double distance, double angle) {
        // Code for moving the mobile robot
        std::cout << "Moving the robot. Distance: " << distance << ", Angle: " << angle <<"\n";
    }

    void MobileRobot::rotate(double angle) {
        // Code for rotating the mobile robot
        std::cout << "Rotating the robot. Angle: " << angle << "\n";
    }

    void MobileRobot::print_status() {
        // Code for printing the status of the mobile robot
        std::cout << "Robot Status - Model: " << model_ << ", Position: " << position_.first ;
        std::cout << position_.second << " Orientation: " << orientation_;
        std::cout << ", Speed: " << speed_ << ", Battery Level: "; /* + Battery level info */
        std::cout << "\n";
       
    }

    void MobileRobot::addSensor(const std::string& model) {
        // Code for adding a sensor to the robot
        sensors_.emplace_back(std::make_unique<Sensor>(model));
    }

    void MobileRobot::readSensorData(unsigned int duration) {
        // Code for reading data from all sensors
        for (const auto& sensor : sensors_) {
            sensor->read_data(duration);
        }
    }
}

int main() {
    // Create a mobile robot
    RWA2::MobileRobot robot("RoboBot");

    // Add sensors to the robot
    robot.addSensor("IMU SENSOR");

    // Read data from sensors
    robot.readSensorData(5);

    return 0;
}
