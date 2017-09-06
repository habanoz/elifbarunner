// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ELIFBAGAME_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public :
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "MyBlueprintLibrary")
	static FString GetTestMessage();

};
