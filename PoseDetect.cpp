#include "PoseDetect.h"
#include <cmath>
#include <iostream>

/// <summary>
/// Entry point for the application
/// </summary>
/// <param name="hInstance">handle to the application instance</param>
/// <param name="hPrevInstance">always 0</param>
/// <param name="lpCmdLine">command line arguments</param>
/// <param name="nCmdShow">whether to display minimized, maximized, or normally</param>
/// <returns>status</returns>
int APIENTRY wWinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nShowCmd
)
{
    AllocConsole();
    FILE* stream;
    freopen_s(&stream, "CONOUT$", "w", stdout);
    freopen_s(&stream, "CONOUT$", "w", stderr);

    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    PoseDetect application;
    application.Run(hInstance, nShowCmd);
}

int PoseDetect::Run(HINSTANCE hInstance, int nCmdShow) {
    int res = CBodyBasics::Run(hInstance, nCmdShow);
    detect();
    return res;
}

bool PoseDetect::detect() {
	D2D1_POINT_2F shoulder = _jointPoints[JointType_ShoulderLeft];
	D2D1_POINT_2F elbow = _jointPoints[JointType_ElbowLeft];
	D2D1_POINT_2F wrist = _jointPoints[JointType_WristLeft];
	std::cout << fabs(elbow.y - shoulder.y);
	return false;
}
