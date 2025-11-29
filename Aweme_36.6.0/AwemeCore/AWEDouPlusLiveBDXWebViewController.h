@class UIView;

@interface AWEDouPlusLiveBDXWebViewController : AWEBDXWebViewController

@property (retain, nonatomic) UIView *webviewMarkView;
@property (nonatomic) long long maxDpLoadingInterval;
@property (nonatomic) BOOL isDpLoadingTimeout;
@property (nonatomic) BOOL canGestureClose;

- (void)containerWillStartLoading:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)handleCloseWebViewNoti:(id)a0;
- (void)handleCloseWebViewBlock;
- (BOOL)shouldResizeForIpad;
- (void)handleIpadOrientationChange;
- (void)setupCloseWebviewGesture;
- (void)handleTapCloseWebViewGesture:(id)a0;
- (void)handlePanCloseWebViewPanGesture:(id)a0;
- (void)handleGestureCloseAction;
- (void)handleCloseWebViewController;
- (void)__recordDpLoadingTimeout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
