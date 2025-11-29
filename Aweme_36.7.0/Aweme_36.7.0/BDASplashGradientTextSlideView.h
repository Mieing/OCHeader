@class BDASplashGradientTextSlideViewModel, CAGradientLayer, UILabel, BDASplashComplianceSlideUpTipsView;

@interface BDASplashGradientTextSlideView : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashGradientTextSlideViewModel *viewModel;
@property (retain, nonatomic) BDASplashComplianceSlideUpTipsView *guideView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) CAGradientLayer *maskLayer;

- (void)loadAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)setupView;

@end
