// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InstancedStruct.h"
#include "Cy_InstancedStruct_Lib.generated.h"

/**
 * 
 */
UCLASS()
class CY_INSTANCEDSTRUCT_API UCy_InstancedStruct_Lib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	// Get Structure name set on intanced struct
	UFUNCTION(BlueprintCallable, Category = "Cy_InstancedStruct")
	static bool Cy_InstancedStruct_GetStructName( const FInstancedStruct& InstancedStruct , FName& StructName );

	// Filter instanced by Struct name array
	UFUNCTION(BlueprintCallable, Category = "Cy_InstancedStruct")
	static bool Cy_InstancedStruct_FilterStructName( const FInstancedStruct& InstancedStruct , const TArray<FName>& StructNameFilter , FName& StructName );

	
};
