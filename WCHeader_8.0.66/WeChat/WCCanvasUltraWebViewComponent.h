@class MMWebViewController;

@interface WCCanvasUltraWebViewComponent : WCCanvasComponent

@property (retain, nonatomic) MMWebViewController *webViewController;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)layoutSubviews;
- (void)initViews;
- (void)initWebView;
- (id)fetchRequestUrlWithUrl:(id)a0 andUpdateExtraInfo:(inout id)a1;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)setComponentContentViewScrollEnabled:(BOOL)a0;
- (BOOL)isComponentContentViewScrolledToTop;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (BOOL)isChildViewController;
- (void).cxx_destruct;

@end
