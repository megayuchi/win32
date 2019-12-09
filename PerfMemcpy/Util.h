#pragma once

inline DWORD64 GetClockCounter()
{
#if defined (ARM64)
	DWORD64 CurClock = _ReadStatusReg(ARM64_PMCCNTR_EL0);
#else
	DWORD64 CurClock = __rdtsc();
#endif
	return CurClock;
}