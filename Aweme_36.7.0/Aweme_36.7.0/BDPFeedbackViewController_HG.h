@class NSString, BDPPanelWebView_HG, UIImage, BDPUniqueID, BDPPanelLoadingView_HG;

@interface BDPFeedbackViewController_HG : BDPViewController <WKNavigationDelegate, BDPApplicationNotificationMessage, BDPPanelLoadingViewDelegate_HG, BDPFeedbackViewProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long reportType;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL didLogin;
@property (nonatomic) BOOL appEnterBackground;
@property (retain, nonatomic) BDPPanelWebView_HG *webView;
@property (retain, nonatomic) BDPPanelLoadingView_HG *loadingView;
@property (retain, nonatomic) UIImage *gameScreenshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCloseButtonClicked;
- (void)enterBackground:(id)a0;
- (void)enterForeground:(id)a0;
- (void)openSchemaWithParams:(id)a0;
- (void)_refreshWebviewFrame;
- (void)openBrowserWithParams:(id)a0;
- (void)onGoBackButtonClicked;
- (void)onReloadPageClicked;
- (id)initWithUniqueID:(id)a0 urlString:(id)a1;
- (void)_initReportType;
- (void)getGameScreenshot;
- (void)_didUserLogin;
- (void)registerFeedbackJSBridge;
- (void)openCustomPageWithParams:(id)a0;
- (void)loginReportWithParams:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (void)uploadFeedbackAlogWithParams:(id)a0;
- (void)eventReportWithParams:(id)a0;
- (void)getScreenCaptureFileWithParams:(id)a0 callback:(id /* block */)a1;
- (void)uploadFeedbackExtLogWithParams:(id)a0;
- (void)_appendExtraInfoToLog;
- (id)_generateExtraGameInfo;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)navigationBarHidden;

@end
