// BGMI [3.4.0] x64 SDK Generated by @DARKESPYT - @USIR_DIED_REAL


#include "../SDK.hpp"

namespace SDK
{
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------
//Functions
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------

// Function LuaHotReload.LuaHotReloadHelper.OnLuaFileHotUpdate
// (Final, Native, Public)
// Parameters:
// struct FString                 NotifyMessage                  (Parm, ZeroConstructor)

void ULuaHotReloadHelper::OnLuaFileHotUpdate(const struct FString& NotifyMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function LuaHotReload.LuaHotReloadHelper.OnLuaFileHotUpdate");

	ULuaHotReloadHelper_OnLuaFileHotUpdate_Params params;
	params.NotifyMessage = NotifyMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
