@class MQPWebService, MQPWebView, NSString, MQPWebProgress, NSMutableURLRequest, MQPWKJSBridge, APayH5WapViewToolbar;

@interface MQPWebVC : UIViewController <WKNavigationDelegate, MQPJSBridgeURLHandler, UIScrollViewDelegate> {
    BOOL _isScrolling;
    BOOL _isEnding;
    MQPWebProgress *_progress;
    NSMutableURLRequest *_urlReqest;
    APayH5WapViewToolbar *_toolbar;
}

@property (retain, nonatomic) MQPWKJSBridge *jsBridge;
@property (weak, nonatomic) MQPWebService *service;
@property (retain, nonatomic) MQPWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showToolbar;
- (BOOL)openWithUrl:(id)a0 method:(id)a1 title:(id)a2 h5mode:(long long)a3;
- (void)statusBarFrameOrOrientationChanged:(id)a0;
- (void)doClickNaviLeftAction:(id)a0;
- (void)doClickNaviRightAction:(id)a0;
- (BOOL)onJSBridgeURLHandler:(id)a0;
- (void)setupSDKUserAgent;
- (void)h5BackV2;
- (void)h5BackV1;
- (void)notifyPagefinish;
- (void)parseTitleFromDocument;
- (BOOL)onH5PayHandler:(id)a0;
- (void)onH5PayWithError:(id)a0;
- (id)resultDicWithQuery:(id)a0;
- (void)loadJSBridge:(id /* block */)a0;
- (void)onCallNativeFunc:(id)a0;
- (id)subStrInStr:(id)a0 between:(id)a1 and:(id)a2;
- (void)onAction:(id)a0;
- (void)onWebErr:(id)a0 log:(id)a1;
- (void)onExitWithResult:(id)a0;
- (void)showBackButton:(BOOL)a0;
- (void)showRefreshButton:(BOOL)a0;
- (void)pushWnd:(id)a0;
- (void)rotateAccordingToStatusBarOrientationAndSupportedOrientations;
- (id)leftItem:(BOOL)a0 text:(id)a1 target:(id)a2 action:(SEL)a3;
- (void)setupNaviBar4VC:(id)a0 left:(id)a1 title:(id)a2 right:(id)a3;
- (id)labelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isbold:(BOOL)a1 size:(double)a2 text:(id)a3;
- (id)imageViewWithImageName:(id)a0;
- (double)safeAreaHeight;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)refresh;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)setTitle:(id)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationResponse:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithWebService:(id)a0;
- (void)setupWebView;
- (void)hideToolbar;
- (id)dictionaryFromString:(id)a0;
- (void)back;

@end
