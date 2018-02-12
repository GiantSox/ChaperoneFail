#include "stdafx.h"
#include <iostream>
#include "openvr.h"
#include <Windows.h>

int main()
{
	vr::EVRInitError *eir = NULL;
	vr::VR_Init(eir, vr::EVRApplicationType::VRApplication_Other);


	while (true) {


		vr::HmdQuad_t *quad = NULL;
		auto chapSuccess = vr::VRChaperone()->GetPlayAreaRect(quad);
		std::cout << chapSuccess << std::endl;


		Sleep(1000);

	}




	return 0;
}

