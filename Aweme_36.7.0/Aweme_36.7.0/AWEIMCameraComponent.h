@class NSString;

@interface AWEIMCameraComponent : AWEIMComponentBase <AWEIMComponentLazyCreate, AWEIMCameraComponentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)checkSendAttachmentMessagePrevilegeWithConversation:(id)a0 messageType:(long long)a1 completion:(id /* block */)a2;
- (void)openCameraWithConfigModel:(id)a0;
- (id)getVideoEnterFromWithModel:(id)a0;
- (id)generateLocalAssetWithModel:(id)a0;
- (id)repoIMModelFromConfig:(id)a0;
- (id)composerModelFromConfig:(id)a0;
- (void)trackShootWithConfig:(id)a0 isSuccess:(BOOL)a1;
- (void)fetchMusicInfoWithMusicID:(id)a0 complete:(id /* block */)a1;
- (void)handlePhotoRecordFinishedWithConversation:(id)a0 configModel:(id)a1 publishModel:(id)a2 onScreen:(id /* block */)a3 sendCompletion:(id /* block */)a4;
- (void)handleVideoRecordFinishedWithConversation:(id)a0 configModel:(id)a1 publishModel:(id)a2 onScreen:(id /* block */)a3 sendCompletion:(id /* block */)a4;
- (id)p_getChatType:(id)a0;
- (void)p_getIMUserWithUserId:(id)a0 secUserID:(id)a1 completion:(id /* block */)a2;
- (void)p_trackIMShootWithConversation:(id)a0 configModel:(id)a1 success:(BOOL)a2;
- (void)trackShootWithEntrance:(id)a0 extraParams:(id)a1 conversation:(id)a2;

@end
