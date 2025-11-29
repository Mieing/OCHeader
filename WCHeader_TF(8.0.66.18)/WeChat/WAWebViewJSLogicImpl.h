@class NSString, NSMutableSet, UIView;
@protocol WAWebViewJSLogicDelegate, YYWebViewInterface;

@interface WAWebViewJSLogicImpl : NSObject <WAJSEventHandlerContextDelegate> {
    NSString *_curRandomUUID;
    NSString *_curContextUUID;
    BOOL _isUseMd5ForJSAPI;
}

@property (retain, nonatomic) NSMutableSet *lstBaseEvents;
@property (weak, nonatomic) id<WAWebViewJSLogicDelegate> delegate;
@property (weak, nonatomic) UIView<YYWebViewInterface> *webView;
@property (readonly, nonatomic) BOOL directInvokeJs;
@property (readonly, nonatomic) BOOL directInvokeOc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getWebViewLaunchConfig;
- (id)getExtJSModels;
- (id)extJSBeforeWebViewPublib;
- (id)extJSOnTarget:(unsigned long long)a0 atTiming:(unsigned long long)a1;
- (id)getPubResWebViewSDKContentString;
- (id)getExtJSBeforeWebViewPublib;
- (id)getWebviewPreInjectJSStr:(BOOL)a0;
- (unsigned int)currentPreloadMoment;
- (void)tryInjectDebugConsole;
- (void)sendEventToJSBridge:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (void)syncSendEventToJSBridge:(id)a0 params:(id)a1 eventId:(unsigned int)a2 completionBlock:(id /* block */)a3;
- (id)sha1:(id)a0;
- (void)handleJSApiPostMessage:(id)a0 forWebView:(id)a1;
- (id)getPermissionResultWithJSAPI:(id)a0 withAppId:(id)a1 byTempPermission:(id)a2;
- (BOOL)checkRunModeOnWebview:(id)a0;
- (void)checkUserAuthWithJSAPI:(id)a0 permissionAppID:(id)a1 model:(id)a2 handler:(id /* block */)a3 failHandler:(id /* block */)a4 transferHandler:(id /* block */)a5;
- (id)fetchPublicResLogic;
- (id)getAppId;
- (id)getWAContact;
- (void)sendResultBeforeEnd:(id)a0 resultType:(long long)a1 errorMessage:(id)a2;
- (id)getParentViewController;
- (id)_getWAWebViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (BOOL)isParentViewControllerDidAppear:(id)a0;
- (id)sourceOpenSDKAppID;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (BOOL)isDebugAndVConsoleOpen;
- (BOOL)isIgnoreRemoteCheckDomain;
- (id)getWxaExternalInfo;
- (BOOL)isService;
- (BOOL)isAgentMode;
- (unsigned int)getCurTaskRunningState;
- (id)getCurPubResLogic;
- (unsigned int)getAppType;
- (id)getInstanceId;
- (BOOL)canInjectFullWxConfig;
- (id)getEventHandler:(id)a0;
- (void)endWithResult:(id)a0 handler:(id)a1;
- (void)endWithResult:(id)a0 handler:(id)a1 callbackID:(unsigned int)a2;
- (void)performResult:(id)a0 handler:(id)a1 callid:(unsigned int)a2;
- (id)GetWebViewPluginByName:(id)a0;
- (id)GetWeAppPluginByName:(id)a0;
- (void)printConsoleLog:(id)a0;
- (void).cxx_destruct;

@end
