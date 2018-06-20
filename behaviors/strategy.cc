#include "naobehavior.h"
#include "../rvdraw/rvdraw.h"

extern int agentBodyType;

//AI lab Hoseini 95-07-02 start
///the method below is modified to be used in motion editor project
void NaoBehavior::beam( double& beamX, double& beamY, double& beamAngle )
{

//    if(!beamablePlayMode())
//        cout << "\nPlay mode is not beamable!";

    beamX = -0.18758631052473101;
    beamY = -0.025;
    beamAngle = 0;
}
//AI lab Hoseini 95-07-02 end


SkillType NaoBehavior::selectSkill()
{
    static double start = 0.0;
    if(worldModel->getPlayMode() == PM_BEFORE_KICK_OFF)
    {        
        start = worldModel->getTime();        
    }
    double current = worldModel->getTime();    
    if(worldModel->getPlayMode() == PM_PLAY_ON &&
       //current - start > beamTime && This line is commented so that the robot will stand on its feet after gazebo playmode reset
            skills[SKILL_MOTION_EDITOR]->getNumberOfKeyframes() > 0)
    {        
        return SKILL_MOTION_EDITOR;
    }    
    return SKILL_STAND;
}
