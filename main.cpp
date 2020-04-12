#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: car
//  action 1: the car burns gas
car.burnGas();
//  action 2: the car iluminates the road
car.iluminateRoad();
//  action 3: the car transports
car.transport();
//  2)
//  Noun: radio
//  action 1: the radio plays
radio.play();
//  action 2: the radio tunes in
radio.tunein();
//  action 3: the radio amplifies the signal
radio.amplifySignal();
//  3)
//  Noun: cat
//  action 1: the cat eats
cat.eat();
//  action 2: the cat drinks
cat.drink();
//  action 3: the cat spleeps
cat.sleep();
//  4)
//  Noun: tree
//  action 1: the tree grows
tree.grow();
//  action 2: the tree produces flowers
tree.produceFlower();
//  action 3: the tree produces fruits
tree.produceFruit();
//  5)
//  Noun: bird
//  action 1: the bird flies
bird.fly();
//  action 2: the bird sings
bird.sing();
//  action 3: the birt eats worms
bird.eatWorm;
//  6)
//  Noun: cellphone
//  action 1: the cellphone vibrates
cellphone.vibrate();
//  action 2: the cellphone rings
cellphone.ring();
//  action 3: the cellphone illuminates
cellphone.illuminate();
//  7)
//  Noun: television
//  action 1: the television shows images
television.showImage();
//  action 2: the television plays sounds
television.playSound();
//  action 3: the television tunes satellite signals
television.tuneSatelliteSignal();
//  8)
//  Noun: clock
//  action 1: the clock strikes the hour
clock.strikeHour();
//  action 2: the clock sounds the alarm
clock.soundAlarm();
//  action 3: the clock illuminates
clock.illuminates();
//  9)
//  Noun: stove
//  action 1: the stove heats food
stove.heatFood();
//  action 2: the stove produces fire
stove.produceFire();
//  action 3: the stove consumes gas
stove.consumeGas();
//  10)
//  Noun: calculator
//  action 1: the calculator adds
calculator.add();
//  action 2: the calculator divides
calculator.divide();
//  action 3: the calculator multiplies
calculator.muliply();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
