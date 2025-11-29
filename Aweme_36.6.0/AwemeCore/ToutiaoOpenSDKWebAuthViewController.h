@class ToutiaoOpenSDKNavBackButton, NSString, UIActivityIndicatorView, WKWebView, ToutiaoOpenSDKSendAuthReq;
@protocol ToutiaoOpenSDKApiDelegate, ToutiaoOpenSDKWebAuthViewDelegate;

@interface ToutiaoOpenSDKWebAuthViewController : UIViewController <WKNavigationDelegate, WKUIDelegate>

@property (retain, nonatomic) UIActivityIndicatorView *loadingView;
@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) ToutiaoOpenSDKNavBackButton *backBtn;
@property (nonatomic) long long loadStatus;
@property (retain, nonatomic) ToutiaoOpenSDKSendAuthReq *req;
@property (weak, nonatomic) id<ToutiaoOpenSDKApiDelegate> sdkDelegate;
@property (weak, nonatomic) id<ToutiaoOpenSDKWebAuthViewDelegate> authDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadBackButton;
- (void)checkTimeOut;
- (void)checkEndLoading;
- (id)webAuthDomain;
- (void)backBtnTapped;
- (void)checkStartLoading;
- (void)failedWithNetworkProblem;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)reload;
- (long long)preferredStatusBarStyle;
- (id)init;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (id)title;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (id)redirectUrl;
- (void)callLog;
- (void)callLog;

@end
