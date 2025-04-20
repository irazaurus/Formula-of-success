// Fill out your copyright notice in the Description page of Project Settings.


#include "FGameUserSettings.h"

UFGameUserSettings* UFGameUserSettings::getFGameUserSettings()
{
	return Cast<UFGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

void UFGameUserSettings::setMusicVolume(float newVolume)
{
	newVolume = std::max(0.f, std::min(newVolume, 100.f));
	musicVolume = newVolume;
}

void UFGameUserSettings::setSoundVolume(float newVolume)
{
	newVolume = std::max(0.f, std::min(newVolume, 100.f));
	soundVolume = newVolume;
}

float UFGameUserSettings::getMusicVolume() const
{
	return musicVolume;
}

float UFGameUserSettings::getSoundVolume() const
{
	return soundVolume;
}

UFGameUserSettings::UFGameUserSettings(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
	musicVolume = 50.f;
	soundVolume = 50.f;
}

