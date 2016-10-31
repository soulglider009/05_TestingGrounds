// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "Patrol_ThirdPersonCharacter.generated.h"

/**
 * 
 */
UCLASS()
class S05_TESTINGGROUNDS_API APatrol_ThirdPersonCharacter : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
	
public: //TODO remove or create Get function

	UPROPERTY(EditInstanceOnly, Category = "Patrol C++")
	TArray<AActor*> PatrolArray;

};
