@class NSURLRequest, NSString;
@protocol YYWebViewDelegate, WCCanvasJSLogicDelegate;

@interface WCCanvasJSLogic : LocalJSLogicBase <YYWebViewDelegate>

@property (weak, nonatomic) id<YYWebViewDelegate> wvDelegate;
@property (nonatomic) BOOL hasInjected;
@property (weak, nonatomic) id<WCCanvasJSLogicDelegate> delegate;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0 wvDelegate:(id)a1;
- (unsigned long long)getLocalJSBusinessType;
- (void)tryInjectWeixinJSBridge:(id)a0;
- (void)functionCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2;
- (void)sendCallback:(id)a0 ret:(int)a1 error:(id)a2 data:(id)a3;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2 isMainFrame:(BOOL)a3 navigationAction:(id)a4;
- (void)webViewDidStartLoad:(id)a0 navigation:(id)a1;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 navigation:(id)a2;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (BOOL)dispatchJSEvent:(id)a0 param:(id)a1 callbackID:(id)a2;
- (void).cxx_destruct;

@end
