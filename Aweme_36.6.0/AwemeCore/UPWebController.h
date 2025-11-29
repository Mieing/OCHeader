@class NSString, UPWKWebViewJavascriptBridge, WKWebView, UIButton;
@protocol UPWebPayDelegate;

@interface UPWebController : UIViewController <WKNavigationDelegate, WKUIDelegate> {
    UPWKWebViewJavascriptBridge *_bridge;
    WKWebView *_webView;
    WKWebView *_tempWebView;
    UIButton *_backBtn;
}

@property (weak, nonatomic) id<UPWebPayDelegate> delegate;
@property (copy, nonatomic) NSString *startPage;
@property (nonatomic) BOOL subPage;
@property (copy, nonatomic) NSString *displayTitle;
@property (copy, nonatomic) id /* block */ payResultCallback;
@property (nonatomic) BOOL isWCDPage;
@property (nonatomic) BOOL isDownloadPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)rotatedWidth;
+ (double)rotatedHeight;
+ (double)rotatedOffset;
+ (double)displayHeight;
+ (double)displayWidth;

- (void)btnClosePressed:(id)a0;
- (void)loadWebPage;
- (BOOL)isIPhoneXScreen;
- (BOOL)isChinese;
- (id)mediumFontWithSize:(double)a0;
- (void)setCustomTitleView:(id)a0 gapWidth:(double)a1;
- (void)setCustomNavigationBarBackground;
- (void)rotateCustomNavigationBarBackground;
- (void)addBackBtn;
- (void)registerForWebMessage;
- (BOOL)openNewPage:(id)a0;
- (void)onClosePage;
- (void)payResult:(id)a0 error:(id *)a1;
- (void)onBackEnable:(id)a0;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didReceiveAuthenticationChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)webView:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)webView:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 initiatedByFrame:(id)a2 completionHandler:(id /* block */)a3;
- (void)viewDidLoad;
- (void)dealloc;
- (void)webView:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 initiatedByFrame:(id)a3 completionHandler:(id /* block */)a4;
- (void)setupNavigationBar;

@end
