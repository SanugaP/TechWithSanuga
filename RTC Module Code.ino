#include <virtuabotixRTC.h>        //This is the library that we will be using
virtuabotixRTC myRTC(6, 7, 8);     //These are the pins which we have connected RTC module to
    
int OnTimeHour = 8;                //This is the hour which the LED will turn on
int OnTimeMinute = 0;              //This is the minute that the LED will turn on
int OffTimeHour = 8;               //This is the hour which the LED will turn off
int OffTimeMinute = 1;             //This is the minute which the LED will turn off
                                   //So the LED will turn on at 8:00 and turn off at 8:01

void setup()  {
  pinMode(13, OUTPUT);             //This is the Pin the LED is connected to
  Serial.begin(9600);
  // Set the current date, and time in the following format:
  // seconds, minutes, hours, day of the week, day of the month, month, year
  myRTC.setDS1302Time(0, 59, 7, 7, 24, 4, 2022);    //Setting the time for the RTC
}

void loop()  {
  myRTC.updateTime();                         
  Serial.print(myRTC.dayofweek);      // Start showing the day of week, day of month, year etc in the Serial Monitor
  Serial.print("/");                  // You can comment these parts if you want
  Serial.print(myRTC.dayofmonth);
  Serial.print("/");
  Serial.print(myRTC.month);
  Serial.print("/");
  Serial.print(myRTC.year);
  Serial.print("  ");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.println(myRTC.seconds);

  if (myRTC.hours ==(OnTimeHour)){
    if(myRTC.minutes ==(OnTimeMinute)){
      digitalWrite(13, HIGH);
    }
  }
  if (myRTC.hours ==(OffTimeHour)){
    if(myRTC.minutes ==(OffTimeMinute)){
      digitalWrite(13, LOW);
    }
  }
  // Delay so the program doesn't print non-stop
  delay(1000);
}


