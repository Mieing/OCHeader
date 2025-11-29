@class BDASplashUpgradeSlideViewModel, NSString, UILabel, UIView;

@interface BDASplashUpgradeSlideView : BDASplashComplianceBaseSlideView <CAAnimationDelegate>

@property (retain, nonatomic) BDASplashUpgradeSlideViewModel *viewModel;
@property (retain, nonatomic) UILabel *mainTitle;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) UIView *arrowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewHolder:(id)a1 viewModel:(id)a2;
- (void)loadComplianceAnimation;
- (void)loadArrowAnimation;
- (void).cxx_destruct;
- (void)updateConfig;
- (void)show;
- (void)setupView;

@end
