//! A subsytem that interfaces with the climberbase on the robot
#ifndef _CRAWLDRIVE_HG_
#define _CRAWLDRIVE_HG_

#include <frc/commands/Subsystem.h>
#include <frc/DigitalInput.h>
#include <frc/WPILib.h>
#include <frc/Spark.h>
#include "RobotMap.h"

class CrawlDrive: public frc::Subsystem {
    public:
     CrawlDrive(); //!< Class constructor
     void InitDefaultCommand() override; //!< Initalizes the default command for this subsystem () 

   /**
	 * @brief Drive, (or crawl), forwards or backwards
	 * Moves the wheels attached to the arms. What wheels do.
	 * @param Speed Percent power to go. 100% drives forwards
	 */
    void Move(double Speed);

    /**
     * @brief Returns true if its on the floor
     * @return true Something is right in front of it (on the floor)
     * @return false Nothing in front of it (in the air)
     */
    bool GetSensor(void) ;

private:
    frc::Spark* pCrawlLeft; //!< Pointer for the left crawl motor
    frc::Spark* pCrawlRight; //!< Pointer for the right crawl motor
    frc::DigitalInput* pFloorSensor;
};

#endif // _CRAWLDRIVE_HG_