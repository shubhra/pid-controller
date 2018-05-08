## PID Control Project
In this projet the aim is to implement a PID controller in C++ to maneuver a vehicle around a simulated lake track. The simulator provides the cross track error (CTE) and the velocity (mph) in order to compute the appropriate steering angle

---

### Tuning the coefficients

The Kp, Ki and Kd coefficients were tuned using a manual trial and error method. First setting Kp to -1.0 and Ki and Kd to 0.0 and seeing how the car drives around the lake track. Here the car begins fine but starts to swerve left and right in increasing magnitude. Then slowly pull back the Kp value and and add to the Kd value to smooth out the turns a bit. Doing this progressively until we get to values that make the car drive relatively smoothly and the increasing the Ki values very minutely makes the car go around the track in a smooth fashion at an average speed of around 32 mph. The final values are
* Kp = 0.2
* Ki = 0.0004
* Kd = 3.0

The next step would be try out Twiddle or SGD or some other automative method of tuning these params for faster driving speeds.

### Video Result

The video result can be found [here](https://www.youtube.com/watch?v=yQKvuFybge0&t=18s)

### Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

Tips for setting up your environment can be found [here](https://classroom.udacity.com/nanodegrees/nd013/parts/40f38239-66b6-46ec-ae68-03afd8a601c8/modules/0949fca6-b379-42af-a919-ee50aa304e6a/lessons/f758c44c-5e40-4e01-93b5-1a82aa4e044f/concepts/23d376c7-0195-4276-bdf0-e02f1f3c665d)




