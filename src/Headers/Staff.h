#ifndef STAFF_H_
#define STAFF_H_
#include <iostream>
using namespace std;

#include <cctype>
#include <string>

#include "Admin.h"
#include "Course.h"
#include "Date.h"
#include "Programme.h"

#include "Student.h"

class Staff : public Admin, public Programme {
private:
  string faculty;
  string department;
  Student stu;
  Programme program;
  Course course;

  struct ProgrammeStruct {
    string programmeCode;
    string programmeName;
    int maximumNumberofCourses;
    string Awards;
    string accreditations;
  };

public:
  Staff() {
    this->faculty = "Utech";
    this->department = "SCIT";
    this->stu = *new Student();
  }

  Staff(string faculty, string department) {
    this->faculty = faculty;
    this->department = department;
  }

  Staff(Staff &obj) {
    this->faculty = obj.faculty;
    this->department = obj.department;
  }

  string getFaculty() { return faculty; }

  void setFaculty(string faculty) { this->faculty = faculty; }

  string getDepartment() { return department; }

  void setDepartmet(string department) { this->department = department; }

  void registerStudent(Student stu) {}

  void createProgramme(Programme program) {

    string programmeCode;
    string programmeName;
    int maximumNumberOfCourses;
    string Award;
    string Accreditations;

    printf("Enter the programme code\n");
    cin >> programmeCode;
    printf("What is the program name: ");
    cin >> programmeName;
    cout << "What are the maximum number of course: ";
    cin >> maximumNumberOfCourses;
    printf("%d", maximumNumberOfCourses) cout
        << "What are the availiable Awards for this course: ";
    cin >> Award;
    cout << "What are available accredidations: ";
    cin >> Accreditations;

    program.setProgrammeCode(programmeCode);
    program.setProgrammeName(programmeName);
    program.setMaxNumOfCourses(maximumNumberOfCourses);
    program.setAward(Award);
    program.setAccreditation(Accreditations);
    // SAVE FILE
    // saveFile(akodko, aodko, odkao)
  }

  void addProgrammeCourse(string programmeId, Course course) {
    char again = 'N';

    do {
      string cCode;
      string cName;
      string cDescription;
      int cCredits;
      string cPrerequisite;

      printf("Enter Course Code: ");
      cin >> cCode;

      printf("Enter Course Name: ");
      cin >> cName;

      printf("Enter Course Description: ");
      cin >> cDescription;

      do {
        printf("Enter Course Credits: ");
        // cin >> cCredits;
        printf("%d", cCredits); // 123456789

        try {
          printf("%d", cCredits); // 123456789
          break;
        } catch (std::bad_typeid &bt) {
          cout << "Invalid type, please re-enter" << endl;
        }

      } while (1);

      printf("Enter the course Prerequisite:");
      cin >> cPrerequisite;

      course.setCourseCode(cCode);
      course.setName(cName);
      course.setDescription(cDescription);
      course.setCredits(cCredits);
      course.setName(cPrerequisite);

      do {
        cout << "Do you want to enter another: ";
        cin >> again;

        if (again != toupper('y') || again != toupper('n')) {
          cout << "Invalid entry, try again!" << endl;
        } else {
          break;
        }
      } while (again != toupper('y') && again != toupper('n'));

    } while (again != toupper('N'));
  }
};

#endif
