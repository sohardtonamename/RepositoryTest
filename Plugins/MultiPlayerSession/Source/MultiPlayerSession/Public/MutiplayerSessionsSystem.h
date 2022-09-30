// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "MutiplayerSessionsSystem.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYERSESSION_API UMutiplayerSessionsSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UMutiplayerSessionsSystem();
	//provide function to be called
	void CreateSession(int32 NumPublicConnections,FString MatchType);
	void FindSession(int32 MaxSearchResults);
	void JoinSession(const FOnlineSessionSearchResult& SessoinResult);
	void StartSession();
	void DestroySession();
	
protected:
	//internal callbacks for these delegates'
	void OnCreateSessionComplete(FName SessionNamw,bool bWasSuccessful);
	void OnFindSessionComplete(bool bWasSuccessful);
	void OnJoinSessionComplete(FName SessionName,EOnJoinSessionCompleteResult::Type Result);
	void OnDestroySessionComplete(FName SessionName,bool bWasSuccessful);
	void OnStartSessionComplete(FName SessionName,bool bWasSuccessful);
	
private:
	IOnlineSessionPtr SessionInterface;
	TSharedPtr<FOnlineSessionSettings> LastSessionSettings;
	//delegates ready to be add to OnlineSessionInterfaceDelegateList
	//bind callbacks to these delegates
	FOnCreateSessionCompleteDelegate CreateSessionCompleteDelegate;
	//using Handle to remove delegate from delegate list
	FDelegateHandle CreateSessionCompleteDelegateHandle;
	FOnFindSessionsCompleteDelegate FindSessionsCompleteDelegate;
	FDelegateHandle FindSessionCompleteDelegateHandle;
	FOnJoinSessionCompleteDelegate JoinSessionCompleteDelegate;
	FDelegateHandle JoinSessionCompleteDelegateHandle;
	FOnDestroySessionCompleteDelegate DestroySessionCompleteDelegate;
	FDelegateHandle DestroySessionCompleteDelegateHandle;
	FOnStartSessionCompleteDelegate StartSessionCompleteDelegate;
	FDelegateHandle StartSessionCompleteDelegateHandle;
};
