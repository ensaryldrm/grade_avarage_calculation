#include "class_of_Students.h"

int main()
{
  vector<string> courses = {"Math","Pyhsics","Chemistry"};
  vector<int> grades = {75,90,45};

  Students student1("Jack",courses,grades);

  student1.setAddCourses("A");
  student1.setAddGrade(88);
  student1.setCalculateAverage();
  student1.displayResults();
}