@class LOTAnimationView, UIImageView, UILabel, UIView;

@interface AWEPadAutoPlaySwitchView : UIView

@property (retain, nonatomic) UIView *switchContentView;
@property (retain, nonatomic) UILabel *timerView;
@property (retain, nonatomic) LOTAnimationView *pauseAnimationView;
@property (retain, nonatomic) LOTAnimationView *playAnimationView;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (retain, nonatomic) UIImageView *refreshView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (nonatomic) BOOL showingTimerTip;
@property (nonatomic) BOOL newStyle;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)updateViewWithAutoPlayState:(long long)a0 animated:(BOOL)a1;
- (void)updatePlayTimeTip:(BOOL)a0 withText:(id)a1 autoPlayState:(long long)a2;
- (void)updateLayoutWithScale:(double)a0;
- (void)setupBackupUI;
- (void)loadLottie;
- (void)removeBackupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
