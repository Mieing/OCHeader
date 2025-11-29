@class NSString, AWEWebSecureBanner, UIView;

@interface AWEWebViewController : AWEBaseWebViewController <RTVWebViewController, AWEReactPage, BDWebSecureLinkSettingDelegate, AWEWebSecureBannerDelegate, UIScrollViewDelegate, AWERouterViewControllerProtocol, NSURLConnectionDataDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isUrlBlocked;
@property (nonatomic) BOOL showUndefinedPage;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL disableWebViewInteraction;
@property (nonatomic) double previewToastHeight;
@property (nonatomic) BOOL enableSecLink;
@property (copy, nonatomic) NSString *secLinkScene;
@property (retain, nonatomic) UIView *disableInteractionToastView;
@property (copy, nonatomic) NSString *checkIronManJumpParam;
@property (retain, nonatomic) AWEWebSecureBanner *secureBanner;
@property (nonatomic) BOOL isLocalResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wkAllowList;
+ (id)addParametersIfURLStringHasIronManScheme:(id)a0;
+ (BOOL)allowWKWebViewWithURL:(id)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backButtonClicked;
- (BOOL)shouldInterceptFirstJump:(id)a0 withResponse:(id)a1;
- (void)handleKeyboardDidShowNotification:(id)a0;
- (void)handleKeyboardDidHideNotification:(id)a0;
- (void)handleKeyboardWillShowNotification:(id)a0;
- (void)handleKeyboardWillHideNotification:(id)a0;
- (void)handleKeyBoardWillChangeNotification:(id)a0;
- (void)handleKeyBoardDidChangeNotification:(id)a0;
- (id)__convertKeyBoardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupNotification;
- (void)closeWebView;
- (void)handleDPBStatusNotification:(id)a0;
- (void)handleBridgeClose;
- (void)disableScroll;
- (void)updateBackgroundColorTransparent;
- (void)showMorePanel;
- (void)addAdditionalRequestHeaderFields;
- (void)didReceiveSecureLinkResponse:(id)a0;
- (void)updateWebViewLayout;
- (void)removeSecBanner;
- (void)showSecBanner:(id)a0;
- (void)secureBannerDidClickCloseButton:(id)a0;
- (void)setupMoreButtonOfNavigation;
- (void)removeNoti;
- (void)addAdditionalRequestParams;
- (void)checkURLWhenLoadRequest;
- (BOOL)webviewShouldStartLoadWithRequest:(id)a0 navigationType:(long long)a1;
- (void)analyzeWebview:(id)a0;
- (void)__notifyKeyBoardEventName:(id)a0 notification:(id)a1;
- (void)sendWebEvent:(id)a0;
- (BOOL)shouldSetupNonShareMoreButton;
- (id)containerName;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)openURL:(id)a0;
- (id)customUserAgent;
- (void)applicationDidEnterBackground:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setup;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidStartLoad:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;
- (void)setupWebView;
- (void)loadRequest;

@end
