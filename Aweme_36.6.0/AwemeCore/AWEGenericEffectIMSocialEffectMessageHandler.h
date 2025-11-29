@protocol ACCResourcesUploadServiceProtocol;

@interface AWEGenericEffectIMSocialEffectMessageHandler : AWEGenericEffectMessageBaseHandler

@property (retain, nonatomic) id<ACCResourcesUploadServiceProtocol> resourceUploader;

- (id)bizIdentifier;
- (id)imModel;
- (id)parseUserInfoFromJsonString:(id)a0;
- (BOOL)canHandle:(id)a0 arg3Info:(id)a1;
- (void)handleMessage:(id)a0 arg3Info:(id)a1 isGlobal:(id)a2;
- (void)p_imageCachePathWithUrl:(id)a0 completion:(id /* block */)a1;
- (void)p_handleUserInfoWithTaskId:(long long)a0 arg3Info:(id)a1 isGlobal:(id)a2;
- (void)p_handleRelationshipInfoWithTaskId:(long long)a0 isGlobal:(id)a1;
- (void)p_handleSparkWithTaskId:(long long)a0 isGlobal:(id)a1;
- (void)p_handleBurningManWithTaskId:(long long)a0 isGlobal:(id)a1;
- (void)p_handleEffectUGCDataWithTaskId:(long long)a0 isGlobal:(id)a1;
- (void)p_handleRandomGroupMemberWithTaskId:(long long)a0 arg3Info:(id)a1 isGlobal:(id)a2;
- (void)p_handleGroupInfoWithTaskId:(long long)a0 isGlobal:(id)a1;
- (void)p_handleConversationIdWithTaskId:(long long)a0 isGlobal:(id)a1;
- (id)p_genderTransition:(long long)a0;
- (id)p_genderType:(id)a0;
- (id)deepCopyRequestModel:(id)a0;
- (id)parseUgcIdFromJsonString:(id)a0;
- (id)p_transferUgcId:(id)a0;
- (id)p_parseSceneFromJsonString:(id)a0;
- (void)p_fetchAndDownloadEffectUGCWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
