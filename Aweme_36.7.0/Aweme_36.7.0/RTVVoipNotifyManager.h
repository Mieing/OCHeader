@class RTVVoipMonitor, RTVVoipNotifyViewDataService;
@protocol RxInjector, RTVVoipManagerInterface, RTVInteractionConfigureManagerInterface, AWEInnerNotificationCenter;

@interface RTVVoipNotifyManager : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipNotifyViewDataService *notifyViewDataService;
@property (readonly, nonatomic) id<AWEInnerNotificationCenter> notificationCenter;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigureManager;
@property (readonly, nonatomic) RTVVoipMonitor *voipMonitor;

- (void)rxAwakeFromPropertyInjection;
- (void)showNotifyViewWithVoip:(id)a0;
- (id)__notifyContextWithVoip:(id)a0;
- (void)__loadNotifyContextWithVoip:(id)a0;
- (id)__enablePreJoinWithContext:(id)a0 selfParticipant:(id)a1 voip:(id)a2;
- (void).cxx_destruct;

@end
