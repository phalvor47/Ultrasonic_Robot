#Arduino

This is Loren and Heming's wiki page for our Ultrasonic Robot project.
Our goal of our project is to create a booby trap. It will detect the object/person and turn on an LED. If the object/person countiues to come closer, it will fire an object.

A problem we may have is the ability for a servo to fire an object.
The solution to this problem is having a stationary object in the front and a removable object in the back. A rubber band will then be wrapped around them. Once the servo activates, it will hit the removable object which realises the tension of the rubber band.

Ultrasonic Booby Trap
Description of our project: Our Ultrasonic Robot project will be a booby trap. The ultrasonic sensor will sense an object and will fire a rubber band. The rubber band is connected to a servo and a hook or another object. When the ultrasonic sensor detects an object in motion, the servo will release the tension of the rubber band and fire it

Our problems and goals: 
The problem our project is trying to solve is that someone keeps on eating in the Sigma lab. Mr. H wants us to stop this degenerate. Our goal is to make a booby trap that has two modes to catch the culprit: hand-held and booby trap. 


Last part: Which solution did you go with, and why?
We went with a rubber band thrower because it is a semi-harmless trap. It will only sting the person and ward them off.
Criteria and Constraints:
Our criteria for our project is it must be easily relodable and able to be in pistol mode or trap mode. It must fire the rubber band by itself.

Our constraints are the size of the robot. It also must have two modes but not use too much material. It requires basically two different codes. It also needs to reliably read distances so that it can not false fire.
Solution: The solution to the firing problem is to follow the [Da Vinci Tank project](https://www.instructables.com/id/Shooting-Cardboard-Da-Vinci-Tank/). In this project, the makers directly attach the rubber band to the servo. This allows us to cut out other problems dealing with apparatuses firing the rubber band. We chose this solution because it is a simple, easy way to fire the rubber band.

Design sketches / images

![Planning image](media/Firstplan.png)

This picture shows our original plan of the robot and the explanation of how it works. The first picture depicts what the housing for the arduino and our original idea of how to fire the rubber band. The second drawing shows our revision to the firing of the rubber band. 

This is the plan for the hand-held mode. This is the second function for the project. One revision of this plan is that it will have a button or trigger that will fire the rubber band.

![Mechanism](Mechanism.gif)

Code:
If the switch is flipped it changes from booby trap to gun or gun to booby trap
In booby trap mode:
The ultrasonic sensor is sending a signal
If it picks up someone or something in a certain range a rubber band is fired
 
In gun mode:
When the trigger is pulled the rubber band fires
 
Materials we will need:
* An ultrasonic sensor (HC Sro4)
* A continuous micro servo (FS90R)                                                                                                                                                                              
* The Adafruit Metro
* Laser cut Acrylic
* 4-40 screws and nuts
* Multiple rubber bands
* Two panel mount SPDT switches
* A red LED
* Panel mount pushbutton switch
* 2 10kΩ resistor  
* 9 AAA batteries
* Prototyping shield
* 3D printing plastic 
* Battery holder
* 5 - 30 wires

 
Schedule(weekly updates)

| Week | What we will finish| What we can present |
|-----:|:------------------:|--------------------:|
| Week 1 | We will finish our final plan for the Ultrasonic Robot. Loren will start coding and wiring the Arduino. Heming will start the solidwork of the box | What we can present: The code and the plan. Loren will do the code while Heming finishes the plan |
| Week 2 | Loren will finish the coding while Heming will finish the box. We will then move onto make the servo holder as well as other various parts | What we can present: The coding and the barrel |
| Week 3 | Loren will finish up all the wiring and touch up the coding while Heming will start printing out the box. | What we can present: The fritzing, handle, and the servo mount |
| Week 4 | We will finish printing out the box and start putting it together. | What we can present: Final solidworks and mount |
| Week 5 | We will finish putting the box together | We will finish putting the box together |
