@class NSString, WAWebViewController, MMUIViewController;
@protocol WAJSEventHandlerContextDelegate;

@interface WAJSEventHandler_BaseEvent : NSObject

@property (nonatomic) unsigned int callbackId;
@property (weak, nonatomic) id<WAJSEventHandlerContextDelegate> context;
@property (nonatomic) BOOL useTempPermission;
@property (weak, nonatomic) WAWebViewController *webviewController;
@property (weak, nonatomic) MMUIViewController *contextViewController;
@property (nonatomic) BOOL runInMainThread;
@property (nonatomic) unsigned int appServiceType;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) unsigned int workerId;
@property (copy, nonatomic) NSString *permissionAppid;
@property (nonatomic) BOOL responseUseBase64;
@property (nonatomic) BOOL noCallback;
@property (retain, nonatomic) id userInfo;

- (void)endWithResult:(id)a0;
- (void)sendEventToInvokeEnv:(id)a0 dicParams:(id)a1;
- (id)getAppID;
- (BOOL)isGameApp;
- (BOOL)isSimulatedNativeWeApp;
- (BOOL)isNormalWeApp;
- (BOOL)isLiteApp;
- (BOOL)isNormalWeAppWithGameRuntime;
- (BOOL)checkIsValidPluginForPermissionAppid:(id)a0;
- (BOOL)isArrPlugin:(id)a0 ContainsAppid:(id)a1;
- (id)getWxaExternalInfo;
- (BOOL)isHolderTaskKilled;
- (void)handleJSEvent:(id)a0;
- (id)JSAPIName;
- (void)listenWebViewDidAppearCallBack:(id /* block */)a0;
- (id)getValidWebViewController;
- (id)getNavigationController;
- (void)macroEndWithErrno:(id)a0 msg:(id)a1 dic:(id)a2;
- (void)macroEnd:(long long)a0 optionalArg1:(id)a1 optionalArg2:(id)a2;
- (BOOL)needLogJsApiEnd:(id)a0;
- (void)internalEndWithState:(long long)a0 msg:(id)a1 dic:(id)a2;
- (void).cxx_destruct;

@end
