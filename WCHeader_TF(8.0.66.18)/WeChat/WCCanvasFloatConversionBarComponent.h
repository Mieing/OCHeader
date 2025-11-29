@class WCCanvasComponent, UIColor, UIImageView, UIVisualEffectView, NSString, MMUILabel;

@interface WCCanvasFloatConversionBarComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) WCCanvasComponent *buttonComponent;
@property (retain, nonatomic) UIImageView *backgroundContentView;
@property (retain, nonatomic) UIVisualEffectView *backgroundBlurView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUILabel *descView;
@property (nonatomic) unsigned long long showingAnimationStage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } buttonOriFrame;
@property (retain, nonatomic) UIColor *buttonOriBackgroundColor;
@property (retain, nonatomic) UIColor *buttonOriTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calcSizeForCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;

- (void)dealloc;
- (void)generateContentViews;
- (void)updateContentViewsLayout;
- (void)prepareForAnimation;
- (void)configureWithCanvasItem:(id)a0 advertiseInfo:(id)a1 orientation:(long long)a2;
- (void)componentWillAppearInMainScreen:(BOOL)a0;
- (void)componentWillDisappearInMainScreen:(BOOL)a0;
- (void)componentDidFullyAppearInMainScreen:(BOOL)a0;
- (void)componentReportAddExposureCount;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)a0;
- (unsigned long long)fetchComponentInitAnimationStage;
- (void)showComponentInitAnimation;
- (void)showComponentAnimationHold1;
- (void)showComponentAnimationStage2;
- (void)showComponentAnimationHold2;
- (void)showComponentAnimationStage3;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (id)loadImageForUrl:(id)a0;
- (double)fetchMaxWidthForContent;
- (void).cxx_destruct;

@end
