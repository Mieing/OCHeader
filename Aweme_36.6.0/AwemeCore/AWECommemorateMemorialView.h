@class UIImageView, LOTAnimationView, UIView, AWEUserModel, YYLabel;

@interface AWECommemorateMemorialView : UIView

@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (nonatomic) double descriptionLabelHeight;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *flowerLocalView;
@property (retain, nonatomic) LOTAnimationView *flowerLottieView;
@property (nonatomic) BOOL hasFlowerBloomed;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)__descriptionWithRIPModel:(id)a0;
+ (double)__heightOfDescription:(id)a0;
+ (double)viewHeightWihtRipModel:(id)a0;

- (void)__updateUI;
- (void)__setupUI;
- (BOOL)__isUserUpdated:(id)a0;
- (void)__configDescriptionLabel;
- (void)__updateFlowerLottie;
- (void)playFlowerLottie;
- (void)__openURL:(id)a0;
- (void)__addFlowerFromLocalLottiePath:(id)a0 inView:(id)a1;
- (void)__downloadLottieWithURL:(id)a0 savePath:(id)a1 lottiePath:(id)a2 complete:(id /* block */)a3;
- (void)flowerLottieViewTapped;
- (void)playFlowerLottieSwing;
- (void)playFlowerLottieBloom;
- (void)playFlowerLottieSecondLoop;
- (void)playFlowerLottieFirstLoop;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithUser:(id)a0;

@end
