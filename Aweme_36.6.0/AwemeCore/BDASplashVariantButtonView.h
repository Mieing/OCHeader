@class BDASplashComplianceButtonView, BDASplashVariantButtonViewModel, UILabel, BDImageView;

@interface BDASplashVariantButtonView : BDASplashComplianceBaseView

@property (retain, nonatomic) BDASplashComplianceButtonView *bgButtonView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) BDImageView *goodsImageView;
@property (retain, nonatomic) BDImageView *logoImageView;
@property (retain, nonatomic) BDImageView *guideImageView;
@property (retain, nonatomic) BDImageView *atmosphereImageView;
@property (retain, nonatomic) BDASplashVariantButtonViewModel *viewModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)setupView;

@end
