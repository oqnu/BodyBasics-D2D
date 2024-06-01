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

private:

};

