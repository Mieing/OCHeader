@class NSTimer, UIView, UIImage, NSString, AWEThemeChooseBtn, AWEThemeChooseTimePanelView, LOTAnimationView, AWEThemeChoosePanelView;

@interface AWEUIThemeChooseViewController : UIViewController <AWEThemeChoosePanelViewDelegate, AWEThemeChooseTimePanelViewDelegate>

@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIView *centerMainView;
@property (retain, nonatomic) AWEThemeChooseBtn *lightBtn;
@property (retain, nonatomic) AWEThemeChooseBtn *darkBtn;
@property (retain, nonatomic) AWEThemeChooseBtn *selectedBtn;
@property (retain, nonatomic) AWEThemeChoosePanelView *choosePanelView;
@property (retain, nonatomic) AWEThemeChooseTimePanelView *chooseTimePanelView;
@property (retain, nonatomic) UIImage *lastVCImage;
@property (retain, nonatomic) LOTAnimationView *lightAnimationView;
@property (retain, nonatomic) LOTAnimationView *darkAnimationView;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL lastIsLightModel;
@property (nonatomic) BOOL needShowAutoChangeWarning;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *prePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)addNotification;
- (void)statusBarOrientationDidChange:(id)a0;
- (void)didThemeChanged;
- (id)aAWEPadBizUIAdapter;
- (BOOL)adapterPadGridEnable;
- (void)applicationStateChange;
- (void)themeChoosePanelDidClickSwitch:(id)a0 themeChoosePanelView:(id)a1;
- (void)themeChoosePanelDidClickSelectLable:(id)a0;
- (void)themeChooseTimePanelViewDidClickFollowSystem:(id)a0;
- (void)themeChooseTimePanelViewDidClickUserCustom:(id)a0;
- (void)themeChooseTimePanelViewDidSetDarkTime:(id)a0 lightTime:(id)a1 themeChooseTimePanelView:(id)a2;
- (id)p_captureCurrentScreen;
- (void)setUpMainUI;
- (void)setUpTimer;
- (void)p_showAnimationCompletion:(id /* block */)a0;
- (void)p_viewDismissTracker;
- (void)setUpNavigation;
- (void)setUpChoosePanelView;
- (void)setUpCenter;
- (void)setUpBackAnimationView;
- (void)changeThemeModeLightEnable:(BOOL)a0 userAction:(BOOL)a1;
- (void)getUserLocalCustom;
- (void)backBtnDidClick;
- (void)themeBtnDidClick:(id)a0;
- (void)setupCenterMainViewConstraints;
- (void)playBackAnimation:(BOOL)a0;
- (void)autoChangeTheme;
- (void)changeUIModeLightEnable:(BOOL)a0;
- (void)addAimationToBtn:(id)a0;
- (void)p_trackerChooseSystemOrSun:(id)a0 isDismiss:(BOOL)a1;
- (void)p_trackerChooseTime:(id)a0 lightTime:(id)a1 isDismiss:(BOOL)a2;
- (id)p_animationImageView;
- (void)p_trackerThemeSetting;
- (void)p_trackerCommentThemeSetting;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)invalidateTimer;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
