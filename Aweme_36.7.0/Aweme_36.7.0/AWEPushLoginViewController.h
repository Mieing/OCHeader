@class DYRouterModel, NSString, AWELoginBackgroundView, DYLastLoginUserModel, UIView, NSObject, AWEUserContext;
@protocol AWEUserLoginUILayoutConfig, AWELastAccountLoginView, AWEUserLoginUIAmbientConfig, OS_dispatch_source;

@interface AWEPushLoginViewController : UIViewController <AWELastAccountLoginViewDelegate> {
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) DYLastLoginUserModel *accountNeedLogin;
@property (retain, nonatomic) NSString *loginTitle;
@property (retain, nonatomic) AWEUserContext *userContext;
@property (retain, nonatomic) NSObject<AWEUserLoginUILayoutConfig> *layoutConfig;
@property (retain, nonatomic) AWELoginBackgroundView *containerView;
@property (retain, nonatomic) UIView<AWELastAccountLoginView> *oneLoginView;
@property (retain, nonatomic) NSObject<AWEUserLoginUIAmbientConfig> *ambientConfig;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) BOOL isRecievedResult;
@property (nonatomic) long long clickCount;
@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL shouldResetBtn;
@property (copy, nonatomic) NSString *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;
+ (Class)aAWEUserModuleConfigCommonAdapterClass;

- (void)p_setupNavigationBar;
- (void)countdownFinish;
- (void)clickLoginWithView:(id)a0 index:(unsigned long long)a1;
- (void)clickOtherLoginWithView:(id)a0;
- (void)otherLoginAction;
- (id)aAWEUserModuleServiceDOUYINAdapter;
- (id)aAWEUserModuleConfigCommonAdapter;
- (void)didReceiveLongConnectionNotification:(id)a0;
- (void)startCheckPushResultWithToken:(id)a0;
- (void)verifyCompletionWithSuccess:(BOOL)a0;
- (void)checkPushResultWithToken:(id)a0;
- (void)rejectLogin;
- (void)helpAction;
- (void)handleDeviceOrientationChangeNotification;
- (void)sendPush;
- (id)p_trackInfo;
- (void)clickHelpWithView:(id)a0;
- (id)initWithRouterModel:(id)a0 lastLoginUserModel:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)closeAction;
- (void)viewDidLayoutSubviews;
- (void)invalidateTimer;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)deviceOrientationDidChange:(id)a0;

@end
