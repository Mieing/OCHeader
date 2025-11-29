@class NSString;

@interface IESIMStudioService : HTSService <IESIMStudioService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)available:(id /* block */)a0 unavailable:(id /* block */)a1;
- (Class)propDetailViewControllerClass;
- (BOOL)isPublishEnabled;
- (void)requestMusicItemWithID:(id)a0 completion:(id /* block */)a1;
- (BOOL)scanHomeFeedEntrance;
- (void)startIMAIEmojiCameraWithRepoIMModel:(id)a0 routerParams:(id)a1 completion:(id /* block */)a2;
- (void)requestPublishResultWithTaskID:(id)a0 completion:(id /* block */)a1;
- (void)generateLivePhotoPairedResourceWithVideoFilePath:(id)a0 imageFilePath:(id)a1 completion:(id /* block */)a2;
- (id)p_getCacheLoraProfileCacheInfo;
- (id)p_createTaskWithLoraID:(id)a0 stickerID:(id)a1 loraStyleID:(id)a2 shareTaskId:(long long)a3 participantCount:(long long)a4 imCallbackArgs:(id)a5;
- (id)fetchLoraProfileModel;
- (id)p_createAIProfileInitTaskWithStickerID:(id)a0 shareTaskId:(long long)a1 loraStyleID:(id)a2 participantCount:(long long)a3 imCallbackArgs:(id)a4 extra:(id)a5 enterCreateBlock:(id /* block */)a6;
- (id)p_participateInTask:(id)a0 stickerId:(id)a1 loraId:(id)a2 loraStyleID:(id)a3 shareTaskId:(long long)a4 imCallbackArgs:(id)a5 extra:(id)a6;
- (id)enterSelectAIJoinTask:(id)a0 stickerID:(id)a1 loraID:(id)a2 loraStyleID:(id)a3 shareTaskId:(long long)a4 imCallbackArgs:(id)a5 extra:(id)a6 enterCreateBlock:(id /* block */)a7;
- (id)p_createAIProfileJoinTask:(id)a0 stickerId:(id)a1 loraStyleID:(id)a2 shareTaskId:(long long)a3 imCallbackArgs:(id)a4 extra:(id)a5 enterCreateBlock:(id /* block */)a6;
- (id)p_selectLoraJoinTaskID:(id)a0 stickerId:(id)a1 loraStyleID:(id)a2 shareTaskId:(long long)a3 imCallbackArgs:(id)a4 extra:(id)a5 enterCreateBlock:(id /* block */)a6;
- (void)p_preloadLoraProfileModel:(id /* block */)a0;
- (id)modelAvatarWithGender:(id)a0;
- (void)exitTopFlowAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)startSelfieEmojiRecordWithExtraInfo:(id)a0 executeBlock:(id /* block */)a1;
- (long long)videoMessageTypeWithCameraPublishType:(unsigned long long)a0;
- (long long)imageMessageTypeWithCameraPublishType:(unsigned long long)a0;
- (BOOL)sourceLightCameraWithShootEnterType:(unsigned long long)a0;
- (void)startIMCustomEmojiEditWithFilePaths:(id)a0 didClickConfirm:(id /* block */)a1 completion:(id /* block */)a2;
- (id)getCacheLoraProfileCacheInfo;
- (void)refreshLoraProfileInfoResultBlock:(id /* block */)a0;
- (id)createAITaskWithStickerID:(id)a0 shareTaskId:(long long)a1 aiLoraId:(id)a2 loraStyleID:(id)a3 participantCount:(long long)a4 imCallbackArgs:(id)a5 extra:(id)a6 enterCreateBlock:(id /* block */)a7;
- (void)createAILoraIfNeedWithCompletion:(id /* block */)a0 extra:(id)a1;
- (id)participateInMultiPortrait:(id)a0 selectLora:(BOOL)a1 stickerId:(id)a2 loraStyleID:(id)a3 shareTaskId:(long long)a4 imCallbackArgs:(id)a5 extra:(id)a6 enterCreateBlock:(id /* block */)a7;
- (void)getSelectAILoraIDWithComplete:(id /* block */)a0 needEnterSelectPanel:(BOOL)a1 extra:(id)a2;
- (void)queryAITaskWithTaskID:(id)a0 conversationShortId:(id)a1 serverMsgId:(id)a2 onComplete:(id /* block */)a3;
- (id)createReflowTaskWithStickerID:(id)a0 loraID:(id)a1 loraStyleID:(id)a2 shareTaskId:(long long)a3 participantCount:(long long)a4 imCallbackArgs:(id)a5;
- (void)startAigcPortraitPublishWithSchema:(id)a0;
- (void)updateCameraConfigModel:(id)a0 messageType:(long long)a1 mediaPath:(id)a2;
- (void)startIMMediaEdit:(id)a0 sourceModel:(id)a1 imModel:(id)a2 executeBlock:(id /* block */)a3;
- (void)showToast:(id)a0;

@end
