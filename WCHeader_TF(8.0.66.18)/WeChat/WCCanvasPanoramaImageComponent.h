@class WCPanoramaImageView, MMProgressViewEx, NSString;

@interface WCCanvasPanoramaImageComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) WCPanoramaImageView *panoramaImageView;
@property (retain, nonatomic) MMProgressViewEx *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)initViews;
- (void)dealloc;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (BOOL)shouldForbidDelegateShowArrowDown;
- (void)tryStartMonitoring;
- (void)tryStopMonitoring;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void).cxx_destruct;

@end
