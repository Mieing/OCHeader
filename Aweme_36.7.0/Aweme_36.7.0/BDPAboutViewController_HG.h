@class NSString, BDPPanelWebView_HG, BDPUniqueID, BDPPanelLoadingView_HG;

@interface BDPAboutViewController_HG : BDPViewController <WKNavigationDelegate, BDPPanelLoadingViewDelegate_HG>

@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) BDPPanelWebView_HG *webView;
@property (retain, nonatomic) BDPPanelLoadingView_HG *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCloseButtonClicked;
- (id)getAboutUrlQuery;
- (void)registerAboutJSBridge;
- (void)_refreshWebviewFrame;
- (void)openBrowserWithParams:(id)a0;
- (void)onGoBackButtonClicked;
- (void)onReloadPageClicked;
- (id)initWithUniqueID:(id)a0 urlString:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)navigationBarHidden;

@end
