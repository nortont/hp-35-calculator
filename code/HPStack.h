
/* 
 * File:   HPStack.h
 * Author: Tim
 *
 * Created on 3 April 2018, 8:24 PM
 */

#ifndef HPSTACK_H
#define HPSTACK_H

class HPStack {
public:
    HPStack();
    HPStack(const HPStack& orig);
    virtual ~HPStack();
    
//    void setX(int x);
//    void setY(int y);
//    void setZ(int z);
//    void setT(int t);
//    
//    int getX();
//    int getY();
//    int GetZ();
//    int getT();
    
    int push(int x);
    int pop();
    int peek();
    
private:
    int registers[4];
    const int X=0;
    const int Y=1;
    const int Z=2;
    const int T=3;
};

#endif /* HPSTACK_H */

