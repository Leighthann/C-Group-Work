#ifndef PROGRAMME_H_
#define PROGRAMME_H_

#include <iostream>
using namespace std;

#include "Date.h"
#include "Admin.h"
#include "Programme.h"
#include "Course.h"

class Programme {
private:
string programmeCode;
string programmeName;
int maxNumOfCourses;
string award;
string accreditation;

public:
Programme() {
  programmeCode = "";
  programmeName = "";
  maxNumOfCourses = 0;
  award = "";
  accreditation = "";
  }

Programme(string programmeCode ,string programmeName,int maxNumOfCourses ,string award,string accreditation) {
this->programmeCode= programmeCode;
this->programmeName = programmeName;
this->maxNumOfCourses = maxNumOfCourses;
this->award = award;
this->accreditation = accreditation;
}

string getProgrammeCode(){
  return programmeCode;
}

void setProgrammeCode(string programmeCode){

  this->programmeCode = programmeCode;
}

string getProgrammeName(){
  return programmeName;
}

void setProgrammeName(string programmeName){
  this->programmeName = programmeName;
}

int getMaxNumOfCourses() {
  return maxNumOfCourses;
}

void setMaxNumOfCourses(int maxNumOfCourses ){
   this->maxNumOfCourses = maxNumOfCourses; 
}

string getAward(){
   return award;
}

void setAward(string award){
   this->award = award;
}

string getAccreditation(){
  return accreditation;
} 

void setAccreditation(string accreditation) {
  this->accreditation= accreditation;
}


};

#endif