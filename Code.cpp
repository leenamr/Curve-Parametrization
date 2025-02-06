#include <iostream>
#include <cmath>
using namespace std;

// Firstly we define the parametrization function r(t)
struct Point {
    float x, y;
};

Point parametrization(float t) {
    float x = t;          // this is the parametric equation for x(t)
    float y = t * t;      // this is the parametric equation for y(t)
    return {x, y};
}

// Now we define the derivative function r'(t)
Point derivative(float t) {
    float dx = 1.0;       // this is the derivative of x(t) with respect to t
    float dy = 2 * t;     // this is the derivative of y(t) with respect to t
    return {dx, dy};
}

int main() {
    float t; 
    
     cout << "Parametric Equation r(t): \n x = t , y = t^2 "<< endl;
     cout << "Derivative Vector Equation r'(t):\n dx/dt = 1 , dy/dt = 2t" << endl;
     cout<<"\n";
       
    for (float t = 1.0; t <= 5.0; t += 1.0) {
        Point point = parametrization(t);
        Point direction = derivative(t);
        
        cout<<"----------------------------\n";
        cout<< "t = "<< t <<" "<< endl;
        cout << "Parametric Point:  r(" << t << ") = " "<" << point.x << "," << point.y << ">" << endl;
        cout << "Derivative Vector: r'(" << t << ") = " "<" << direction.x << "," << direction.y << ">" << endl;        cout<<"\n";
    }

    return 0;
}
