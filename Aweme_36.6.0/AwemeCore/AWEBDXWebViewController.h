@class NSString;

@interface AWEBDXWebViewController : AWEBDXBaseWebViewController <UIScrollViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addParametersIfURLStringHasIronManScheme:(id)a0;

- (void)setupNotification;
- (void)handleDPBStatusNotification:(id)a0;
- (BOOL)webInterceptor:(id)a0 checkIronManJumpParam:(id)a1;
- (BOOL)shouldHandleTitleChangeWithURL:(id)a0;
- (void)openURL:(id)a0 checkIronManJumpParam:(id)a1;
- (void)handleBridgeClose;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLoad;
- (void)setup;
- (id)__webView;
- (void)setupWebView;

@end
