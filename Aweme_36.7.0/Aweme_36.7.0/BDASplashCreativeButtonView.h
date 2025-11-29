@class CAGradientLayer, UIView, CAReplicatorLayer, BDASplashCreativeButtonViewModel, UILabel, BDASplashCreativeButton, BDImageView;

@interface BDASplashCreativeButtonView : BDASplashComplianceBaseView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UILabel *subGuideLabel;
@property (retain, nonatomic) BDImageView *guideImageView;
@property (retain, nonatomic) BDASplashCreativeButton *creativeButton;
@property (retain, nonatomic) UIView *mainGuideView;
@property (retain, nonatomic) CAReplicatorLayer *breathReplicatorLayer;
@property (retain, nonatomic) BDASplashCreativeButtonViewModel *viewModel;

- (void)addGesture;
- (void)loadAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)splashValidClickWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateSubViewLayout;
- (void).cxx_destruct;
- (void)updateConfig;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupView;

@end
