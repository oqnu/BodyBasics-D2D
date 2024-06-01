#pragma once
#include "stdafx.h"
#include "BodyBasics.h"

class PoseDetect: public CBodyBasics
{
public:
	PoseDetect() {}

	bool detect();

	int Run(HINSTANCE hInstance, int nCmdShow);


private:

};

