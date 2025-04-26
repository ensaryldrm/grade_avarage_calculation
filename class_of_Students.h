#include <iostream>
#include <vector>
using namespace std;

class Students
{
private:
  string name;
  float average;
  vector<string> courses;
  vector<int> grades;

public:
  Students(string name, vector<string> courses, vector<int> grades)
  {
    this->name = name;
    this->courses = courses;
    this->grades = grades;
  }
  
  void setAddCourses(string course)
  {
    courses.push_back(course);
  }

  void setAddGrade(int grade)
  {
    grades.push_back(grade);
  }

  void setCalculateAverage()
  {
    float sum = 0;
    for(int grade : grades)
    {
        sum+=grade;
    }
    if(!grades.empty())
    {
        average = sum / grades.size();
    }
    else
    {
        average = 0;
    }
  }

  void displayResults()
  {
    cout << "Student name: " << name << endl;
    for(int i = 0; i< courses.size(); i++)
    {
        cout << courses[i] << ": " << grades[i] << endl;
    }
    cout << "Average: " << average << endl;
  }
};