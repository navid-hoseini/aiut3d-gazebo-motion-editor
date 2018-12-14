## AIUT3D Motion Editor for Gazebo-robocup3ds

* This repository is an extension of our previous motion editor [1] for RoboCup 3D soccer simulation league developed by AIUT3D team. The previous version was meant to be used with Simspark. This repository contains the motion editor that works with Robocup3ds[2] plugin of Gazebo. It is based on UT Austin Villa base code [3].

* The motion editor can be used to design arbitrary key frame based motions for simulated Nao robot.

* Our editor might be useful for RoboCup 3D soccer simulation teams who wish to migrate to Gazebo-robocup3ds.

#### What has changed?
* Some portions of the code are modified to get it working with Gazebo robocup3d plugin.
* A new sample kick compatible with Gazebo-robocup3ds is provided in `/createdKicks/type0-gazebo-sample-kick.txt`

#### Build Requirements
* Tested on Ubuntu 14.04 LTS but it should work on 16.04 LTS as well.

* Please download the latest versions of simspark and rcssserver3d from:
http://robocup-sim.gitlab.io/SimSpark/downloads.html

  and install them according to:   
  https://gitlab.com/robocup-sim/SimSpark/wikis/Installation-on-Linux

* Please install qt5-default package:   
  `sudo apt-get install qt5-default`

* Please install Gazebo 7 according to:
 http://gazebosim.org/tutorials?tut=install_ubuntu&ver=7.0

* Please build Robocup3ds plugin from source according to:
 https://bitbucket.org/osrf/robocup3ds

#### Build
* cd to the motion editor root directory.
* Run the following commands in the terminal:

`cmake .`

`make`
#### Run
* Start Gazebo-robocup3ds plugin from the terminal:

  `:~$gazebo-robocup3ds`
* Set the play mode to `BeforeKickOff` via Gazebo
* Run the following command in an other terminal:

  `./motionEditor`
* Set Nao body type in the motion editor
* Set play mode to `PlayOn` via Gazebo.
* Now you can start your motion design.
* To add new keyframe to the list of keyframes, click
![add key frame button](./icon32x32/add-icon32x32.png) button.
* To remove a keyframe, select it from keyframes list and then click
![delete key frame button](./icon32x32/Close-2-icon32x32.png)
* To edit/play a single keyframe, just select it from the keyframes list by clicking it. After being selected, the keyframe effect can be observed via RoboViz. Moreover, you can edit the joint values for the selected keyframe.
* You can also play the keyframes successively from the beginning to the end by clicking
![play button](./icon32x32/play-icon-32x32.png)
* Buttons
![arrow up button](./icon32x32/Arrows-Up-icon32x32.png)
and
![arrow down button](./icon32x32/Arrows-Down-icon32x32.png)
are supposed to move a keyframe up or down in the keyframes list. But this feature is not implemented yet. So pressing these two button has no effect for now.
* `Auto Fall Recovery` checkbox specifies whether the robot should get up automatically in case of a fall or not. But due to some issues with accelerometer reading in Gazebo-robocup3ds, this feature is not working yet
* Button
<img src="./icon32x32/getup512x512.png" width="32"> is supposed to instruct the robot to get up in case it has fallen. But again due to some issues with accelerometer reading in Gazebo-robocup3ds, this feature is not working yet. So if the robot has fallen, just click the reset monitor so that the motion editor and Gazebo are reset to their initial state.

#### Motion file format
* The created motions will be saved in a text file. Each line of the file will represent the joint values (in degrees) for one keyframe and . The order of the saved values for one keyframe (one line of motion file) are as follows:
* t     // Keyframe execution time (milliseconds)
* he1   // Head yaw
* he2   // Head pitch
* lae1  // Left shoulder pitch
* lae2  // Left shoulder roll
* lae3  // Left elbow yaw
* lae4  // Left elbow roll
* lle1  // Left hip yaw-pitch
* lle2  // Left hip roll
* lle3  // Left hip pitch
* lle4  // Left knee pitch
* lle5  // Left ankle pitch
* lle6  // Left ankle roll
* rle1  // Right hip yaw-pitch
* rle2  // Right hip roll
* rle3  // Right hip pitch
* rle4  // Right knee pitch
* rle5  // Right ankle pitch
* rle6  // Right ankle roll
* rae1  // Right shoulder pitch
* rae2  // Right shoulder roll
* rae3  // Right elbow yaw
* rae4  // Right elbow roll
* lle7  // Left toe pitch
* rle7  // Right toe pitch

#### Sample kick motion
* A sample kick motion for Nao type 0 is availabe in `createdKicks` folder. After setting body type, the sample kick can be loaded by Ctrl+o shortcut or using `file` menu.README.md

#### User agreement
* If you use this code for research purposes, please consider citing the following paper:
  * Izadi, Navid Hoseini, Mohamad Roshanzamir, and Maziar Palhang. "AIUT3D motion editor for 3D soccer simulation compatible with SimSpark physics engine." (https://ieeexplore.ieee.org/abstract/document/8406628/)
  
  * Izadi, Navid Hoseini, Mohamad Roshanzamir, Mahdi Tajmir Riahi, Mahdi Abbasi, Seyed Yagoub Ashkoofaraz Soureshjani, Mohammad Amin Fahami, and Maziar Palhang. "AIUT3D 2017 Soccer Simulation 3D League Team Description Paper."(https://www.robocup2017.org/file/symposium/soccer_sim_3D/AIUT3D_TDP.pdf)
#### Contact
* If you have any questions, suggestions or bug report, please feel free to contact us:aiut3d@yahoo.com.

#### References
[1] https://github.com/AIUT3D/aiut3d-motion-editor  
[2] https://bitbucket.org/osrf/robocup3ds  
[3] https://github.com/LARG/utaustinvilla3d
