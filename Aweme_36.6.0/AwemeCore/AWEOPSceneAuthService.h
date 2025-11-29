@class NSString, AWEOpenPlatformAuthEntranceModel, NSMutableArray;

@interface AWEOPSceneAuthService : HTSService <AWEOPSceneAuthService>

@property (retain, nonatomic) AWEOpenPlatformAuthEntranceModel *entranceModel;
@property (retain, nonatomic) NSMutableArray *sceneAuthArray;
@property (nonatomic) BOOL hasRealTimeTypeInCurrentFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)handleSceneAuthIfNeededWithEntranceModel:(id)a0 sceneAuthArray:(id)a1 completeBlock:(id /* block */)a2;
- (void)callbackWithAuthID:(id)a0 clientKey:(id)a1 rspCode:(long long)a2 errMsg:(id)a3 extraParams:(id)a4;
- (void)handleSceneAuthDialogIfNeededWithChoosedScopes:(id)a0 sceneAuthBindInfoModels:(id)a1 scopeInfoMap:(id)a2 finishBlock:(id /* block */)a3;
- (id)filterValidSceneAuthArray:(id)a0;
- (BOOL)shouldBeginSceneAuthWithArray:(id)a0;
- (id)isValidParamsWithArray:(id)a0;
- (void)beginToSceneAuthWithClientKey:(id)a0 scopes:(id)a1 openExtraStr:(id)a2 sceneAuthArray:(id)a3 complete:(id /* block */)a4;
- (void)showContainerWithModel:(id)a0;
- (id)limitAuthDialogTextView;
- (Class)getVCClassWithNativeKey:(id)a0;
- (id)buildContainerParamsWithModel:(id)a0;
- (void)dismissDidEnterBackground;
- (void).cxx_destruct;
- (void)clearData;
- (void)dealloc;

@end
