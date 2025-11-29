@class UITapGestureRecognizer, NSMutableArray, MultiDeviceCardView, MultiDeviceLoginInfo, MMUINavigationBar, MMUILabel, UIScreenEdgePanGestureRecognizer, MultiDeviceManageLogic, UINavigationItem, WCSheetView, NSArray, MultiDeviceLoginLogic, NSString, MultiDeviceAutoLoginLogic;

@interface MultiDeviceManageViewController : MMUIViewController <MultiDeviceCardViewDelegate, MultiDeviceLoginLogicDelegate, MultiDeviceManageLogicDelegate>

@property (retain, nonatomic) MMUINavigationBar *customNavigationBar;
@property (retain, nonatomic) UINavigationItem *customNavigationItem;
@property (retain, nonatomic) WCSheetView *sheetView;
@property (retain, nonatomic) MultiDeviceLoginInfo *deviceLoginInfo;
@property (retain, nonatomic) MultiDeviceLoginLogic *deviceLoginLogic;
@property (retain, nonatomic) MultiDeviceCardView *deviceLoginCardView;
@property (retain, nonatomic) MMUILabel *deviceLoginGuideLabel;
@property (retain, nonatomic) MultiDeviceManageLogic *deviceManageLogic;
@property (retain, nonatomic) NSArray *deviceManageInfoList;
@property (retain, nonatomic) NSMutableArray *deviceManageCardViewList;
@property (retain, nonatomic) MultiDeviceAutoLoginLogic *autoLoginLogic;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (nonatomic, getter=isUserOpen) BOOL userOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithLoginInfo:(id)a0;
- (void)viewDidLoad;
- (void)report;
- (void)viewDidTransitionToNewSize;
- (void)initNavigationBar;
- (void)initView;
- (void)initGesture;
- (void)updateLayouts;
- (id)viewController;
- (BOOL)disMissSelf;
- (BOOL)useCustomNavibar;
- (BOOL)shouldHideNavigationBar;
- (BOOL)isLogin;
- (BOOL)isManage;
- (void)reloadManageInfoList;
- (void)reloadManageCardViewList;
- (void)onTapSheetView:(id)a0;
- (void)handleScreenEdgePanGesture:(id)a0;
- (void)onTapCloseBarButton;
- (void)onTapHelpBarButton;
- (double)cardViewMaxWidth;
- (double)cardViewFullScreenHeight;
- (void)shouldUpdateRightBarButtonItemWithShow:(BOOL)a0;
- (void)onJumpProtocolUrl:(id)a0;
- (void)onTapConfirmLoginButtonWithInfo:(id)a0;
- (void)onTapCancelLoginButton;
- (void)reportLoginEndWithResult:(BOOL)a0 confirmInfo:(id)a1;
- (void)onTapManageHelpButtonWithInfo:(id)a0;
- (void)onTapManageExpandButtonWithInfo:(id)a0;
- (void)onTapNotificationButtonWithNewState:(BOOL)a0;
- (void)onTapSendFileButtonWithInfo:(id)a0;
- (void)onTapLockButtonWithInfo:(id)a0;
- (void)onTapAutoLoginCheckboxWithInfo:(id)a0;
- (void)onTapKeepAliveCheckboxWithInfo:(id)a0;
- (void)onTapManageLogoutButtonWithInfo:(id)a0;
- (void)onConfirmLoginSucceeded;
- (void)onConfirmLoginFailed;
- (void)onCancelLogin;
- (void)onManageInfoUpdate;
- (void).cxx_destruct;

@end
