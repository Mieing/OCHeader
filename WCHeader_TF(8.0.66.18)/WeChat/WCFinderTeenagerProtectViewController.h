@class NSString, MMUIViewController, WCFinderLimitProtectCommonHeadView, MMLimitedModeVerifyPasswordUtilLogic, MMUIButton;

@interface WCFinderTeenagerProtectViewController : MMUIViewController <MMLimitedModeVerifyPasswordUtilLogicDelegate>

@property (retain, nonatomic) WCFinderLimitProtectCommonHeadView *commonHeadView;
@property (retain, nonatomic) MMUIButton *modeChangeBtn;
@property (retain, nonatomic) MMLimitedModeVerifyPasswordUtilLogic *verifyPwdLogic;
@property (weak, nonatomic) MMUIViewController *fromVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)feedBackToFindPage;
- (void)setUpUI;
- (void)viewWillLayoutSubviews;
- (void)setUpCommonHeadViewContent;
- (void)layoutSubViewsConstraint;
- (void)onClickModeChangeBtn;
- (void)onVerifyPasswordSuccessTicket:(id)a0;
- (int)commentScene;
- (void).cxx_destruct;

@end
