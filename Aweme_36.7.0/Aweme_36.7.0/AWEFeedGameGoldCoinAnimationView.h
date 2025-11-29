@class LOTAnimationView, AWEFeedGameScrollNumberLabel;

@interface AWEFeedGameGoldCoinAnimationView : UIView

@property (nonatomic) long long amount;
@property (retain, nonatomic) LOTAnimationView *goldCoinLottieView;
@property (retain, nonatomic) AWEFeedGameScrollNumberLabel *scrollNumberLabel;

- (id)ironManModuleService;
- (id)initWithGoldCoinAmount:(long long)a0;
- (void)updateAmount:(long long)a0;
- (id)gameManager;
- (void).cxx_destruct;
- (void)setupUI;
- (void)playAnimation;

@end
