@class LOTAnimationView, NSString;

@interface AWEInterstitialRevisitView : UIView

@property (nonatomic) BOOL hasJumpButton;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) NSString *backgroundUrl;
@property (retain, nonatomic) NSString *buttonText;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ jumpAction;

- (void)setupCloseButton;
- (void)onClickCloseButton:(id)a0;
- (void)setupBackground;
- (void)showOn:(id)a0;
- (void)preLoadLottieView;
- (void)setupJumpButton;
- (void)onClickJumpButton:(id)a0;
- (void)getSettingsConfig;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
