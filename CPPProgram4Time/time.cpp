//
//  time.cpp
//  CPPProgram4Time
//
//  Created by Vincent Fiore on 4/15/14.
//  Copyright (c) 2014 Vincent Fiore. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include "time.h"

using namespace std;


time::time()
{
    hours=0;
    minutes=0;
    seconds=0;
}

time::time(int hrs, int mns, int sec)
{
    hours=hrs;
    minutes=mns;
    seconds=sec;
}

void time::setTime(int hrs, int mns, int sec)
{
   hours=hrs;
   minutes=mns;
   seconds=sec;
}

void time::showTime()
{
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

class time time::operator+(time time1)
{
    time time3;
    int a,b;
    a=seconds+time1.seconds;
    time3.seconds=a%60;
    b=(a/60)+minutes+time1.minutes;
    time3.minutes=b%60;
    time3.hours=(b/60)+hours+time1.hours;
    time3.hours=time3.hours%24;
    return time3;
}

class time time::operator-(time time1)
{
    time time3;
    int a,b,c,d,e;
    
    a=time1.seconds-seconds;
    if(a<0){
        d=1;
        time3.seconds=60+a;
    }
    else {
        d=0;
        time3.seconds=a;
    }
    
    b=time1.minutes-minutes;
    if(b<0){
        e=1;
        time3.minutes=((60+b)-d);
    }
    else {
        e=0;
        time3.minutes=b-d;
    }
    
    c=time1.hours-hours;
    if(c<0){
        time3.hours=((24+c)-e);
    }
    else {
        time3.hours=c-e;
    }
    
    return time3;
}




