#include <iostream>

#include "node.h"

using namespace std;
#ifndef OUTPUT_H
#define OUTPUT_H

class Output: public Node 
{
private:
    

public:
    Output();
   ~Output();
    
    virtual void add_input(Node *node);
    virtual void add_output(Node *node);
};
#endif