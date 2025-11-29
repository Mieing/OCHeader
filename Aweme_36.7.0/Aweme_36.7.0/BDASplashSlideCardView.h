@class CAGradientLayer, BDASplashSlideCardViewModel, UILabel, BDImageView;

@interface BDASplashSlideCardView : BDASplashComplianceBaseView

@property (retain, nonatomic) BDASplashSlideCardViewModel *viewModel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) BDImageView *guideIcon;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *firstTitle;
@property (retain, nonatomic) UILabel *secondTitle;
@property (nonatomic) BOOL hasSlideUp;
@property (nonatomic) double slideDistance;

- (void)addGesture;
- (void)addCustomView;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)splashJump;
- (BOOL)whetherPostponeSplashView;
- (void)splashClickWithPoint:(struct CGPoint { double x0; double x1; })a0 isValid:(BOOL)a1;
- (void)onPanGesture:(id)a0;
- (id)getAttributedStringWithText:(id)a0 withSize:(double)a1;
- (void)setupCardWithDictionary:(id)a0 index:(long long)a1;
- (id)setupImageViewWithImage:(id)a0 Dictionary:(id)a1;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)dealloc;

@end
