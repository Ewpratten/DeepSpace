#ifndef _SUBSYSTEMS_LIGHTING_H
#define _SUBSYSTEMS_LIGHTING_H

#include <frc/commands/Subsystem.h>
#include <frc/Spark.h>
#include "RobotMap.h"

enum LedColour{
  kSOLID_WHITE =  93,
  kCHASE_RED   = -31,
  kCHASE_BLUE  = -29,
  kSOLID_GREEN =  73
};

class Lighting : public frc::Subsystem {
 public:
  Lighting();
  void InitDefaultCommand() override;
  void SetBuffer(LedColour colour);
  void Set();

private:
  frc::Spark* pLightController;
  LedColour buffer = LedColour::kSOLID_WHITE;
};

#endif // _SUBSYSTEMS_LIGHTING_H