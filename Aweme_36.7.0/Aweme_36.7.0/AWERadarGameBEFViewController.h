@class NSDate, UIView, NSString, UIImageView, UIButton, BEFView, IESEffectModel, UILabel;
@protocol AWEPublishProgressViewProtocol;

@interface AWERadarGameBEFViewController : UIViewController <BEFViewDelegate>

@property (copy, nonatomic) IESEffectModel *gameEffectModel;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) BEFView *befView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *blurIconImageView;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *loadingBaseView;
@property (retain, nonatomic) UIView *loadingProgressView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *settingButton;
@property (retain, nonatomic) UIView<AWEPublishProgressViewProtocol> *progressView;
@property (nonatomic) BOOL previousKeepAlive;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createLoadingView;
- (void)settingAction;
- (BOOL)msgProc:(unsigned int)a0 arg1:(long long)a1 arg2:(long long)a2 arg3:(const char *)a3;
- (void)loadGameEffectModel;
- (void)pauseEffect;
- (void)createBEFView;
- (void)setupProgressView;
- (id)generateInitParam;
- (void)updateNavButtonStatus:(BOOL)a0;
- (id)initWithGameEffectModel:(id)a0;
- (void)backAction;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (void)resumeEffect;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)setupNavigationBar;
- (void)addObservers;

@end
