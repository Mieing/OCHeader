@class AWEAwemeModel, NSString, UIImageView, NSTimer, UILabel, UIView, UIButton;
@protocol AWETimingCloseAlertViewControllerDelegate;

@interface AWETimingCloseAlertViewController : UIViewController

@property (retain, nonatomic) UIView *dismissView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (nonatomic) long long autoCloseInterval;
@property (retain, nonatomic) NSTimer *autoCloseTimer;
@property (nonatomic) double originBrightness;
@property (nonatomic) BOOL brightnessDidChange;
@property (nonatomic) long long screenOffInterval;
@property (retain, nonatomic) NSTimer *screenOffTimer;
@property (nonatomic) BOOL originDisableIdleTimer;
@property (nonatomic) BOOL didAppear;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long totalTime;
@property (nonatomic) unsigned long long timingCloseType;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (weak, nonatomic) id<AWETimingCloseAlertViewControllerDelegate> delegate;

- (void)onAppWillResignActive;
- (void)onAppDidBecomeActiveFromResign;
- (void)dismissViewDidClick;
- (void)autoCloseDidFire;
- (void)resumeBrightnessIfNeeded;
- (void)trackNoticeShow;
- (void)resumeBrightnessIfNeeded:(BOOL)a0;
- (void)trackNoticeClickWithPosition:(id)a0 content:(id)a1;
- (void)trackConfirmTimingCloseTime;
- (void)screenOffDidFire;
- (void)contentViewDidClick;
- (void)leftButtonDidClick;
- (void)rightButtonDidClick;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)hideContentView;
- (void)showContentView;
- (void)setData;

@end
