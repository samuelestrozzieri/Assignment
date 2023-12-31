//Obstacle.h
#ifndef Obstacle_h
#define Obstacle_h


#include <iostream>
#include <array>
using std::array;
#include <cmath>
using std::remainder;
using std::abs;


class Obstacle
{    
public:
    Obstacle();
    Obstacle(double x1, double y1, double x2, double y2);
    
    array<double,2> get_edgeMin() const;
    array<double,2> get_edgeMax() const;

private:
    double x1_;
    double y1_;
    double x2_;
    double y2_;
};

#endif