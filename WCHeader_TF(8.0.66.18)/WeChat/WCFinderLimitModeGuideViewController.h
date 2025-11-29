@class UINavigationController, NSString, UIView, MMLimitedModeVerifyPasswordUtilLogic, UIViewController;

@interface WCFinderLimitModeGuideViewController : MMUIViewController <MMLimitedModeVerifyPasswordUtilLogicDelegate> {
    MMLimitedModeVerifyPasswordUtilLogic *m_limitedModeVerifyPasswordUtilLogic;
}

@property (nonatomic) int commenScene;
@property (retain, nonatomic) UIView *detailView;
@property (weak, nonatomic) UINavigationController *navVC;
@property (weak, nonatomic) UIViewController *targetVC;
@property (nonatomic) long long themeStyle;
@property (nonatomic) long long lastShowTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)displayType:(int)a0;
+ (BOOL)shouldShowLimitModeGuidForType:(long long)a0;
+ (void)displayToRootView:(id)a0 commentScene:(int)a1 type:(long long)a2;
+ (void)displayToRootView:(id)a0 commentScene:(int)a1 type:(long long)a2 ignoreShareFeedListVC:(BOOL)a3;
+ (void)presendGuideVC:(id)a0 toTargetVC:(id)a1;
+ (BOOL)checkShouldShowGuideView;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateDetailFrame;
- (void)setupBackgroundView;
- (void)addTapClaseActionToView:(id)a0;
- (void)showDetailWithAnimation;
- (struct pair<double, double> { double x0; double x1; })animationPosition;
- (id)createDetailLabel:(double)a0 contentAttrs:(id)a1;
- (id)wrapDetailView:(id)a0;
- (id)createSettingBtn:(BOOL)a0;
- (id)createIKnowButton:(double)a0 verticalPadding:(double)a1;
- (id)createBottomIKnowButton:(double)a0;
- (id)createBottomWeakIKnowButton:(double)a0;
- (id)createBottomNoMoreButton:(double)a0;
- (id)createIcon:(BOOL)a0;
- (id)cornerView:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 cornerRadius:(double)a2 needShadow:(BOOL)a3;
- (id)buildMiddleGuildView;
- (id)buildBottomGuideView;
- (void)addCloseIconToView:(id)a0;
- (void)onTapBlankArea:(id)a0;
- (void)onClickIKnow;
- (void)onClickSetting;
- (void)onClickNoMore;
- (void)onClickCloseBtn;
- (void)close:(BOOL)a0;
- (void)triggerReportByOutType:(unsigned long long)a0;
- (void)onGoToSetLimitedModeViewControllerSuccess;
- (void).cxx_destruct;

@end
