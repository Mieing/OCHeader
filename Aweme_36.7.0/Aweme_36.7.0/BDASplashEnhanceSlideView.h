@class BDASplashEnhanceSlideTipsView, BDASplashEnhanceSlideViewModel, UILabel, UIView, BDImageView;

@interface BDASplashEnhanceSlideView : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashEnhanceSlideViewModel *viewModel;
@property (retain, nonatomic) BDASplashEnhanceSlideTipsView *tipsView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) BDImageView *guideImageView;
@property (retain, nonatomic) UIView *gradientView;

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
