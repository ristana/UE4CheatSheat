/**

Ball bearing HUD for Metal in Motion.

Original author: Rob Baker.
Current maintainer: Rob Baker.

*********************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DebugHUD.h"
#include "Blueprint/UserWidget.h"
#include "BallBearingHUD.generated.h"


/**
Ball bearing HUD for Metal in Motion.
*********************************************************************************/

UCLASS()
class METALINMOTION_API ABallBearingHUD : public ADebugHUD
{
	GENERATED_BODY()

public:
	ABallBearingHUD();

	/**
	 *This method uses BP class defaults to set the BP we want to spawn from the BP itself
	 *
	// dynamic ref to BP class set in the BP class defaults
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> MainUIClass;

	//hold the widget after creation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	UUserWidget* Main_UI;
	*/
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UUserWidget> MainUIClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	UUserWidget* Main_UI;

protected:

	// Draw the HUD.
	virtual void DrawHUD() override;

	// Beginplay
	virtual void BeginPlay() override;
	
};
