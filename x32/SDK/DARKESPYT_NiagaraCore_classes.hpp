#pragma once

// BGMI [3.4.0] x64 SDK Generated by @DARKESPYT - @USIR_DIED_REAL


namespace SDK
{
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------
//Classes
//----------------------------- | JOIN FOR MORE : @DARKESPYT |-----------------------------

// Class NiagaraCore.NiagaraMergeable
// 0x0004 (0x0020 - 0x001C)
class UNiagaraMergeable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
		return pStaticClass;
	}

};


// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (0x0020 - 0x0020)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		return pStaticClass;
	}

};


}

//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
//JOIN HERE : @DARKESPYT
