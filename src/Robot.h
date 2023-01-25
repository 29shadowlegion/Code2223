#ifndef ROBOT_H
#define ROBOT_H

#include "main.h"

#include <atomic>
#include <memory>
#include <map>
#include <vector>

using namespace pros;
using namespace std;

class Robot {
public:
  static Controller Controller1;
  static Motor LeftBackWheel;
  static Motor RightBackWheel;
  static Motor LeftFrontWheel;
  static Motor RightFrontWheel;
  static Motor Intake;
  static Motor Spinner1;
  static Motor Spinner2;
  static Motor Roller;

  static std::map<std::string, std::unique_ptr<pros::Task>> tasks;
  static std::atomic<double> x;

  static void start_task(string s, void(*func)(void*));
  static void end_task(string s);
  static bool task_exists(string s);
  static ADIDigitalOut pneumatics;


  static void drive(int power, int turn);
  static void driveControl(void *ptr);


};
#endif
