// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"


UMyAnimInstance::UMyAnimInstance()
{
	JointTargetLeft = FVector(50.000000f, 217.502960f, -38.598057f);
	JointTargetRight = FVector(50.000000f, 217.000000f, 38.000000f);
}

void UMyAnimInstance::SetLeftFootEffectorLocation(FVector NewEffectorLocation)
{
	LeftFootEffectorLocation = NewEffectorLocation;
}

void UMyAnimInstance::SetRightFootEffectorLocation(FVector NewEffectorLocation)
{
	RightFootEffectorLocation = NewEffectorLocation;
}

void UMyAnimInstance::SetLeftFootAlpha(float NewAlpha)
{
	LeftFootAlpha = NewAlpha;
}

void UMyAnimInstance::SetRightFootAlpha(float NewAlpha)
{
	RightFootAlpha = NewAlpha;
}
