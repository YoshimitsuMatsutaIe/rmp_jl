#include "jry_1.h"
#include <math.h>

void jry_1(double *q, double *out_5858232222592542800) {

   out_5858232222592542800[0] = sin(q[0])*sin(q[1]) - cos(q[0])*cos(q[1]);
   out_5858232222592542800[1] = sin(q[0])*sin(q[1]) - cos(q[0])*cos(q[1]);
   out_5858232222592542800[2] = 0;
   out_5858232222592542800[3] = 0;
   out_5858232222592542800[4] = -sin(q[0])*cos(q[1]) - sin(q[1])*cos(q[0]);
   out_5858232222592542800[5] = -sin(q[0])*cos(q[1]) - sin(q[1])*cos(q[0]);
   out_5858232222592542800[6] = 0;
   out_5858232222592542800[7] = 0;

}