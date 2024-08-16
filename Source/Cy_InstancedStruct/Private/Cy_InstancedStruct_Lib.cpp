// Fill out your copyright notice in the Description page of Project Settings.


#include "Cy_InstancedStruct_Lib.h"

// ----------------------------------------------------
bool UCy_InstancedStruct_Lib::Cy_InstancedStruct_GetStructName( const FInstancedStruct& InstancedStruct , FName& StructName )
{
	if (const UScriptStruct* ScriptStruct = InstancedStruct.GetScriptStruct())
	{
		StructName = *ScriptStruct->GetName();
		return true;
	}
	return false;
}
// ----------------------------------------------------
bool UCy_InstancedStruct_Lib::Cy_InstancedStruct_FilterStructName( const FInstancedStruct& InstancedStruct , const TArray<FName>& StructNameFilter , FName& StructName )
{
	if ( Cy_InstancedStruct_GetStructName(InstancedStruct , StructName) )
	{
		if ( StructNameFilter.Contains(StructName) )
		{
			return true;
		}
	}
	return false;
}