@interface LSRTMPReconnectAppNotificationObserver : NSObject

@property (copy, nonatomic) id /* block */ notificationBlock;

- (void)p_notification:(id)a0;
- (void)p_notificationOnMainQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
