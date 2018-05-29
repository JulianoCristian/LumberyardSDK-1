#pragma once

#include <PlayFabServerSdk/PlayFabError.h>
#include <PlayFabServerSdk/PlayFabAdminDataModels.h>
#include <PlayFabServerSdk/PlayFabHttp.h>

namespace PlayFabServerSdk
{
    class PlayFabAdminApi
    {
    public:

        // ------------ Generated Api calls
        static void AbortTaskInstance(AdminModels::AbortTaskInstanceRequest& request, ProcessApiCallback<AdminModels::EmptyResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void AddNews(AdminModels::AddNewsRequest& request, ProcessApiCallback<AdminModels::AddNewsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void AddPlayerTag(AdminModels::AddPlayerTagRequest& request, ProcessApiCallback<AdminModels::AddPlayerTagResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void AddServerBuild(AdminModels::AddServerBuildRequest& request, ProcessApiCallback<AdminModels::AddServerBuildResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void AddUserVirtualCurrency(AdminModels::AddUserVirtualCurrencyRequest& request, ProcessApiCallback<AdminModels::ModifyUserVirtualCurrencyResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void AddVirtualCurrencyTypes(AdminModels::AddVirtualCurrencyTypesRequest& request, ProcessApiCallback<AdminModels::BlankResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void BanUsers(AdminModels::BanUsersRequest& request, ProcessApiCallback<AdminModels::BanUsersResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void CheckLimitedEditionItemAvailability(AdminModels::CheckLimitedEditionItemAvailabilityRequest& request, ProcessApiCallback<AdminModels::CheckLimitedEditionItemAvailabilityResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void CreateActionsOnPlayersInSegmentTask(AdminModels::CreateActionsOnPlayerSegmentTaskRequest& request, ProcessApiCallback<AdminModels::CreateTaskResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void CreateCloudScriptTask(AdminModels::CreateCloudScriptTaskRequest& request, ProcessApiCallback<AdminModels::CreateTaskResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void CreatePlayerSharedSecret(AdminModels::CreatePlayerSharedSecretRequest& request, ProcessApiCallback<AdminModels::CreatePlayerSharedSecretResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void CreatePlayerStatisticDefinition(AdminModels::CreatePlayerStatisticDefinitionRequest& request, ProcessApiCallback<AdminModels::CreatePlayerStatisticDefinitionResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void DeleteContent(AdminModels::DeleteContentRequest& request, ProcessApiCallback<AdminModels::BlankResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void DeleteMasterPlayerAccount(AdminModels::DeleteMasterPlayerAccountRequest& request, ProcessApiCallback<AdminModels::DeleteMasterPlayerAccountResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void DeletePlayer(AdminModels::DeletePlayerRequest& request, ProcessApiCallback<AdminModels::DeletePlayerResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void DeletePlayerSharedSecret(AdminModels::DeletePlayerSharedSecretRequest& request, ProcessApiCallback<AdminModels::DeletePlayerSharedSecretResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void DeleteStore(AdminModels::DeleteStoreRequest& request, ProcessApiCallback<AdminModels::DeleteStoreResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void DeleteTask(AdminModels::DeleteTaskRequest& request, ProcessApiCallback<AdminModels::EmptyResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void DeleteTitle(ProcessApiCallback<AdminModels::DeleteTitleResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ExportMasterPlayerData(AdminModels::ExportMasterPlayerDataRequest& request, ProcessApiCallback<AdminModels::ExportMasterPlayerDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetActionsOnPlayersInSegmentTaskInstance(AdminModels::GetTaskInstanceRequest& request, ProcessApiCallback<AdminModels::GetActionsOnPlayersInSegmentTaskInstanceResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetAllSegments(ProcessApiCallback<AdminModels::GetAllSegmentsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetCatalogItems(AdminModels::GetCatalogItemsRequest& request, ProcessApiCallback<AdminModels::GetCatalogItemsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetCloudScriptRevision(AdminModels::GetCloudScriptRevisionRequest& request, ProcessApiCallback<AdminModels::GetCloudScriptRevisionResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetCloudScriptTaskInstance(AdminModels::GetTaskInstanceRequest& request, ProcessApiCallback<AdminModels::GetCloudScriptTaskInstanceResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetCloudScriptVersions(ProcessApiCallback<AdminModels::GetCloudScriptVersionsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetContentList(AdminModels::GetContentListRequest& request, ProcessApiCallback<AdminModels::GetContentListResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetContentUploadUrl(AdminModels::GetContentUploadUrlRequest& request, ProcessApiCallback<AdminModels::GetContentUploadUrlResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetDataReport(AdminModels::GetDataReportRequest& request, ProcessApiCallback<AdminModels::GetDataReportResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetMatchmakerGameInfo(AdminModels::GetMatchmakerGameInfoRequest& request, ProcessApiCallback<AdminModels::GetMatchmakerGameInfoResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetMatchmakerGameModes(AdminModels::GetMatchmakerGameModesRequest& request, ProcessApiCallback<AdminModels::GetMatchmakerGameModesResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayedTitleList(AdminModels::GetPlayedTitleListRequest& request, ProcessApiCallback<AdminModels::GetPlayedTitleListResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayerIdFromAuthToken(AdminModels::GetPlayerIdFromAuthTokenRequest& request, ProcessApiCallback<AdminModels::GetPlayerIdFromAuthTokenResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayerProfile(AdminModels::GetPlayerProfileRequest& request, ProcessApiCallback<AdminModels::GetPlayerProfileResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayerSegments(AdminModels::GetPlayersSegmentsRequest& request, ProcessApiCallback<AdminModels::GetPlayerSegmentsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayerSharedSecrets(ProcessApiCallback<AdminModels::GetPlayerSharedSecretsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayersInSegment(AdminModels::GetPlayersInSegmentRequest& request, ProcessApiCallback<AdminModels::GetPlayersInSegmentResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayerStatisticDefinitions(ProcessApiCallback<AdminModels::GetPlayerStatisticDefinitionsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayerStatisticVersions(AdminModels::GetPlayerStatisticVersionsRequest& request, ProcessApiCallback<AdminModels::GetPlayerStatisticVersionsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPlayerTags(AdminModels::GetPlayerTagsRequest& request, ProcessApiCallback<AdminModels::GetPlayerTagsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPolicy(AdminModels::GetPolicyRequest& request, ProcessApiCallback<AdminModels::GetPolicyResponse> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetPublisherData(AdminModels::GetPublisherDataRequest& request, ProcessApiCallback<AdminModels::GetPublisherDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetRandomResultTables(AdminModels::GetRandomResultTablesRequest& request, ProcessApiCallback<AdminModels::GetRandomResultTablesResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetServerBuildInfo(AdminModels::GetServerBuildInfoRequest& request, ProcessApiCallback<AdminModels::GetServerBuildInfoResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetServerBuildUploadUrl(AdminModels::GetServerBuildUploadURLRequest& request, ProcessApiCallback<AdminModels::GetServerBuildUploadURLResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetStoreItems(AdminModels::GetStoreItemsRequest& request, ProcessApiCallback<AdminModels::GetStoreItemsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetTaskInstances(AdminModels::GetTaskInstancesRequest& request, ProcessApiCallback<AdminModels::GetTaskInstancesResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetTasks(AdminModels::GetTasksRequest& request, ProcessApiCallback<AdminModels::GetTasksResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetTitleData(AdminModels::GetTitleDataRequest& request, ProcessApiCallback<AdminModels::GetTitleDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetTitleInternalData(AdminModels::GetTitleDataRequest& request, ProcessApiCallback<AdminModels::GetTitleDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserAccountInfo(AdminModels::LookupUserAccountInfoRequest& request, ProcessApiCallback<AdminModels::LookupUserAccountInfoResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserBans(AdminModels::GetUserBansRequest& request, ProcessApiCallback<AdminModels::GetUserBansResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserData(AdminModels::GetUserDataRequest& request, ProcessApiCallback<AdminModels::GetUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserInternalData(AdminModels::GetUserDataRequest& request, ProcessApiCallback<AdminModels::GetUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserInventory(AdminModels::GetUserInventoryRequest& request, ProcessApiCallback<AdminModels::GetUserInventoryResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserPublisherData(AdminModels::GetUserDataRequest& request, ProcessApiCallback<AdminModels::GetUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserPublisherInternalData(AdminModels::GetUserDataRequest& request, ProcessApiCallback<AdminModels::GetUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserPublisherReadOnlyData(AdminModels::GetUserDataRequest& request, ProcessApiCallback<AdminModels::GetUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GetUserReadOnlyData(AdminModels::GetUserDataRequest& request, ProcessApiCallback<AdminModels::GetUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void GrantItemsToUsers(AdminModels::GrantItemsToUsersRequest& request, ProcessApiCallback<AdminModels::GrantItemsToUsersResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void IncrementLimitedEditionItemAvailability(AdminModels::IncrementLimitedEditionItemAvailabilityRequest& request, ProcessApiCallback<AdminModels::IncrementLimitedEditionItemAvailabilityResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void IncrementPlayerStatisticVersion(AdminModels::IncrementPlayerStatisticVersionRequest& request, ProcessApiCallback<AdminModels::IncrementPlayerStatisticVersionResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ListServerBuilds(ProcessApiCallback<AdminModels::ListBuildsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ListVirtualCurrencyTypes(ProcessApiCallback<AdminModels::ListVirtualCurrencyTypesResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ModifyMatchmakerGameModes(AdminModels::ModifyMatchmakerGameModesRequest& request, ProcessApiCallback<AdminModels::ModifyMatchmakerGameModesResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ModifyServerBuild(AdminModels::ModifyServerBuildRequest& request, ProcessApiCallback<AdminModels::ModifyServerBuildResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RefundPurchase(AdminModels::RefundPurchaseRequest& request, ProcessApiCallback<AdminModels::RefundPurchaseResponse> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RemovePlayerTag(AdminModels::RemovePlayerTagRequest& request, ProcessApiCallback<AdminModels::RemovePlayerTagResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RemoveServerBuild(AdminModels::RemoveServerBuildRequest& request, ProcessApiCallback<AdminModels::RemoveServerBuildResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RemoveVirtualCurrencyTypes(AdminModels::RemoveVirtualCurrencyTypesRequest& request, ProcessApiCallback<AdminModels::BlankResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ResetCharacterStatistics(AdminModels::ResetCharacterStatisticsRequest& request, ProcessApiCallback<AdminModels::ResetCharacterStatisticsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ResetPassword(AdminModels::ResetPasswordRequest& request, ProcessApiCallback<AdminModels::ResetPasswordResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ResetUserStatistics(AdminModels::ResetUserStatisticsRequest& request, ProcessApiCallback<AdminModels::ResetUserStatisticsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void ResolvePurchaseDispute(AdminModels::ResolvePurchaseDisputeRequest& request, ProcessApiCallback<AdminModels::ResolvePurchaseDisputeResponse> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RevokeAllBansForUser(AdminModels::RevokeAllBansForUserRequest& request, ProcessApiCallback<AdminModels::RevokeAllBansForUserResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RevokeBans(AdminModels::RevokeBansRequest& request, ProcessApiCallback<AdminModels::RevokeBansResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RevokeInventoryItem(AdminModels::RevokeInventoryItemRequest& request, ProcessApiCallback<AdminModels::RevokeInventoryResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RevokeInventoryItems(AdminModels::RevokeInventoryItemsRequest& request, ProcessApiCallback<AdminModels::RevokeInventoryItemsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void RunTask(AdminModels::RunTaskRequest& request, ProcessApiCallback<AdminModels::RunTaskResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SendAccountRecoveryEmail(AdminModels::SendAccountRecoveryEmailRequest& request, ProcessApiCallback<AdminModels::SendAccountRecoveryEmailResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SetCatalogItems(AdminModels::UpdateCatalogItemsRequest& request, ProcessApiCallback<AdminModels::UpdateCatalogItemsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SetPlayerSecret(AdminModels::SetPlayerSecretRequest& request, ProcessApiCallback<AdminModels::SetPlayerSecretResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SetPublishedRevision(AdminModels::SetPublishedRevisionRequest& request, ProcessApiCallback<AdminModels::SetPublishedRevisionResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SetPublisherData(AdminModels::SetPublisherDataRequest& request, ProcessApiCallback<AdminModels::SetPublisherDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SetStoreItems(AdminModels::UpdateStoreItemsRequest& request, ProcessApiCallback<AdminModels::UpdateStoreItemsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SetTitleData(AdminModels::SetTitleDataRequest& request, ProcessApiCallback<AdminModels::SetTitleDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SetTitleInternalData(AdminModels::SetTitleDataRequest& request, ProcessApiCallback<AdminModels::SetTitleDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SetupPushNotification(AdminModels::SetupPushNotificationRequest& request, ProcessApiCallback<AdminModels::SetupPushNotificationResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void SubtractUserVirtualCurrency(AdminModels::SubtractUserVirtualCurrencyRequest& request, ProcessApiCallback<AdminModels::ModifyUserVirtualCurrencyResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateBans(AdminModels::UpdateBansRequest& request, ProcessApiCallback<AdminModels::UpdateBansResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateCatalogItems(AdminModels::UpdateCatalogItemsRequest& request, ProcessApiCallback<AdminModels::UpdateCatalogItemsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateCloudScript(AdminModels::UpdateCloudScriptRequest& request, ProcessApiCallback<AdminModels::UpdateCloudScriptResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdatePlayerSharedSecret(AdminModels::UpdatePlayerSharedSecretRequest& request, ProcessApiCallback<AdminModels::UpdatePlayerSharedSecretResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdatePlayerStatisticDefinition(AdminModels::UpdatePlayerStatisticDefinitionRequest& request, ProcessApiCallback<AdminModels::UpdatePlayerStatisticDefinitionResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdatePolicy(AdminModels::UpdatePolicyRequest& request, ProcessApiCallback<AdminModels::UpdatePolicyResponse> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateRandomResultTables(AdminModels::UpdateRandomResultTablesRequest& request, ProcessApiCallback<AdminModels::UpdateRandomResultTablesResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateStoreItems(AdminModels::UpdateStoreItemsRequest& request, ProcessApiCallback<AdminModels::UpdateStoreItemsResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateTask(AdminModels::UpdateTaskRequest& request, ProcessApiCallback<AdminModels::EmptyResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateUserData(AdminModels::UpdateUserDataRequest& request, ProcessApiCallback<AdminModels::UpdateUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateUserInternalData(AdminModels::UpdateUserInternalDataRequest& request, ProcessApiCallback<AdminModels::UpdateUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateUserPublisherData(AdminModels::UpdateUserDataRequest& request, ProcessApiCallback<AdminModels::UpdateUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateUserPublisherInternalData(AdminModels::UpdateUserInternalDataRequest& request, ProcessApiCallback<AdminModels::UpdateUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateUserPublisherReadOnlyData(AdminModels::UpdateUserDataRequest& request, ProcessApiCallback<AdminModels::UpdateUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateUserReadOnlyData(AdminModels::UpdateUserDataRequest& request, ProcessApiCallback<AdminModels::UpdateUserDataResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);
        static void UpdateUserTitleDisplayName(AdminModels::UpdateUserTitleDisplayNameRequest& request, ProcessApiCallback<AdminModels::UpdateUserTitleDisplayNameResult> callback = nullptr, ErrorCallback errorCallback = nullptr, void* customData = nullptr);

    private:
        // ------------ Private constructor, to enforce all-static class
        PlayFabAdminApi();

        // ------------ Generated result handlers
        static void OnAbortTaskInstanceResult(PlayFabRequest* request);
        static void OnAddNewsResult(PlayFabRequest* request);
        static void OnAddPlayerTagResult(PlayFabRequest* request);
        static void OnAddServerBuildResult(PlayFabRequest* request);
        static void OnAddUserVirtualCurrencyResult(PlayFabRequest* request);
        static void OnAddVirtualCurrencyTypesResult(PlayFabRequest* request);
        static void OnBanUsersResult(PlayFabRequest* request);
        static void OnCheckLimitedEditionItemAvailabilityResult(PlayFabRequest* request);
        static void OnCreateActionsOnPlayersInSegmentTaskResult(PlayFabRequest* request);
        static void OnCreateCloudScriptTaskResult(PlayFabRequest* request);
        static void OnCreatePlayerSharedSecretResult(PlayFabRequest* request);
        static void OnCreatePlayerStatisticDefinitionResult(PlayFabRequest* request);
        static void OnDeleteContentResult(PlayFabRequest* request);
        static void OnDeleteMasterPlayerAccountResult(PlayFabRequest* request);
        static void OnDeletePlayerResult(PlayFabRequest* request);
        static void OnDeletePlayerSharedSecretResult(PlayFabRequest* request);
        static void OnDeleteStoreResult(PlayFabRequest* request);
        static void OnDeleteTaskResult(PlayFabRequest* request);
        static void OnDeleteTitleResult(PlayFabRequest* request);
        static void OnExportMasterPlayerDataResult(PlayFabRequest* request);
        static void OnGetActionsOnPlayersInSegmentTaskInstanceResult(PlayFabRequest* request);
        static void OnGetAllSegmentsResult(PlayFabRequest* request);
        static void OnGetCatalogItemsResult(PlayFabRequest* request);
        static void OnGetCloudScriptRevisionResult(PlayFabRequest* request);
        static void OnGetCloudScriptTaskInstanceResult(PlayFabRequest* request);
        static void OnGetCloudScriptVersionsResult(PlayFabRequest* request);
        static void OnGetContentListResult(PlayFabRequest* request);
        static void OnGetContentUploadUrlResult(PlayFabRequest* request);
        static void OnGetDataReportResult(PlayFabRequest* request);
        static void OnGetMatchmakerGameInfoResult(PlayFabRequest* request);
        static void OnGetMatchmakerGameModesResult(PlayFabRequest* request);
        static void OnGetPlayedTitleListResult(PlayFabRequest* request);
        static void OnGetPlayerIdFromAuthTokenResult(PlayFabRequest* request);
        static void OnGetPlayerProfileResult(PlayFabRequest* request);
        static void OnGetPlayerSegmentsResult(PlayFabRequest* request);
        static void OnGetPlayerSharedSecretsResult(PlayFabRequest* request);
        static void OnGetPlayersInSegmentResult(PlayFabRequest* request);
        static void OnGetPlayerStatisticDefinitionsResult(PlayFabRequest* request);
        static void OnGetPlayerStatisticVersionsResult(PlayFabRequest* request);
        static void OnGetPlayerTagsResult(PlayFabRequest* request);
        static void OnGetPolicyResult(PlayFabRequest* request);
        static void OnGetPublisherDataResult(PlayFabRequest* request);
        static void OnGetRandomResultTablesResult(PlayFabRequest* request);
        static void OnGetServerBuildInfoResult(PlayFabRequest* request);
        static void OnGetServerBuildUploadUrlResult(PlayFabRequest* request);
        static void OnGetStoreItemsResult(PlayFabRequest* request);
        static void OnGetTaskInstancesResult(PlayFabRequest* request);
        static void OnGetTasksResult(PlayFabRequest* request);
        static void OnGetTitleDataResult(PlayFabRequest* request);
        static void OnGetTitleInternalDataResult(PlayFabRequest* request);
        static void OnGetUserAccountInfoResult(PlayFabRequest* request);
        static void OnGetUserBansResult(PlayFabRequest* request);
        static void OnGetUserDataResult(PlayFabRequest* request);
        static void OnGetUserInternalDataResult(PlayFabRequest* request);
        static void OnGetUserInventoryResult(PlayFabRequest* request);
        static void OnGetUserPublisherDataResult(PlayFabRequest* request);
        static void OnGetUserPublisherInternalDataResult(PlayFabRequest* request);
        static void OnGetUserPublisherReadOnlyDataResult(PlayFabRequest* request);
        static void OnGetUserReadOnlyDataResult(PlayFabRequest* request);
        static void OnGrantItemsToUsersResult(PlayFabRequest* request);
        static void OnIncrementLimitedEditionItemAvailabilityResult(PlayFabRequest* request);
        static void OnIncrementPlayerStatisticVersionResult(PlayFabRequest* request);
        static void OnListServerBuildsResult(PlayFabRequest* request);
        static void OnListVirtualCurrencyTypesResult(PlayFabRequest* request);
        static void OnModifyMatchmakerGameModesResult(PlayFabRequest* request);
        static void OnModifyServerBuildResult(PlayFabRequest* request);
        static void OnRefundPurchaseResult(PlayFabRequest* request);
        static void OnRemovePlayerTagResult(PlayFabRequest* request);
        static void OnRemoveServerBuildResult(PlayFabRequest* request);
        static void OnRemoveVirtualCurrencyTypesResult(PlayFabRequest* request);
        static void OnResetCharacterStatisticsResult(PlayFabRequest* request);
        static void OnResetPasswordResult(PlayFabRequest* request);
        static void OnResetUserStatisticsResult(PlayFabRequest* request);
        static void OnResolvePurchaseDisputeResult(PlayFabRequest* request);
        static void OnRevokeAllBansForUserResult(PlayFabRequest* request);
        static void OnRevokeBansResult(PlayFabRequest* request);
        static void OnRevokeInventoryItemResult(PlayFabRequest* request);
        static void OnRevokeInventoryItemsResult(PlayFabRequest* request);
        static void OnRunTaskResult(PlayFabRequest* request);
        static void OnSendAccountRecoveryEmailResult(PlayFabRequest* request);
        static void OnSetCatalogItemsResult(PlayFabRequest* request);
        static void OnSetPlayerSecretResult(PlayFabRequest* request);
        static void OnSetPublishedRevisionResult(PlayFabRequest* request);
        static void OnSetPublisherDataResult(PlayFabRequest* request);
        static void OnSetStoreItemsResult(PlayFabRequest* request);
        static void OnSetTitleDataResult(PlayFabRequest* request);
        static void OnSetTitleInternalDataResult(PlayFabRequest* request);
        static void OnSetupPushNotificationResult(PlayFabRequest* request);
        static void OnSubtractUserVirtualCurrencyResult(PlayFabRequest* request);
        static void OnUpdateBansResult(PlayFabRequest* request);
        static void OnUpdateCatalogItemsResult(PlayFabRequest* request);
        static void OnUpdateCloudScriptResult(PlayFabRequest* request);
        static void OnUpdatePlayerSharedSecretResult(PlayFabRequest* request);
        static void OnUpdatePlayerStatisticDefinitionResult(PlayFabRequest* request);
        static void OnUpdatePolicyResult(PlayFabRequest* request);
        static void OnUpdateRandomResultTablesResult(PlayFabRequest* request);
        static void OnUpdateStoreItemsResult(PlayFabRequest* request);
        static void OnUpdateTaskResult(PlayFabRequest* request);
        static void OnUpdateUserDataResult(PlayFabRequest* request);
        static void OnUpdateUserInternalDataResult(PlayFabRequest* request);
        static void OnUpdateUserPublisherDataResult(PlayFabRequest* request);
        static void OnUpdateUserPublisherInternalDataResult(PlayFabRequest* request);
        static void OnUpdateUserPublisherReadOnlyDataResult(PlayFabRequest* request);
        static void OnUpdateUserReadOnlyDataResult(PlayFabRequest* request);
        static void OnUpdateUserTitleDisplayNameResult(PlayFabRequest* request);
    };
};
