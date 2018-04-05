
/* 
 * File:   HPStack.cpp
 * Author: Tim
 * 
 * Created on 3 April 2018, 8:24 PM
 * 
 * Stores the values of X Y Z T in a stack, that are PUSHed, POPed and PEEKed
 * onto and off of the stack. 
 * PUSH puts the value into X and moves others up toward T, dropping the value
 * in T. POP takes the value from X and pulls everything else up the stack  
 */
#include <string>
#include <iostream>
#include "HPStack.h"

HPStack::HPStack() {
    //set all registers =0
    X = 0;
    Y = 0;
    Z = 0;
    T = 0;
}

HPStack::HPStack(const HPStack& orig) {
}

HPStack::~HPStack() {
}

double HPStack::push(int intInput) {
    //Move each item up the stack and the input becomes X
    T = Z;
    Z = Y;
    Y = X;
    X = intInput;
}

double HPStack::pop() {
    //Move each item down the stack 
    X = Y;
    Y = Z;
    Z = T;
    T = 0;
    return X;
}

int HPStack::peek() {
    return X;

}

std::string HPStack::displayStack() {
    std::string temp;
    temp +=X;
    temp +=Y;
    temp +=Z;
    temp +=T;
    temp += "\n";

    return temp;

}
