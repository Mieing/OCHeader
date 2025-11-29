@class CAGradientLayer, BDASplashNewEnhanceSlideViewModel, UILabel, BDImageView;

@interface BDASplashNewEnhanceSlideView : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashNewEnhanceSlideViewModel *viewModel;
@property (retain, nonatomic) BDImageView *tipsView;
@property (retain, nonatomic) CAGradientLayer *tipsMaskLayer;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)loadAnimation;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)animateTitle;
- (void)animateSubTitle;
- (void)animateTipsView;
- (void).cxx_destruct;
- (void)show;
- (void)setupView;

@end
