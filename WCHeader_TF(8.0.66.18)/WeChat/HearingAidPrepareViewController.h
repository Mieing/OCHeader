@class NSString, WCProgressCircleView, UIView, CustomAnimator, HearingAidInitLogic;

@interface HearingAidPrepareViewController : MMUIViewController <MMTipsViewControllerDelegate, WCAudioModuleDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) WCProgressCircleView *progressView;
@property (nonatomic) BOOL isCheckMicroPermission;
@property (nonatomic) unsigned long long currentMode;
@property (retain, nonatomic) HearingAidInitLogic *logic;
@property (retain, nonatomic) CustomAnimator *progressAnimator;
@property (retain, nonatomic) UIView *descLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)dealloc;
- (void)initLogic;
- (id)init;
- (void)setUpUI;
- (void)setUpHeaderView;
- (id)genTitle;
- (id)genDescOpened;
- (void)genDesc;
- (id)appendModeOffDescription:(id)a0;
- (void)setUpFooterView;
- (void)updateLayout;
- (void)onStartBtnClick;
- (void)showAuthorizationForMediaTypeAudioWithHandler:(id /* block */)a0;
- (void)showAuthorizationForMediaTypeAudioWithHandler:(id /* block */)a0 cancelTitle:(id)a1;
- (void)goToSettingAuthorization;
- (void)onCancelBtnClick;
- (void)onRetryBtnClick;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)onBackClick;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
