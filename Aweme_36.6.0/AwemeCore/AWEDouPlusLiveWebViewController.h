@class UIView;

@interface AWEDouPlusLiveWebViewController : AWEWebViewController

@property (retain, nonatomic) UIView *webviewMarkView;
@property (nonatomic) long long maxDpLoadingInterval;
@property (nonatomic) BOOL isDpLoadingTimeout;
@property (nonatomic) BOOL canGestureClose;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)handleCloseWebViewNoti:(id)a0;
- (BOOL)shouldResizeForIpad;
- (void)handleIpadOrientationChange;
- (void)setupCloseWebviewGesture;
- (void)setupWebViewLayout;
- (void)handleTapCloseWebViewGesture:(id)a0;
- (void)handlePanCloseWebViewPanGesture:(id)a0;
- (void)handleGestureCloseAction;
- (void)handleCloseWebViewController;
- (void)__recordDpLoadingTimeout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadRequest;

@end
