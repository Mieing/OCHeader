@class AFEWebTopBar, NSString, APBToygerAlertConfig, DTFUICustom, UIButton, NSDictionary, UIViewController, UIActivityIndicatorView, WKWebView;
@protocol AFEWebGuideViewDelegate;

@interface AFEWebGuideView : UIView <IStatusBarDelegate, WKScriptMessageHandler, WKUIDelegate, WKNavigationDelegate>

@property (weak, nonatomic) id<AFEWebGuideViewDelegate> webGuideViewDelegate;
@property (nonatomic) long long cnt;
@property (retain, nonatomic) UIButton *close;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) AFEWebTopBar *topBar;
@property (nonatomic) BOOL injectedUIConfig;
@property (retain, nonatomic) WKWebView *wkwebView;
@property (nonatomic) BOOL loaded;
@property (retain, nonatomic) APBToygerAlertConfig *toygerAlertConfig;
@property (weak, nonatomic) UIViewController *currentViewController;
@property (retain, nonatomic) DTFUICustom *customProtocol;
@property (retain, nonatomic) NSDictionary *alertParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)goback;
- (void)alertBeforeExit:(id)a0;
- (id)dictionaryWithPropertiesOfObject:(id)a0;
- (void)injectJavaScriptForLocalStorage;
- (void)clearUICustomSettingWebLocalStorage;
- (id)appStyleOptionJSString;
- (BOOL)needJSInjectUIConfig;
- (void)setWKURL:(id)a0;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 didCommitNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)setURL:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)layoutSubviews;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
