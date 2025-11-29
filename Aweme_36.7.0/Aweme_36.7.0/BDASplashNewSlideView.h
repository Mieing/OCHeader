@class CAGradientLayer, UILabel, BDASplashNewSlideViewModel, BDImageView;

@interface BDASplashNewSlideView : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashNewSlideViewModel *viewModel;
@property (retain, nonatomic) BDImageView *guideImageView;
@property (retain, nonatomic) BDImageView *effectImageView;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UILabel *subGuideLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)splashTrackEventWithLabel:(id)a0 extra:(id)a1 adExtra:(id)a2;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (id)getGuideLabelText:(id)a0 fontOfSize:(double)a1;
- (void).cxx_destruct;
- (void)setupView;

@end
