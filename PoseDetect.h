#pragma once
#include "stdafx.h"
#include "BodyBasics.h"

class PoseDetect: public CBodyBasics
{
public:
	PoseDetect() {}

	bool detect();

protected:
	void Update() override;

	void remapPoint();

private:
	D2D1_POINT_2F _jointPoints[JointType_Count] = {};

};

