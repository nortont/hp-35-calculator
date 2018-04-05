
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

    
    double push(int x);
    double pop();
    int peek();
    std::string displayStack();
    
private:
   
    int X;
    int Y;
    int Z;
    int T;
};

#endif /* HPSTACK_H */

