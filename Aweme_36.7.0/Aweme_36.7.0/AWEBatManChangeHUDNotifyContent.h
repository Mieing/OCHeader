@class NSString, AWEInnerNotificationRequest, AWEBatManChangeHUDView;
@protocol AWEInnerNotificationContentOperator;

@interface AWEBatManChangeHUDNotifyContent : NSObject <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEBatManChangeHUDView *hudView;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (void)batManExitNotification;
- (void).cxx_destruct;
- (id)init;
- (id)view;
- (void)dealloc;

@end
