#include "PID.h"

using namespace std;

/*
* The PID class.
*/

PID::PID() : p_error(0), d_error(0), i_error(0) {}

PID::~PID() {}

void PID::Init(double _Kp, double _Ki, double _Kd) {
  
  Kp = _Kp;
  Ki = _Ki;
  Kd = _Kd;
  
}

void PID::UpdateError(double cte) {
  
  // the differential crosstrack error is given by cte(t) - cte(t-1)
  d_error = cte - p_error;

  // the proportional error is the current crosstrack error
  p_error = cte;
  
  // integrated crosstrack error is the sum of all previous crosstrack errors
  i_error += cte;
}

double PID::TotalError() {
  
  return (- Kp * p_error - Kd * d_error - Ki * i_error);
}

