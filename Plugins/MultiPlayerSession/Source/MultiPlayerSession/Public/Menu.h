// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Menu.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSION_API UMenu : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void MenuSetup();
protected:
	virtual bool Initialize() override;
	
private:
	UPROPERTY(meta=(BindWidget))//NEED same name with widget
	class UButton* HostButton;
	
	UPROPERTY(meta=(BindWidget))//differ will cause crush
	UButton* JoinButton;
	UFUNCTION()
	void HostButtonClicked();
	UFUNCTION()
	void JoinButtonClicked();

	class UMutiplayerSessionsSystem* MutiplayerSessionsSystem;
};
