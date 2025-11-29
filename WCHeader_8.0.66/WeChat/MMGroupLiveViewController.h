@class MMGroupLiveOnlineUserProfileView, NSString, MMGroupLiveTask, MMLiveFullScreenTipsView;

@interface MMGroupLiveViewController : MMLiveViewController <MMGroupLiveLogicDelegate, MMLiveFullScreenTipsViewDelegate, MMLiveNameVerifyViewControllerDelegate, MMUIViewControllerExt>

@property (readonly, nonatomic) MMGroupLiveTask *liveTask;
@property (retain, nonatomic) MMGroupLiveOnlineUserProfileView *profileView;
@property (retain, nonatomic) MMLiveFullScreenTipsView *kickedOutTipsView;
@property (nonatomic) long long currOrientation;
@property (nonatomic) long long orientationBeforeMinimize;
@property (nonatomic) long long previousOrientation;
@property (retain, nonatomic) NSString *lastFromVC;
@property (readonly, nonatomic) NSString *roomId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initData;
- (void)initLiveLogic;
- (void)initReporter;
- (BOOL)shouldSupportLandScape;
- (unsigned long long)inner_supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutOperationView;
- (id)createOperationView;
- (id)createCompleteViewController;
- (void)showLiveStarterViewController;
- (long long)roleType;
- (void)createLive:(id)a0;
- (void)gotoUserProfile:(id)a0 isAnchorHeadImage:(BOOL)a1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)shouldShowCloseButtonWhenMinimized;
- (void)viewDidTransitionToNewSize;
- (void)onWillTransitionToMinimize;
- (void)onEndTransitionWithPreState:(long long)a0;
- (unsigned long long)systemCapabilityAuthScene;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onCreateLive:(id)a0;
- (void)onJoinLive:(id)a0;
- (void)onStartCheckConnectMicWithVerifyUrl:(id)a0;
- (void)onStartCheckCreateLiveWithVerifyUrl:(id)a0;
- (void)onKickedOut;
- (void)onMMLiveNameVerifyViewControllerNameVerifySucceeded:(long long)a0;
- (void)onMMLiveNameVerifyViewControllerNameVerifyFailed:(long long)a0;
- (void)onMMLiveActionButtonClicked;
- (void)onMMLiveOperationUserHeadImageClicked:(id)a0 userInfo:(id)a1;
- (void)MMUIViewControllerDidAppear:(id)a0;
- (void)MMUIViewControllerWillDisppear:(id)a0;
- (void).cxx_destruct;

@end
