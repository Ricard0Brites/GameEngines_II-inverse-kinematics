// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class GE_F2_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
protected:
	/** Left foot effector location */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = IK, meta = (BlueprintProtected = true))
		FVector LeftFootEffectorLocation;
	/** Joint target left */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = IK, meta = (BlueprintProtected = true))
		FVector JointTargetLeft;
	/** Left foot alpha */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = IK, meta = (BlueprintProtected = true))
		float LeftFootAlpha;
	/** Right foot effector location */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = IK, meta = (BlueprintProtected = true))
		FVector RightFootEffectorLocation;
	/** Joint target right */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = IK, meta = (BlueprintProtected = true))
		FVector JointTargetRight;
	/** Right foot alpha */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = IK, meta = (BlueprintProtected = true))
		float RightFootAlpha;
public:
	UMyAnimInstance();
	void SetLeftFootEffectorLocation(FVector NewEffectorLocation);
	void SetRightFootEffectorLocation(FVector NewEffectorLocation);
	void SetLeftFootAlpha(float NewAlpha);
	void SetRightFootAlpha(float NewAlpha);
};
