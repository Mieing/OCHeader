@class BDASplashButtonTouchModel, BDASplashBannerView, NSMutableArray;

@interface BDASplashComplianceBannerView : BDASplashComplianceBaseView

@property (retain, nonatomic) BDASplashBannerView *bannerView;
@property (retain, nonatomic) NSMutableArray *triangleViewArray;
@property (nonatomic) double bottomHeight;
@property (nonatomic) double bottomOffset;
@property (nonatomic) BOOL btnAnimationHasShown;
@property (retain, nonatomic) BDASplashButtonTouchModel *touchModel;

- (void)addGesture;
- (id)getSpecificControlsForAnimation;
- (void)setupSensitivityInfo;
- (void)loadAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)loadBaseButton;
- (BOOL)clickedBreathViewWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)touchSuccess:(id)a0 isLongPress:(BOOL)a1;
- (void)touchFail:(id)a0;
- (void)loadBannerViewBreathAnimation;
- (void)loadFirstPhaseBannerViewAnimation;
- (void)loadBannerViewHalationAnimation;
- (void)loadSecondPhaseBannerViewAnimation;
- (void)loadSecondPhaseBannerViewTriangleAnimation;
- (id)getInteractionView;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)setupView;

@end
