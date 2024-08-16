// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cy_InstancedStruct.h"

#define LOCTEXT_NAMESPACE "FCy_InstancedStructModule"

void FCy_InstancedStructModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FCy_InstancedStructModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCy_InstancedStructModule, Cy_InstancedStruct)