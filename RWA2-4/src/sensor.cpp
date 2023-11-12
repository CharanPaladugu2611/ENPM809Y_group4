// sensor.cpp
#include "../include/sensor.h"
#include <thread>
#include <chrono>
#include <random>
#include <iostream>


namespace RWA2 {
    Sensor::Sensor(const std::string& model) : model_(model) {}

    void Sensor::read_data(unsigned int duration) {
        // Emulate sensor data acquisition by sleeping for the specified duration
        std::cout << "Sensor " << model_ << " gathering data for " << duration << " seconds." << '\n';
        std::this_thread::sleep_for(std::chrono::seconds(duration));
        std::cout<<"Gathering data from Sensor"<< model_<< "data:" <<'\n';


        // Fill out the array data_ with random numbers between 0 and 30
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<double> dis(0.0, 30.0);


        for (int i=0;i<50;i++) {
            std::cout<< "Sensor"<< model_<< "data"<< read_data<< "\n";
            
            
        }
        std::cout<<"Collected data from Sensor" <<read_data<< "\n";
    }
    }
