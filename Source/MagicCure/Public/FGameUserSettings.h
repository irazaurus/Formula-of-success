// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <algorithm>
#include "GameFramework/GameUserSettings.h"
#include "CoreMinimal.h"
#include "FGameUserSettings.generated.h"

/**
 * Settings Class with volume variables
 */
UCLASS()
class MAGICCURE_API UFGameUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static UFGameUserSettings* getFGameUserSettings();

	UFUNCTION(BlueprintCallable)
	void setMusicVolume(float newVolume);

	UFUNCTION(BlueprintCallable)
	void setSoundVolume(float newVolume);

	UFUNCTION(BlueprintPure)
	float getMusicVolume() const;

	UFUNCTION(BlueprintPure)
	float getSoundVolume() const;

protected:
	UPROPERTY(Config)
	float musicVolume;

	UPROPERTY(Config)
	float soundVolume;
};
