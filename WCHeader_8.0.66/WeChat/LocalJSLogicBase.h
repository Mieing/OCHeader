@class NSMutableDictionary, NSString, NSMutableSet, WKWebView, NSMutableArray;
@protocol WSWebViewPluginableProtocol, YYWebViewInterface;

@interface LocalJSLogicBase : MMObject <LocalJSEventHandlerContextDelegate, WSWebCommunicator> {
    WKWebView<YYWebViewInterface> *_webView;
    NSMutableArray *_authApiList;
}

@property (retain, nonatomic) NSMutableSet *jsEvents;
@property (retain, nonatomic) NSMutableArray *cachedJSNotiArr;
@property (weak, nonatomic) id<WSWebViewPluginableProtocol> webViewOwner;
@property (retain, nonatomic) NSMutableDictionary *observedAPIBlocks;
@property (nonatomic) BOOL bridgeCompleted;
@property (nonatomic) BOOL webviewDidLoad;
@property (nonatomic) double delayShowTimeForWebviewDidFinishLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeApi:(id)a0 handler:(id /* block */)a1;
- (void)dispatchBlockHandlerFor:(id)a0 params:(id)a1 callBackID:(id)a2;
- (id)initWithWebView:(id)a0;
- (void)tryInjectWeixinJSBridge:(id)a0;
- (void)onSysBridgeCompleted;
- (void)injectWeixinJSBridge;
- (void)sendMessageToJSBridge:(id)a0 completionBlock:(id /* block */)a1;
- (void)onJsEvaluateError:(id)a0;
- (void)sendEventToJSBridge:(id)a0 params:(id)a1;
- (void)sendEventToJSBridge:(id)a0 params:(id)a1 delayIfNotBridged:(BOOL)a2;
- (void)sendEventToJSBridge:(id)a0 params:(id)a1 delayIfNotBridged:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)__sendEventToJSBridge:(id)a0 params:(id)a1 completionBlock:(id /* block */)a2;
- (void)handleJSApiDispatchMessage:(id)a0;
- (void)dispatchEventHandler:(id)a0 withParams:(id)a1 withCallbackID:(id)a2;
- (void)dispatchEventHandler:(id)a0 withParams:(id)a1;
- (void)sendJSCBEventToJSBridge:(id)a0 withCallBackID:(id)a1;
- (void)sendJSCBEventToJSBridge:(id)a0 withCallBackID:(id)a1 completionBlock:(id /* block */)a2;
- (void)addAuthApiList:(id)a0;
- (void)reSetWebView:(id)a0;
- (void)functionCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2;
- (void)handleJSApiFuncOfGetNetworkType:(id)a0 withCallBackID:(id)a1;
- (BOOL)isOnDawangEnv;
- (id)getNetworkInfo;
- (void)ackWithCallBackID:(id)a0 withParams:(id)a1;
- (void)ackWithCallBackID:(id)a0 errorMsg:(id)a1;
- (id)makeEmptyJSONResultParam:(BOOL)a0;
- (BOOL)canUseClassHandleJSAPI:(id)a0;
- (void)removeAllJSEvent;
- (id)webview;
- (void)eventEndWithHandler:(id)a0 result:(id)a1;
- (void)sendEvent:(id)a0 handler:(id)a1 result:(id)a2;
- (unsigned long long)getLocalJSBusinessType;
- (id)getWebViewOwner;
- (id)webView;
- (void)sendEvent:(id)a0 withParams:(id)a1 sendAfterReady:(BOOL)a2;
- (void).cxx_destruct;

@end
