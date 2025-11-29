@interface HMDProtectFixLibdispatch : NSObject

+ (id)sharedInstance;

- (void)receiveConfigNotification:(id)a0;
- (BOOL)isProtectCFFDQueue;
- (void)exchangeQueueMethod;
- (void)storeProtectCFFDQueueConfig:(id)a0;
- (void)fixGCDCrash;
- (id)init;
- (void)dealloc;

@end
