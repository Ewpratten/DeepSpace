#include "Commands/ControlHatchGripper.h"
#include "Utils/EdgeLight.h"
#include "Robot.h"

ControlHatchGripper::ControlHatchGripper() {
  // Use Requires() here to declare subsystem dependencies
  Requires(Robot::m_HatchGripper);
  this->pJoyOp = Robot::m_oi->GetJoystickOperator();
}

// Called just before this Command runs the first time
// aka: every time teleop is enabled
void ControlHatchGripper::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ControlHatchGripper::Execute() {
  // hold onto hatch if y button is pressed
	if(this->pJoyOp->GetYButton()) {
    Robot::m_HatchGripper->Deploy();
    Utils::EdgeLight::Append(LedColour::kSOLID_GREEN);
    Log("Finger Down!");
  }
  else
  {
    Robot::m_HatchGripper->Retract();
  }
}

 
bool ControlHatchGripper::IsFinished() { return false; }

// Called once after isFinished returns true
void ControlHatchGripper::End() {Robot::m_HatchGripper->TurnOff();}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlHatchGripper::Interrupted() {}
