@class NSString, WKWebView, UIView, NSLayoutConstraint, UIButton;

@interface BDPAgreementWebViewController : UIViewController <WKNavigationDelegate> {
    WKWebView *_webView;
    UIView *_bottomBar;
    UIButton *_backBottomButton;
    UIButton *_forwardBottomButton;
    NSLayoutConstraint *_webViewBottomContraint;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL useWebViewTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)onClickBack;
- (void)onWebBack;
- (void)onWebForward;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)setupWebView;

@end
