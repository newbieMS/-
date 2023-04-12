// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"
#include "MyCharacter.h"


void UMyAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	Player = TryGetPawnOwner();
}

void UMyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (IsValid(Player))
	{
		GroundSpeed = Player->GetVelocity().Size();
	}
}
