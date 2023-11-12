// sensor.h
#pragma once

#include <iostream>
#include <array>

namespace RWA2 {
    class Sensor {
    private:
        std::string model_;
        std::array<double, 50> data_;

    public:
        Sensor(const std::string& model);
        void read_data(unsigned int duration);
    };
}