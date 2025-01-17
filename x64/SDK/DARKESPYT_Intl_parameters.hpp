#pragma once

// BGMI [3.4.0] x64 SDK Generated by @DARKESPYT - @USIR_DIED_REAL

#include "../SDK.hpp"

namespace SDK
{
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------
//Parameters
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------

// Function Intl.StatManager.ReportRevenue
struct UStatManager_ReportRevenue_Params
{
	int                                                InPurchaseEventType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InCurrencyCode;                                           // (Parm, ZeroConstructor)
	struct FString                                     InExpense;                                                // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               InParams;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function Intl.StatManager.ReportPurchase
struct UStatManager_ReportPurchase_Params
{
	int                                                InPurchaseEventType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InCurrencyCode;                                           // (Parm, ZeroConstructor)
	struct FString                                     InExpense;                                                // (Parm, ZeroConstructor)
	bool                                               isRealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Intl.StatManager.ReportEventWithString
struct UStatManager_ReportEventWithString_Params
{
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _eventBody;                                               // (Parm, ZeroConstructor)
	bool                                               isRealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Intl.StatManager.ReportEventWithParam
struct UStatManager_ReportEventWithParam_Params
{
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               _params;                                                  // (Parm, ZeroConstructor)
	bool                                               isRealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Intl.StatManager.ReportEventWithNoParam
struct UStatManager_ReportEventWithNoParam_Params
{
	int                                                EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isRealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Intl.StatManager.GetInstance
struct UStatManager_GetInstance_Params
{
	class UStatManager*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
