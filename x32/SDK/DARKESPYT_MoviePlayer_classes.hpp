#pragma once

// BGMI [3.4.0] x64 SDK Generated by @DARKESPYT - @USIR_DIED_REAL


namespace SDK
{
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------
//Classes
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------

// Class MoviePlayer.MoviePlayerSettings
// 0x001C (0x0038 - 0x001C)
class UMoviePlayerSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FString>                             bMoviesAreSkippable;                                      // 0x0020(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             StartupMovies;                                            // 0x002C(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MoviePlayer.MoviePlayerSettings");
		return pStaticClass;
	}

};


}

//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT