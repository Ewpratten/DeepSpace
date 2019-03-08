#include "Commands/ControlHatchGripper.h"
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
  } else {
    Robot::m_HatchGripper->Retract();
  }

  if (!(this->pJoyOp->GetTriggerAxis(Hand::kRightHand) > 0.1)){
    if(this->pJoyOp->GetYButton()) {
      Robot::m_Light->On();
      Robot::m_HatchGripper->Deploy();
  }else {
    Robot::m_HatchGripper->Retract();
    Robot::m_Light->Off();
  }}
}


bool ControlHatchGripper::IsFinished() { return false; }

// Called once after isFinished returns true
void ControlHatchGripper::End() {Robot::m_HatchGripper->TurnOff();}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ControlHatchGripper::Interrupted() {}
