@class NSString, NSTimer, NSDictionary, UIView, IESIMBulletContainerContext;
@protocol IESIMBulletContainerProtocol;

@interface AWEIMBulletContainerViewController : UIViewController <IESIMBulletContainerLifeCycleDelegate, AWERouterViewControllerProtocol, AWEIMInAppPushProtocol>

@property (retain, nonatomic) UIView<IESIMBulletContainerProtocol> *bulletContainerView;
@property (retain, nonatomic) IESIMBulletContainerContext *bulletContext;
@property (nonatomic) BOOL forbidMsgScrollWhileOpen;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *messageId;
@property (nonatomic) long long transitionType;
@property (nonatomic) long long timeout;
@property (retain, nonatomic) NSTimer *showTimer;
@property (nonatomic) BOOL isVisible;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (copy, nonatomic) NSString *containerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)canShowInnerPush;
- (void)__setupUI;
- (void)__setupKVO;
- (void)__notifyLynxPageStatusChangedIfNeededWithShowing:(BOOL)a0;
- (void)__startTimer;
- (void)__handleCloseIMBulletContainerViewControllerNotification:(id)a0;
- (void)__stopTimer;
- (void)__closeIMBulletContainerViewController;
- (void)__autoDismissCaseTimeout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
