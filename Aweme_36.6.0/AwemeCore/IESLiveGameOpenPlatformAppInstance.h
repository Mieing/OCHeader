@class IESLiveGamePlatformTracker, HTSEventContext, NSString, IESLiveGameOpenPlatformAppInstanceContext, IESLiveGameOpenPlatformNotificationMonitor, IESLiveComponentContext;
@protocol IESLiveGameOpenPlatformLauncher, IESLiveGameOpenPlatformAppInstanceStateStore, IESLiveOpenPlatformAuthManagerInterface;

@interface IESLiveGameOpenPlatformAppInstance : NSObject <IESLiveGameOpenPlatformNotificationAction, IESLiveInteractAction, IESLiveGameOpenPlatformAppInstance>

@property (nonatomic) BOOL enterBackgroundWhenAppIsInActiveState;
@property (retain, nonatomic) id<IESLiveOpenPlatformAuthManagerInterface> authManager;
@property (retain, nonatomic) IESLiveGameOpenPlatformNotificationMonitor *notificationMonitor;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformAppInstanceStateStore> stateStore;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLiveGamePlatformTracker *gamePlatformTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESLiveGameOpenPlatformAppInstanceContext *context;
@property (retain, nonatomic) id<IESLiveGameOpenPlatformLauncher> launcher;
@property (readonly, nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) BOOL isInRunning;
@property (readonly, nonatomic) BOOL isInActive;
@property (readonly, nonatomic) BOOL isInShareScreen;
@property (nonatomic) long long totalShowTime;
@property (nonatomic) BOOL shouldPause;
@property (nonatomic) unsigned long long appLaunchState;

- (void)didSetAttachingDIContext;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)setupOpenPlatformContextParamsWithInstanceContext:(id)a0;
- (void)shutdownWithReason:(id)a0 completion:(id /* block */)a1;
- (long long)totalShowTime;
- (void)continueLaunch;
- (void)checkSupportLiveScene;
- (BOOL)isInRunning;
- (BOOL)isInActive;
- (void)appOnShow;
- (void)setShareScreenStatus:(BOOL)a0;
- (id)initWithAppID:(id)a0 componentContext:(id)a1 eventContext:(id)a2;
- (void).cxx_destruct;
- (void)hide;
- (void)shutdownWithReason:(id)a0;
- (unsigned long long)currentState;
- (void)free;
- (void)show;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillEnterForegroundNotification:(id)a0;
- (void)trackStart;
- (void)receiveMessage:(id)a0;

@end
