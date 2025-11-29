@class MemoryMappedKV, NSString, NSDictionary, WAAppIdToUsernameTransfer;

@interface WAJSEventHandler_openBusinessView : WAJSEventHandler_BaseEvent <PBMessageObserverDelegate> {
    WAAppIdToUsernameTransfer *_appID2UserNameTransfer;
    NSString *_bizTypeStr;
}

@property (retain, nonatomic) NSDictionary *dicParam;
@property (nonatomic) BOOL isSyncRequest;
@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (nonatomic) BOOL disableVisibilityEvent;

- (void)handleJSEvent:(id)a0;
- (id)mmkvKeyForBusinessType:(id)a0 source:(int)a1;
- (id)getValidCacheResponseForBusinessType:(id)a0 source:(int)a1;
- (void)cacheResponseIfNeeded:(id)a0 forBusinessType:(id)a1 source:(int)a2;
- (void)requestAuthorizationForLaunch:(id)a0 queryStr:(id)a1 referrerAppId:(id)a2;
- (void)handleAuthorizationForLaunchResponse:(id)a0 request:(id)a1 isCache:(BOOL)a2;
- (void)openLiteApp:(id)a0 appId:(id)a1 path:(id)a2 query:(id)a3;
- (void)navigateToMiniProgramWithParam:(id)a0 appID:(id)a1 userName:(id)a2 pagePath:(id)a3 transparentBackgroundEnabled:(BOOL)a4;
- (void)navigateToMiniProgramWitAppID:(id)a0 userName:(id)a1 debugMode:(unsigned long long)a2 pagePath:(id)a3 extraData:(id)a4 privateExtraData:(id)a5 agentId:(id)a6 sourceType:(unsigned int)a7 preScene:(unsigned int)a8 preSceneNote:(id)a9 scene:(unsigned int)a10 sceneNote:(id)a11 originScene:(unsigned int)a12 transparentBackgroundEnabled:(BOOL)a13;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)endWithOKParams:(id)a0;
- (void)endWithFailErrMsg:(id)a0 params:(id)a1;
- (void)didGetLiteAppVC:(id)a0 isHalfScreen:(BOOL)a1 isTransparent:(BOOL)a2;
- (void).cxx_destruct;

@end
