// Fill out your copyright notice in the Description page of Project Settings.


#include "MutiplayerSessionsSystem.h"
#include "OnlineSubsystem.h"
#include "../../../../Developer/RiderLink/Source/RD/thirdparty/clsocket/src/ActiveSocket.h"

UMutiplayerSessionsSystem::UMutiplayerSessionsSystem():
	CreateSessionCompleteDelegate(FOnCreateSessionCompleteDelegate::CreateUObject(this,&ThisClass::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(FOnFindSessionsCompleteDelegate::CreateUObject(this,&ThisClass::OnFindSessionComplete)),
	JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this,&ThisClass::OnJoinSessionComplete)),
	DestroySessionCompleteDelegate(FOnDestroySessionCompleteDelegate::CreateUObject(this,&ThisClass::OnDestroySessionComplete)),
	StartSessionCompleteDelegate(FOnStartSessionCompleteDelegate::CreateUObject(this,&ThisClass::OnStartSessionComplete))
{
	IOnlineSubsystem* Subsystem=IOnlineSubsystem::Get();
	if(Subsystem)
	{
		SessionInterface=Subsystem->GetSessionInterface();
	}
}

void UMutiplayerSessionsSystem::CreateSession(int32 NumPublicConnections, FString MatchType)
{
}

void UMutiplayerSessionsSystem::FindSession(int32 MaxSearchResults)
{
}

void UMutiplayerSessionsSystem::JoinSession(const FOnlineSessionSearchResult& SessoinResult)
{
}

void UMutiplayerSessionsSystem::StartSession()
{
}

void UMutiplayerSessionsSystem::DestroySession()
{
}

void UMutiplayerSessionsSystem::OnCreateSessionComplete(FName SessionNamw, bool bWasSuccessful)
{
}

void UMutiplayerSessionsSystem::OnFindSessionComplete(bool bWasSuccessful)
{
}

void UMutiplayerSessionsSystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
}

void UMutiplayerSessionsSystem::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
}

void UMutiplayerSessionsSystem::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
}
