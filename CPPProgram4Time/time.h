//
//  time.h
//  CPPProgram4Time
//
//  Created by Vincent Fiore on 4/15/14.
//  Copyright (c) 2014 Vincent Fiore. All rights reserved.
//

#ifndef CPPProgram4Time_time_h
#define CPPProgram4Time_time_h

#include <fstream>
#include <string>

using namespace std;

class time
{
public:
    void setTime(int hrs, int mns, int sec);
    void showTime();
    int getHours();
    int getSeconds();
    int getMinutes();
    time();
    time(int hrs, int mns, int sec);
    time operator +(time);
    time operator -(time);
private:
    int hours;
    int minutes;
    int seconds;
};


#endif
