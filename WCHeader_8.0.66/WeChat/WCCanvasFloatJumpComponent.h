@class WCCanvasComponent, MMUILabel, MMUIImageView;

@interface WCCanvasFloatJumpComponent : WCCanvasComponent

@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUIImageView *iconView;
@property (retain, nonatomic) WCCanvasComponent *buttonComponent;
@property (nonatomic) long long jumpCount;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)dealloc;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentReportAddExposureCount;
- (void)initViews;
- (void)initButtonComponent;
- (void)initTitleView;
- (void)initBgButton;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)a0;
- (void).cxx_destruct;

@end
