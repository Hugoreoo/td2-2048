//
// Created by hugo on 15/11/2022.
//

#ifndef TD1_CASE_H
#define TD1_CASE_H

class Case {

public:
    //Constructor
        Case(int value = -1);
    //GETTERS & SETTERS
        const int &getValue() const;

private:
    int _value;
};


//FRIEND FUNCTIONS




#endif //TD1_CASE_H
