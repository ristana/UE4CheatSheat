// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BallTrackerWidget.generated.h"

/**
 * 
 */
UCLASS()
class UBallTrackerWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UBallTrackerWidget(const FObjectInitializer& ObjectInitializer);
	
protected:

	// preconstruct override
	void NativePreConstruct() override;
	
	// Event Construct override
	void NativeConstruct() override;
	
	//tick override
	void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
};
