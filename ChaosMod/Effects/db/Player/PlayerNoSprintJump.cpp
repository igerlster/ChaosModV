#include <stdafx.h>

static void OnTick()
{
	DISABLE_CONTROL_ACTION(0, 21, true);
	DISABLE_CONTROL_ACTION(0, 22, true);
}

static RegisterEffect registerEffect(EFFECT_NO_SPRINT_JUMP, nullptr, nullptr, OnTick);