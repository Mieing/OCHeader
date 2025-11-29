@class NSString;
@protocol AWEInnerNotificationContentOperator, RxInjector, RTVTrackerProtocol;

@interface RTVNotifyView : UIView <AWEDigitalWellbeingMessage, AWEInnerNotificationContent>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVTrackerProtocol> tracker;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)viewDidDisappearWithReason:(long long)a0;
- (void)__trackEvent:(id)a0 params:(id)a1;
- (id)__tracker_chatTypeString;
- (BOOL)needTracker;
- (void)__trackClickEvent;
- (void).cxx_destruct;
- (id)view;
- (void)dealloc;

@end
