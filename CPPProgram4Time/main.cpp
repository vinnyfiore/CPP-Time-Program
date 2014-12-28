//
//  main.cpp
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

int main()

{
    int hours;
    int minutes;
    int seconds;
    char colon;

    cout<<"Enter the first time to add. ";
    cin >> hours >> colon >> minutes >> colon >> seconds;
    class time time1(hours, minutes, seconds);
    
    cout<<"Enter the second time to add. ";
    cin >> hours >> colon >> minutes >> colon >> seconds;
    class time time2(hours, minutes, seconds);

    class time time3;
    
    time1.showTime();
    time2.showTime();
    
    time3=time2+time1;
    time3.showTime();
    
    time3.setTime(0,0,0);
    
    cout<<"Enter the first time to subtract. ";
    cin >> hours >> colon >> minutes >> colon >> seconds;
    time1.setTime(hours, minutes, seconds);
    cout<<"Enter the second time to subtract. ";
    cin >> hours >> colon >> minutes >> colon >> seconds;
    time2.setTime(hours, minutes, seconds);
    
    time1.showTime();
    time2.showTime();
    
    time3=time2-time1;
    time3.showTime();
    
    
    
    return 0;
}
