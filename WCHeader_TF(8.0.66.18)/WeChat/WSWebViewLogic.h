@class NSURLRequest, NSString;

@interface WSWebViewLogic : WXSearchJSLogicImpl <YYWebViewDelegate>

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWebView:(id)a0;
- (void)loadFile:(id)a0;
- (BOOL)onWebView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)onWebViewStartLoad:(id)a0;
- (void)onWebViewFinishedLoad:(id)a0;
- (void)onWebViewFailLoad:(id)a0 withError:(id)a1;
- (void)onWebViewTerminal:(id)a0;
- (id)curLang;
- (double)curFontRatio;
- (unsigned int)curSearchScene;
- (unsigned int)curVersion;
- (void)showWebview:(id)a0;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2 isMainFrame:(BOOL)a3 navigationAction:(id)a4;
- (void)webViewDidStartLoad:(id)a0 navigation:(id)a1;
- (void)webViewDidFinishLoad:(id)a0 navigation:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 navigation:(id)a2;
- (void)webviewDidReceiveScriptMessage:(id)a0 handler:(id)a1 rawMessage:(id)a2;
- (void)webViewContentProcessDidTerminate:(id)a0;

@end
