#pragma once

// BGMI [3.4.0] x64 SDK Generated by @DARKESPYT - @USIR_DIED_REAL

namespace SDK
{
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------
//Classes
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------

// Class HelpshiftUE4.HelpshiftUE4Settings
// 0x0048 (0x0070 - 0x0028)
class UHelpshiftUE4Settings : public UObject
{
public:
	struct FString                                     APIKey;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DomainName;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     AppID_iOS;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     AppID_Android;                                            // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               FirebaseIntegration;                                      // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableLogging;                                            // 0x0069(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x006A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class HelpshiftUE4.HelpshiftUE4Settings");
		return pStaticClass;
	}

};


}

//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT