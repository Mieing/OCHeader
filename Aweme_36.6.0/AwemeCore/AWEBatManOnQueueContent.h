@class AWEBatManOnQueueNotifyContext, NSString, AWEInnerNotificationRequest, AWEBatManOnQueueView;
@protocol AWEInnerNotificationContentOperator;

@interface AWEBatManOnQueueContent : NSObject <AWEInnerNotificationContent>

@property (retain, nonatomic) AWEBatManOnQueueView *onQueueView;
@property (retain, nonatomic) AWEBatManOnQueueNotifyContext *context;
@property (retain, nonatomic) AWEInnerNotificationRequest *request;
@property (weak, nonatomic) id<AWEInnerNotificationContentOperator> notificationOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)viewDidDisappearWithReason:(long long)a0;
- (double)dismissTimerInterval;
- (void).cxx_destruct;
- (id)view;

@end
