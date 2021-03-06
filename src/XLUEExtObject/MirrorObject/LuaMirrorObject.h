/********************************************************************
*
* =-----------------------------------------------------------------=
* =                                                                 =
* =             Copyright (c) Xunlei, Ltd. 2004-2013              =
* =                                                                 =
* =-----------------------------------------------------------------=
* 
*   FileName    :   LuaMirrorObject
*   Author      :   ������
*   Create      :   2013-5-26 3:27
*   LastChange  :   2013-5-26 3:27
*   History     :	
*
*   Description :   MirrorObject��lua��װ
*
********************************************************************/ 
#ifndef __LUAMIRROROBJECT_H__
#define __LUAMIRROROBJECT_H__

#include "./MirrorObject.h"

class LuaMirrorObject
	: public ExtObjLuaHostImpl<LuaMirrorObject, MirrorObject>
{
public:
	LuaMirrorObject(void);
	virtual ~LuaMirrorObject(void);

public:

	static MirrorObject::MirrorType GetMirrorTypeFromString(const char* lpType);
	static const char* GetMirrorTypeString(MirrorObject::MirrorType type);

private:

	static int SetMirrorType(lua_State* luaState);
	static int GetMirrorType(lua_State* luaState);

public:

	static XLLRTGlobalAPI s_szLuaMemberFuncs[];
};

#endif // __LUAMIRROROBJECT_H__