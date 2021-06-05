/**

Ball bearing HUD for Metal in Motion.

Original author: Rob Baker.
Current maintainer: Rob Baker.

*********************************************************************************/

#include "BallBearingHUD.h"
#include "PlayerBallBearing.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

/**
 *Constructor
 */
ABallBearingHUD::ABallBearingHUD()
{
	ConstructorHelpers::FClassFinder<UUserWidget> MainUIClassFinder(TEXT("/Game/MetalInMotion/UI/WBP_Main_UI"));
	MainUIClass = MainUIClassFinder.Class;
}



/**
BeginPlay
*********************************************************************************/
void ABallBearingHUD::BeginPlay()
{
	/**
	 *This method uses BP class defaults to set the BP we want to spawn from the BP itself
	 *
	if (MainUIClass)
	{
		Main_UI = CreateWidget<UUserWidget>(UGameplayStatics::GetPlayerController(GetWorld(), 0), MainUIClass);
	}
	if (Main_UI)
	{
		Main_UI->AddToViewport();
	}
	*/

	if (MainUIClass)
	{
		Main_UI = CreateWidget<UUserWidget>(UGameplayStatics::GetPlayerController(GetWorld(), 0), MainUIClass);
	}
	if (Main_UI)
	{
		Main_UI->AddToViewport();
	}
}



/**
Draw the HUD.
*********************************************************************************/

void ABallBearingHUD::DrawHUD()
{
	Super::DrawHUD();

	APlayerBallBearing* ballBearing = Cast<APlayerBallBearing>(GetOwningPawn());

	if (ballBearing != nullptr)
	{
		AddBool(L"In contact", ballBearing->InContact);
		AddFloat(L"Speed", ballBearing->GetVelocity().Size() / 100.0f);
		AddFloat(L"Dash timer", ballBearing->DashTimer);
		AddFloat(L"Input latitude", ballBearing->InputLatitude);
		AddFloat(L"Input longitude", ballBearing->InputLongitude);
	}
}
