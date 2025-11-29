@class NSDictionary, BDXWebView, NSString;

@interface AWESearchWebNovelExtractPlugin : IWKPluginObject <IWKInstancePlugin>

@property (weak, nonatomic) BDXWebView *webView;
@property (retain, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) id /* block */ didReceiveTranscodeResultBlock;
@property (copy, nonatomic) id /* block */ didFinishTranscodingBlock;
@property (copy, nonatomic) id /* block */ didLoadOriginWebFinished;
@property (copy, nonatomic) id /* block */ willPerformTranscodingBlock;
@property (copy, nonatomic) id /* block */ didLoadTranscodeScriptBlock;
@property (copy, nonatomic) id /* block */ decidePolicyForNavigationActionBlock;
@property (copy, nonatomic) id /* block */ didFailNavigationBlock;
@property (copy, nonatomic) id /* block */ didReceiveSccInterceptionBlock;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *extractTyepe;
@property (copy, nonatomic) NSString *transcodingExtra;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSDictionary *webSchemeParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double onTranscodeBeginTime;
@property (nonatomic) BOOL shouldShowSuccessBottomNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webViewWillDealloc:(id)a0;
- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 loadData:(id)a1 MIMEType:(id)a2 characterEncodingName:(id)a3 baseURL:(id)a4;
- (id)webView:(id)a0 loadHTMLString:(id)a1 baseURL:(id)a2;
- (void)sccRejected:(id)a0;
- (void)registerWebTranscodeJSBridge;
- (void)performTranscoding;
- (void)loadTranscodingScript;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)onLoad:(id)a0;

@end
