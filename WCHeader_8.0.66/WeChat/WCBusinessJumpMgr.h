@class NSString, NSMutableDictionary, WAOpenSDKJSEventHandleLogic;

@interface WCBusinessJumpMgr : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *_dictCallBackInfo;
    WAOpenSDKJSEventHandleLogic *_openSDKJSEventHandler;
    WAOpenSDKJSEventHandleLogic *_qrCodeJSEventHandler;
    WAOpenSDKJSEventHandleLogic *_wmpfOpenSDKJSEventHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getBusinessName:(id)a0;
+ (BOOL)isUniversalLinksBusinessJumpMiniProgram:(id)a0;

- (void)onServiceInit;
- (void)dealloc;
- (void)handleJumpFromOpenSDK:(id)a0 openParam:(id)a1 parentViewController:(id)a2 extraInfo:(id)a3;
- (void)handleTransferApiWithURLString:(id)a0 openParam:(id)a1;
- (void)handleJumpFromJSAPI:(id)a0 parentViewController:(id)a1 scene:(unsigned int)a2;
- (void)handleJumpFromOuter:(id)a0 bundleId:(id)a1 parentViewController:(id)a2;
- (void)handleJumpFromNativeApp:(id)a0 parentViewController:(id)a1 sceneValue:(long long)a2;
- (void)handleJumpFromInner:(id)a0 parentViewController:(id)a1 sceneValue:(long long)a2 extranInfo:(id)a3;
- (void)handleJumpFromQRCode:(id)a0 parentViewController:(id)a1;
- (BOOL)processQRCodeJSEvent:(id)a0 runtimeAppid:(id)a1 runtimeLaunchScene:(long long)a2 qrCodeUuid:(id)a3 invokeDic:(id)a4 parentViewController:(id)a5 disableAutoCloseWebview:(BOOL)a6 delegate:(id)a7;
- (void)processTranslateResult:(id)a0 result:(id)a1 parentViewController:(id)a2 originUrl:(id)a3 translateInfo:(id)a4 jumpViewController:(id)a5 extParams:(id)a6;
- (void)processTranslateRedirectUrlResult:(id)a0 result:(id)a1 parentViewController:(id)a2 jumpViewController:(id)a3;
- (void)processTranslateRefreshTokenResult:(id)a0 result:(id)a1 parentViewController:(id)a2 jumpViewController:(id)a3;
- (BOOL)isBusinessJump:(id)a0;
- (void)internalHandleJump:(id)a0 translateInfo:(id)a1 parentViewController:(id)a2;
- (id)getNavigationControllerToPushOrPresentVC;
- (void).cxx_destruct;

@end
