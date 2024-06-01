#include "PoseDetect.h"
#include <cmath>
#include <iostream>

bool PoseDetect::detect() {
	D2D1_POINT_2F shoulder = _jointPoints[JointType_ShoulderLeft];
	D2D1_POINT_2F elbow = _jointPoints[JointType_ElbowLeft];
	D2D1_POINT_2F wrist = _jointPoints[JointType_WristLeft];
	std::cout << fabs(elbow.y - shoulder.y);
	return false;
}
