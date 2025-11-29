@class BDImageView, BDASplashGiftMeetViewModel, UIView, BDASplashComplianceSlideUpTipsView, UILabel;

@interface BDASplashGiftMeetView : BDASplashComplianceBaseSlideView

@property (retain, nonatomic) BDASplashGiftMeetViewModel *viewModel;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) BDASplashComplianceSlideUpTipsView *tipsView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *boxShadowView;
@property (retain, nonatomic) BDImageView *beltImageView;
@property (retain, nonatomic) BDImageView *giftImageView;
@property (retain, nonatomic) BDImageView *atmosphereAnimationImage;

- (void)addGesture;
- (void)loadAnimation;
- (void)updateSubviewLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)loadShadow;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)setupView;

@end
