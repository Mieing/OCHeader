@class WebviewJSEventHandlerFacade, NSMutableDictionary, NSString, WKWebView;
@protocol WebPrefetcherJSApiLogicDelegate, YYWebViewInterface;

@interface WebPrefetcherJSApiLogic : NSObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate>

@property (retain, nonatomic) WebviewJSEventHandlerFacade *jsEventHandler;
@property (retain, nonatomic) NSMutableDictionary *functionMap;
@property (retain, nonatomic) NSMutableDictionary *jsApiDefMap;
@property (weak, nonatomic) WKWebView<YYWebViewInterface> *webView;
@property (weak, nonatomic) id<WebPrefetcherJSApiLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerPrefetcherJsApi;
- (void)injectPrefecherJSBridge;
- (void)handleJSApiDispatchMessage:(id)a0;
- (void)functionCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2;
- (void)doInvokeJsApi:(id)a0 withParams:(id)a1 withCallbackID:(id)a2;
- (void)callbackErrorWithId:(id)a0 errCode:(long long)a1 errMsg:(id)a2;
- (void)callbackWithId:(id)a0 result:(id)a1;
- (void)sendMessageToJSBridge:(id)a0 completionBlock:(id /* block */)a1;
- (id)getWebViewController;
- (id)webviewController;
- (void)onEndEvent:(id)a0 withResult:(id)a1;
- (id)GetCurrentWebviewViewController;
- (void).cxx_destruct;

@end
