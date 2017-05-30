//
//  main.cpp
//  HW3
//
//  Created by Jaelee Cruz on 5/29/17.
//  Copyright © 2017 Jaelee Cruz. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;


void ex01();
void ex02();
void ex03();

int main(){
    void ex01();
    void ex02();
    void ex03();
    return 0;
};

class Fan{
public:
    Fan(){
        speed = 1;
        on = false;
        radius = 1;
    };
    
private:
    int speed; //need to make speed 1 2 or 3
    bool on;
    double radius;
    
};


void ex01(){
    }

class QuadraticEquation{
public:
    QuadraticEquation() {
        a=1;
        b=1;
        c=1;
    }
    
    QuadraticEquation(double newA, double newB, double newC) {
        a=newA;
        b=newB;
        c=newC;
    }
    
    double getDiscriminant() {
        double discriminant;
        discriminant = ((b * b) - (4 * a * c));
        return (discriminant);
    }
    
    int getRoot1(){
        double root1;
        root1 = (((-b) + sqrt(getDiscriminant())) / (2 * a));
        if (root1 < 0)
            return 0;
        
        return (root1);
    }
    
    int getRoot2(){
        double root2;
        root2 = (((-b) - sqrt(getDiscriminant())) / (2 * a));
        if (root2 < 0)
            return 0;
    
        return (root2);
    };
    
private:
    double a, b, c;
    
};

void ex02(){
    double a, b, c;
    cout << "enter values for a, b, and c " << endl;
    cin >> a >> b >> c;
    QuadraticEquation qe(a,b,c);
    
    if (qe.getDiscriminant() == 0)
        cout << qe.getRoot1() << endl;
    
    else if (qe.getDiscriminant() > 0)
        cout << qe.getRoot1() << qe.getRoot2() << endl;
    
    else if (qe.getDiscriminant() < 0)
        cout << "the equation has no real roots." << endl;
}


void ex03(){
    class evenNumber{
        
    };
};

