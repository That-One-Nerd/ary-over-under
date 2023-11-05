#include "main.h"
#include <stdlib.h>

using namespace globals;
using namespace superstruct;

/*
  TODO:
    - AUTONS
      - SameBarQual
      - OppBarQual
      - SameBarElims
      - OppBar Elims
*/

/*
  chassis.wait_drive() -> Waits for the drivetrain to complete whatever movement is happening
  chassis.wait_until(double measurement) -> Waits for the drivetrain to reach a certain measurement before performing the next task.
*/

void near_side() {
  // Score the triball preload
  toggleIntake(true);
  driveSync(100, true);
  turnSync(90);

  toggleIntake(false);
  pros::delay(50);
  driveSync(22, true);
  driveSync(-22, true);

  turnSync(-120);
  driveSync(48.5, true);
  pros::delay(150);
  toggleIntake(true);
  pros::delay(100);

  driveSync(-35, true);
  turnSync(90);

  pros::delay(100);
  toggleIntake(false);
  driveSync(55, true);
  driveSync(-20, true);

  //driveSync(100, true);
  
}

void far_side() {
  toggleIntake(true);
  driveSync(100, true);
  turnSync(-90);
  
  toggleIntake(false);
  pros::delay(250);
  driveSync(31, true);
  driveSync(-30, true);

  turnSync(-160);
  driveSync(125, true);
  pros::delay(1000);
  driveSync(-35, true);

  turnSync(55);
  driveSync(70, true);

}

void skills() {
  
}

void test_seq() {
  driveSync(10, true);
  turnSync(90);
  turnSync(90);
}

void odom_test() {
  chassis_odom.moveTo(10, 10, 1000);
  chassis_odom.turnTo(15, 15, 1000);
};
