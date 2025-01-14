#pragma once

// BGMI [3.4.0] x64 SDK Generated by @DARKESPYT - @USIR_DIED_REAL


namespace SDK
{
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------
//Enums
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------

// Enum CosHelper.ECosHelperFileInfoType
enum class ECosHelperFileInfoType : uint8_t
{
	ECosHelperFileInfoType__None   = 0,
	ECosHelperFileInfoType__ContentLength = 1,
	ECosHelperFileInfoType__ETag   = 2,
	ECosHelperFileInfoType__LastModifiedUtcTimestamp = 3,
	ECosHelperFileInfoType__ECosHelperFileInfoType_MAX = 4
};



//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------
//Script Structs
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------

// ScriptStruct CosHelper.CosHelperInitializeInfo
// 0x0044
struct FCosHelperInitializeInfo
{
	bool                                               bUseAuthorization;                                        // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SignExpirationTime;                                       // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AppID;                                                    // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     BucketName;                                               // 0x0014(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Region;                                                   // 0x0020(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SecretId;                                                 // 0x002C(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     SecretKey;                                                // 0x0038(0x000C) (BlueprintVisible, ZeroConstructor)
};

}

//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
