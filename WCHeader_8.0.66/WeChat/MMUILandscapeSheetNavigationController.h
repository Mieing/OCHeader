@class CAShapeLayer;

@interface MMUILandscapeSheetNavigationController : MMUINavigationController

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) BOOL wasPortrait;

+ (double)navBarBottomtInLandscape;

- (id)init;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void)viewDidLayoutSubviews;
- (void)reloadIfNeeded;
- (void)doReload;
- (void)toggleNavExtraSpaceHidden:(BOOL)a0;
- (BOOL)isPortrait;
- (void)setupMaskLayerIfNeeded;
- (void)updateSupportedOrientationMaskInNavStack:(unsigned long long)a0;
- (void)PushViewController:(id)a0 animated:(BOOL)a1 isForceFullScreen:(BOOL)a2 isAutoRotatePortrait:(BOOL)a3 completion:(id /* block */)a4;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
