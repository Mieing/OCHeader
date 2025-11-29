@class NSString;

@interface AWEStudioCreativeAIGCServiceImpl : NSObject <AWEStudioCreativeAIGCService>

@property (nonatomic) BOOL isInPushLoraDetailPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentRoleProfileDetailPage:(id)a0 enterScene:(long long)a1 showStatus:(long long)a2 isLoraUGC:(BOOL)a3;
- (id)syncGetLoraProfileModel;
- (id)syncGetSelectLoraPersonInfo;
- (void)addObserverSelectProfileChanged:(id)a0 selectProfileChanged:(id /* block */)a1;
- (void)preloadLoraProfileModel:(id /* block */)a0;
- (id)syncGetDefaultLoraPersonInfo;
- (void)enterCreateAILoraProfileVC:(id)a0 isDarkMode:(BOOL)a1 trackInfo:(id)a2 enterCreateCallBlock:(id /* block */)a3 didCreateProfileBlock:(id /* block */)a4 createLoraViewControllerDismiss:(id /* block */)a5;
- (void)enterSelectAILoraProfileVCWithDarkMode:(BOOL)a0 didEnterVC:(id /* block */)a1 trackInfo:(id)a2 didClickButtonBlock:(id /* block */)a3 userCloseLoadingBlock:(id /* block */)a4;
- (void)requestAiProcessWithTaskId:(id)a0 slotNumber:(long long)a1 roleType:(long long)a2 slotList:(id)a3 imCallbackArgs:(id)a4 reqSource:(long long)a5 shareTaskId:(long long)a6 actualInitiatorModelId:(id)a7 stickerId:(id)a8 styleId:(id)a9 attendIdempotentKey:(id)a10 completion:(id /* block */)a11;
- (void)queryMultiPortraitState:(id)a0 conversationShortId:(id)a1 serverMsgId:(id)a2 completion:(id /* block */)a3;
- (void)startAigcLoraPublishWithSchema:(id)a0 track:(id)a1;
- (id)modelAvatarWithGender:(id)a0;
- (id)preLoadAIGCLibraryDataWith:(id)a0 isFromInspiration:(BOOL)a1;
- (void)updateDataSource:(id)a0 profileModel:(id)a1;
- (void)addObserverLoraUpdate:(id)a0 profileModel:(id)a1 updateCallback:(id /* block */)a2;
- (void)updateDataSource:(id)a0 needRefreshProfile:(BOOL)a1;
- (void)presentAIGCLibraryPage:(id)a0 dismissBlock:(id /* block */)a1;
- (id)getProfileCacheImage;
- (void)startMixPhotoWithStickerID:(id)a0 loraStyleId:(id)a1 maxMember:(long long)a2 selectLoraId:(id)a3 stickerCoverURL:(id)a4 isLora:(BOOL)a5 dark:(long long)a6 trackInfo:(id)a7;
- (void)queryMultiPortraitState:(id)a0 imEnter:(BOOL)a1 conversationShortId:(id)a2 serverMsgId:(id)a3 completion:(id /* block */)a4;
- (void)presentLoraProfileDetailPage:(id)a0 enterScene:(long long)a1 showStatus:(long long)a2 shootWay:(id)a3 isLoraUGC:(BOOL)a4 fusionEnterType:(long long)a5 disableDismissDuration:(BOOL)a6 dismissBlock:(id /* block */)a7;
- (void)handleRoleNoticeRouterWithParams:(id)a0 completion:(id /* block */)a1;
- (id)getCachedDefaultLoraPersonModel;
- (void)createMultiPortrait:(id)a0 stickerId:(id)a1 slotNumber:(long long)a2 styleId:(id)a3 imCallbackArgs:(id)a4 completion:(id /* block */)a5;
- (void)participateInMultiPortrait:(id)a0 stickerId:(id)a1 loraId:(id)a2 styleId:(id)a3 attendIdempotentKey:(id)a4 imCallbackArgs:(id)a5 completion:(id /* block */)a6;

@end
