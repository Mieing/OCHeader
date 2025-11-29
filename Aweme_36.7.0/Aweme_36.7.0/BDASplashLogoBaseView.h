@class BDASplashSkipButton, BDASplashVideoContainer, UIView, BDASplashShadowLabel, BDASplashLogoViewModel;
@protocol BDASplashLogoBaseDelegate;

@interface BDASplashLogoBaseView : BDASplashBaseView

@property (retain, nonatomic) BDASplashShadowLabel *wifiView;
@property (retain, nonatomic) BDASplashVideoContainer *videoView;
@property (retain, nonatomic) UIView *extraView;
@property (retain, nonatomic) UIView *logoView;
@property (nonatomic) BOOL isLargeLogo;
@property (weak, nonatomic) id<BDASplashLogoBaseDelegate> delegate;
@property (retain, nonatomic) BDASplashLogoViewModel *viewModel;
@property (retain, nonatomic) BDASplashSkipButton *skipButton;

- (void)addAccessibilityElement:(id)a0;
- (double)topIconCenterY;
- (void)skipButtonClicked:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 viewModel:(id)a2;
- (void).cxx_destruct;
- (void)updateConfig;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupViews;

@end
