@class AWEXBridgePolicyKitInterceptor, NSString;

@interface AWEXBridgeKitModuleService : HTSService <AWEXBridgeKitModuleService, BDXBridgeInterceptor, BDXBridgeDispatcherDelegate, TTBridgeInterceptor, AWEUserMessage, IESBridgeEngineDelegate>

@property (retain, nonatomic) id disablePanGestureObserver;
@property (retain, nonatomic) AWEXBridgePolicyKitInterceptor *policyKitInterceptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)xBridge:(id)a0 setUpWithContainer:(id)a1;
- (BOOL)bridgeEngine:(id)a0 shouldUseExternalAuthorizeForCommand:(id)a1;
- (BOOL)shouldUseExecutor:(id)a0 withMessage:(id)a1 resultHandler:(id /* block */)a2;
- (void)bridgeEngine:(id)a0 message:(id)a1 authorizeMethod:(id)a2 completionHanlder:(id /* block */)a3;
- (BOOL)bridgeEngine:(id)a0 skipMatchBridgeWithMessage:(id)a1;
- (BOOL)bridgeEngine:(id)a0 shouldUseExternalAuthorizeForMessage:(id)a1;
- (id)allXBridgeNames;
- (Class)chooseMediaBridgeIMP;
- (id)chooseMediaBridgeInstanceIMP;
- (void).cxx_destruct;
- (void)dealloc;

@end
