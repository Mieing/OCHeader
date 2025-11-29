@class BDASplashBannerView, CAGradientLayer, BDASplashNewSlideButtonViewModel, BDImageView;

@interface BDASplashNewSlideButtonView : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashNewSlideButtonViewModel *viewModel;
@property (retain, nonatomic) BDASplashBannerView *bannerView;
@property (retain, nonatomic) BDImageView *guideImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (id)getSpecificControlsForAnimation;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void).cxx_destruct;
- (void)setupView;

@end
