@class NSURL, NSString;

@interface IWKPiperPluginObject : IWKPluginObject <WKScriptMessageHandler, IWKInstancePlugin>

@property (nonatomic) BOOL userScriptInjectSucceeded;
@property (nonatomic) BOOL isCheckingUserScriptInject;
@property (nonatomic) BOOL protocolV1Enabled;
@property (retain, nonatomic) NSURL *commitURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertIfOldTTEngineExistForWebView:(id)a0;
- (void)_doAddScriptIfNeeded:(id)a0;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (id)webView:(id)a0 didCommitNavigation:(id)a1;
- (id)init;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)onLoad:(id)a0;

@end
