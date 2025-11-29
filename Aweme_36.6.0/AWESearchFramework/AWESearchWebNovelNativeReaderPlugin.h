@class NSString, NSDictionary, AWESearchWebViewTranscodingManager, UIView, BDXWebView, UIResponder;
@protocol BDXKitViewProtocol;

@interface AWESearchWebNovelNativeReaderPlugin : IWKPluginObject <IWKInstancePlugin>

@property (weak, nonatomic) BDXWebView *webView;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *preView;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *nextView;
@property (retain, nonatomic) UIView *loadingBackView;
@property (retain, nonatomic) NSDictionary *searchParams;
@property (copy, nonatomic) id /* block */ didRecieveTranscodeBlock;
@property (copy, nonatomic) id /* block */ didLoadTranscodeScriptBlock;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *result;
@property (copy, nonatomic) NSString *transcodingExtra;
@property (retain, nonatomic) UIResponder *originalWeb;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSDictionary *webSchemeParams;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) double onTranscodeBeginTime;
@property (nonatomic) BOOL shouldShowSuccessBottomNotification;
@property (copy, nonatomic) id /* block */ willPerformTranscodingBlock;
@property (copy, nonatomic) id /* block */ didInjectNovelCurrentContentBlock;
@property (copy, nonatomic) id /* block */ didReceiveSetTranscodeResultBlock;
@property (copy, nonatomic) id /* block */ didFinishTranscodeProcess;
@property (copy, nonatomic) id /* block */ turnOnBlock;
@property (copy, nonatomic) id /* block */ turnOffCurrentBlock;
@property (copy, nonatomic) id /* block */ turnOffGlobalBlock;
@property (copy, nonatomic) id /* block */ refreshActionBlock;
@property (copy, nonatomic) id /* block */ moreActionBlock;
@property (copy, nonatomic) id /* block */ feedbackActionBlock;
@property (copy, nonatomic) id /* block */ copyActionBlock;
@property (copy, nonatomic) id /* block */ backActionBlock;
@property (copy, nonatomic) id /* block */ searchBarActionBlock;
@property (copy, nonatomic) id /* block */ searchParamsBlock;
@property (retain, nonatomic) AWESearchWebViewTranscodingManager *transcodingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webViewWillDealloc:(id)a0;
- (id)webView:(id)a0 loadRequest:(id)a1;
- (id)webView:(id)a0 loadData:(id)a1 MIMEType:(id)a2 characterEncodingName:(id)a3 baseURL:(id)a4;
- (id)webView:(id)a0 loadHTMLString:(id)a1 baseURL:(id)a2;
- (void)sccRejected:(id)a0;
- (id)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (id)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)onLoad:(id)a0;

@end
