@interface BDPAppVideoPublishHandler : NSObject

+ (id)shareHandler;

- (long long)validStartIndex:(long long)a0;
- (void)handleBCTypeWithResult:(id)a0 uniqueID:(id)a1;
- (BOOL)isPoiInfoValid:(id)a0;
- (void)promiseLoginWithAppID:(id)a0 completion:(id /* block */)a1;
- (id)setAnchorDismissWithExtraParams:(id)a0;
- (id)checkVideoPathWithModel:(id)a0 uniqueID:(id)a1;
- (id)findAnchorType:(id)a0 error:(id *)a1;
- (id)checkAnchorInfoValid:(id)a0 spuId:(id)a1 poiInfo:(id)a2;
- (id)getBlockList:(id)a0;
- (id)generateModelWithParam:(id)a0 uniqueID:(id)a1;
- (void)videoSceneGetUserInfo:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)videoSceneRequestServerAndCheckModel:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)updateModelMentionNickName:(id)a0 nicknameInfo:(id)a1;
- (void)updateModelMentionUid:(id)a0 openID:(id)a1 uid:(id)a2;
- (void)updateModelBeforeRequest:(id)a0 uniqueID:(id)a1;
- (id)parseErrorWithError:(id)a0 query:(id)a1;
- (BOOL)videoSceneShouldShowBlockToast:(id)a0 serverError:(id)a1;
- (void)videoSceneCheckComplete:(id)a0 error:(id)a1 uniqueID:(id)a2 callback:(id /* block */)a3;
- (void)showUserBlockedToastWithUniqueID:(id)a0 videoPublishModel:(id)a1 actionCompletion:(id /* block */)a2;
- (id)checkModelAfterRequest:(id)a0 originStickerID:(id)a1 originCutID:(id)a2;
- (void)trackEventVideoPublishFail:(id)a0 error:(id)a1 errorType:(id)a2 additionalInfo:(id)a3 model:(id)a4;
- (void)videoSceneLaunch:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (id)getPOIAnchorAttachError:(id)a0;
- (void)videoSceneCompletedWithModel:(id)a0 uniqueID:(id)a1 result:(long long)a2 error:(id)a3 info:(id)a4 callback:(id /* block */)a5;
- (void)videoMountLaunch:(id)a0 serverError:(id)a1 ignoreMission:(BOOL)a2 uniqueID:(id)a3 callback:(id /* block */)a4;
- (id)videoMountErrorWithModel:(id)a0 andError:(id)a1;
- (void)trackEventForUserBlockedToast:(id)a0 model:(id)a1;
- (id)getVideoPermissionABWithModel:(id)a0;
- (void)clearInvalidMentions:(id)a0;
- (void)addMissionInfoWithModel:(id)a0 uniqueID:(id)a1;
- (id)getCustomStickersInput:(id)a0 uniqueId:(id)a1;
- (id)getTextStickersInput:(id)a0 uniqueId:(id)a1;
- (id)getMentionStickersInput:(id)a0 uniqueId:(id)a1;
- (id)getMentionMarks:(id)a0 uniqueId:(id)a1;
- (id)getHashTagStickersInput:(id)a0 uniqueId:(id)a1;
- (id)getHashtagMarkers:(id)a0 uniqueId:(id)a1;
- (void)handleVideoScene:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)handleVideoMountWithParams:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;

@end
