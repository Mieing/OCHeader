@class NSString, QBScriptMessageHandler, NSOperationQueue, NSURL, QBProtocolCallback;
@protocol WKUIDelegate, WKNavigationDelegate;

@interface QBWKWebViewProxy : NSObject <QBScriptMessageHandlerDelegate, WKNavigationDelegate, WKUIDelegate> {
    QBScriptMessageHandler *_scriptMessageHandler;
    NSString *_selectedString;
    QBProtocolCallback *_callback;
    NSURL *_currentURL;
    NSURL *_currentMainURL;
    NSURL *_currentMutableMainURL;
    BOOL _isNewPageRequest;
    BOOL isULinkSwitchOn;
}

@property (retain, nonatomic) NSOperationQueue *cookieQueue;
@property (weak, nonatomic) id<WKNavigationDelegate> navigationDelegate;
@property (weak, nonatomic) id<WKUIDelegate> UIDelegate;
@property (readonly, copy, nonatomic) NSString *selectedString;
@property (nonatomic) BOOL needInjectJsInNetwork;
@property (nonatomic) BOOL isSelfProxyEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addAllScriptMsgHandle:(id)a0;
- (void)removeAllScriptMsgHandle:(id)a0;
- (void)webview:(id)a0 beginLoadRequest:(id)a1;
- (void)webview:(id)a0 beginReloadWithURL:(id)a1;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didReceiveServerRedirectForProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)webViewDidClose:(id)a0;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)handler:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)updateSelectedString:(id)a0;
- (void)updateLocalCK:(id)a0 inWkWebView:(id)a1 withURL:(id)a2;
- (id)absoluteURLFromPostURLString:(id)a0 baseURL:(id)a1 locationString:(id)a2 frameURL:(id)a3;
- (void)processForXhr:(id)a0 inWkWebView:(id)a1 forFrameInfo:(id)a2;
- (BOOL)isMainRequest:(id)a0 navigationType:(long long)a1;
- (void).cxx_destruct;

@end
