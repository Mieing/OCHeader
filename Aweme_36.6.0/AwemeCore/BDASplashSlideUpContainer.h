@class BDASplashBannerView, BDASplashSlideUpView;

@interface BDASplashSlideUpContainer : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashBannerView *bannerView;
@property (retain, nonatomic) BDASplashSlideUpView *slideView;
@property (nonatomic) double bottomHeight;
@property (nonatomic) double bottomMargin;

- (id)getSpecificControlsForAnimation;
- (void)loadAnimation;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void).cxx_destruct;
- (void)setupView;

@end
