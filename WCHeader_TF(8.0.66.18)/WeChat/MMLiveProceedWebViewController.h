@class CAGradientLayer, MMTimer, NSString, UIView, UIButton;

@interface MMLiveProceedWebViewController : MMWebViewController

@property (retain, nonatomic) UIView *bottomBackgroundView;
@property (retain, nonatomic) UIView *gradientBackgroundView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *bottomOperationView;
@property (retain, nonatomic) UIButton *proceedButton;
@property (retain, nonatomic) MMTimer *countDownTimer;
@property (nonatomic) long long innerReadTimerCountdown;
@property (retain, nonatomic) NSString *proceedButtonTitle;
@property (copy, nonatomic) id /* block */ proceedActionCallback;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)configNavigationBarItem;
- (void)startCountdownTimer:(long long)a0;
- (void)updateCountTimer;
- (void)clearCountdownTimer;
- (void)updateButtonTitle:(id)a0;
- (void)setupUI;
- (void)layoutUI;
- (void)onClickProceedAction:(id)a0;
- (void).cxx_destruct;

@end
