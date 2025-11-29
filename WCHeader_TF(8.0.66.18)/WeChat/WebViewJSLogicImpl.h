@class WebviewJSEventHandlerFacade, NSMutableDictionary, NSString, WKWebView, NSMutableArray;
@protocol WebViewJSLogicDelegate, YYWebViewInterface;

@interface WebViewJSLogicImpl : MMObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate> {
    NSString *_curRandomUUID;
    NSString *_curContextUUID;
    BOOL _isUseMd5ForJSAPI;
}

@property (retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandlerFacade;
@property (retain, nonatomic) NSMutableDictionary *jsCallbackHooks;
@property (retain, nonatomic) NSMutableDictionary *jsUrlHooks;
@property (retain, nonatomic) NSMutableArray *jsEvents;
@property (retain, nonatomic) NSMutableDictionary *dictPageRamdomSigns;
@property (retain, nonatomic) NSMutableDictionary *dictPageSha2Host;
@property (weak, nonatomic) id<WebViewJSLogicDelegate> delegate;
@property (retain, nonatomic) WKWebView<YYWebViewInterface> *webView;
@property (nonatomic) BOOL bInjectJSFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)jsEventWithFunction:(id)a0 params:(id)a1 callBackID:(id)a2 eventCompleteBlock:(id /* block */)a3;
- (id)jsEventWithFunction:(id)a0 params:(id)a1 callBackID:(id)a2 eventCompleteBlock:(id /* block */)a3 eventInvokeContext:(id)a4;
- (void)functionOuterCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2 eventCompleteBlock:(id /* block */)a3 eventInvokeContext:(id)a4;
- (void)functionCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2;
- (void)__excutefunctionCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2 apiPermission:(unsigned char)a3;
- (void)__excutefunctionCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2 apiPermission:(unsigned char)a3 eventCompleteBlock:(id /* block */)a4 eventInvokeContext:(id)a5;
- (void)handleJSApiDispatchMessage:(id)a0;
- (void)handleMonitorMessage:(id)a0;
- (void)cleanJSAPIDelegate;
- (void)recoverJSAPIEventDelegateWithBackup;
- (void)changeJSAPIContextRandomIDWithCurrentURL:(id)a0;
- (id)currentContextRandomID;
- (id)extraDataForNextJSEventCalled:(id)a0;
- (void)webviewWillAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)funcDefByName:(id)a0;
- (void)setJSAPIFunctionMap:(id)a0;
- (void)wxShareFunCall:(id)a0 params:(id)a1 withCallbackID:(id)a2;
- (id)wxShareCSK;
- (BOOL)isJsEventInvokeSourcBridgeeCall:(unsigned int)a0;
- (void)onEndEvent:(id)a0 withResult:(id)a1;
- (void)jsHandlerHandle:(id)a0;
- (id)GetCurrentWebviewViewController;
- (id)webviewController;
- (id)isExistJSApis:(id)a0;
- (void)tryInjectWeixinJSBridge:(id)a0;
- (void)tryInjectClassicWeixinJSBridge:(id)a0;
- (void)resetSysInitMarkIfNeeded;
- (void)sysInitDocument:(id)a0;
- (void)tryInjectWeixinOptimizatedJSBridge:(id)a0;
- (void)injectWeixinOptimizatedJSBridge;
- (void)sendAuthedEventToJSBridge:(id)a0;
- (void)sendReadyEventToJSBridgeWithParams:(id)a0;
- (id)getWeixinJSBridgeAndPluginStr;
- (id)getWeixinEnvStr;
- (void)markPageWebCached;
- (void)sendGetA8KeyUrlOrCookieEvent:(id)a0 HasCookie:(BOOL)a1;
- (void)injectWeixinJSBridge;
- (void)sendMessageToJSBridge:(id)a0 completionBlock:(id /* block */)a1;
- (void)sendEventToJSBridge:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (id)sha1:(id)a0;
- (void)injectWeixinEnvInfo;
- (void)reportIDKeyForInjectJS;
- (void)reportIDKeyForInjectOptimizatedJS;
- (void)reportIDKeyForJsApiCall:(id)a0;
- (void).cxx_destruct;

@end
