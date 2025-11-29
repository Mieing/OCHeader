@interface AWEFantaNotificationDataCollector : AWEFantaAbstractDataCollector

+ (id)sharedInstance;

- (void)registerNotification:(id)a0;
- (void)onNotification:(id)a0;
- (id)type;

@end
