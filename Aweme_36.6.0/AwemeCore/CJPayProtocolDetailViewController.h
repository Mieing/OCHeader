@class UIColor, CJPayStyleButton, NSString, UIView, CJPayWKWebView;

@interface CJPayProtocolDetailViewController : CJPayHalfPageBaseViewController <WKNavigationDelegate, WKUIDelegate>

@property (retain, nonatomic) CJPayWKWebView *webView;
@property (retain, nonatomic) CJPayStyleButton *nextStepButton;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) UIView *safeAreaView;
@property (retain, nonatomic) UIView *bottomGradientLayerView;
@property (nonatomic) BOOL hasLoadSuccess;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) id /* block */ agreeCompletionBeforeAnimation;
@property (copy, nonatomic) id /* block */ agreeCompletionAfterAnimation;
@property (nonatomic) BOOL showContinueButton;
@property (copy, nonatomic) NSString *navTitle;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *source;
@property (nonatomic) double height;
@property (nonatomic) double leftRightSpace;
@property (nonatomic) double webViewCornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL isShowTitleNubmer;
@property (nonatomic) BOOL isShowTitleStrByWebview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportDarkMode;
- (void)nextStepButtonAction;
- (void)updateButtonHeight;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithHeight:(double)a0;
- (double)containerHeight;

@end
