// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"
/**
 * 
 */
UCLASS();
class AI_API URWTextFile : public UBlueprintFunctionLibrary
{
    GENERATED_BODY() public:
    
    UFUNCTION(BlueprintPure, Category = "Custom", meta = (Keywords = "LoadTxt"))
        static bool LoadTxt(FString FileNameA, FString& SaveTextA);
    
    UFUNCTION(Blueprint, Category = "Custom", meta = (Keywords = "SaveTxt"))
    static bool SaveTxt(FString SaveTextA, FString FileNameA);
	
};
