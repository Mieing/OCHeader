@class NSURLRequest, NSString;
@protocol WSTemplateJSLogicImplDelegate;

@interface WSTemplateJSLogicImpl : LocalJSLogicBase <YYWebViewDelegate>

@property (weak, nonatomic) id<WSTemplateJSLogicImplDelegate> handlerDelegate;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0 handler:(id)a1;
- (void)dealloc;
- (void)functionCall:(id)a0 withParams:(id)a1 withCallbackID:(id)a2;
- (void)showWebview:(id)a0;
- (BOOL)canUseClassHandleJSAPI:(id)a0;
- (unsigned long long)getLocalJSBusinessType;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2 isMainFrame:(BOOL)a3 navigationAction:(id)a4;
- (void)webViewDidStartLoad:(id)a0 navigation:(id)a1;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 navigation:(id)a2;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (void)webViewContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;

@end
