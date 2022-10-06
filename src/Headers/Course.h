#ifndef COURSE_H_
#define COURSE_H_

#include <iostream>
using namespace std;

class Course {

private:
  string courseCode;
  string name;
  string description;
  int credits;
  string prerequisite;

public:
  Course() {
    courseCode = "";
    name = "";
    description = "";
    credits = 0;
    prerequisite = "";
  }

Course(string courseCode, string name, string description , int credits, string prerequisite) {
    this->courseCode = courseCode;
    this->name = name;
    this->description = description;
    this->credits = credits;
    this->prerequisite = prerequisite;
  }

string getCourseCode() { 
    return courseCode; 
    }

void setCourseCode(string courseCode) { 
    this->courseCode = courseCode; 
    }

string getName(){
  return name;
}

void setName(string name){
   this->name = name;
}

string getDescription(){
  return description;
}

void setDescription(string description){
  this->description= description;
}

int getCredits(){
  return credits;
}

void setCredits(int credits){
  this->credits = credits;
}

string getPrerequiste(){
  return prerequisite;
}

void setPrerequisite(string prerequisite ){
  this->prerequisite = prerequisite;
}

void createProgramme(){
  
}

void modifyProgrammeDetails(){
  
}

void generateStudentList(){
  
}



};

#endif