// Fill out your copyright notice in the Description page of Project Settings.


#include "Menu.h"
#include "Components/Button.h"
#include "MutiplayerSessionsSystem.h"

void UMenu::MenuSetup(int32 NumOfPublicConnections, FString TypeOfMatch)
{
	NumPublicConnections=NumOfPublicConnections;
	MatchType=TypeOfMatch;
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	bIsFocusable=true;
	UWorld* World=GetWorld();
	if(World)
	{
		APlayerController* PlayerController=World->GetFirstPlayerController();
		if(PlayerController)
		{
			FInputModeUIOnly InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}
	UGameInstance* GameInstance=GetGameInstance();
	if(GameInstance)
	{
		MutiplayerSessionsSystem = GameInstance->GetSubsystem<UMutiplayerSessionsSystem>();
	}
}

bool UMenu::Initialize()
{
	
	if(!Super::Initialize())
	{
		return false;
	}
	if(HostButton)
	{
		HostButton->OnClicked.AddDynamic(this,&ThisClass::HostButtonClicked);	
	}
	if(JoinButton)
	{
		JoinButton->OnClicked.AddDynamic(this,&ThisClass::JoinButtonClicked);
	}
	return true;
}

void UMenu::OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld)
{
	MenuTearDown();
	Super::OnLevelRemovedFromWorld(InLevel, InWorld);
}

void UMenu::HostButtonClicked()
{
	if(MutiplayerSessionsSystem)
	{
		MutiplayerSessionsSystem->CreateSession(NumPublicConnections,MatchType);
		UWorld* World=GetWorld();
		if(World)
		{
			World->ServerTravel((FString("/Game/Map/Lobby?listen")));
		}
	}
}

void UMenu::JoinButtonClicked()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			15.f,
			FColor::Blue,
			FString::Printf(TEXT("Join"))
		);
	};
}

//remove Menn and allow player control
void UMenu::MenuTearDown()
{
	RemoveFromParent();
	UWorld* World=GetWorld();
	if(World)
	{
		APlayerController* PlayerController=World->GetFirstPlayerController();
		if(PlayerController)
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}
