@interface HMDTTNetPushTrafficCollector : NSObject

@property BOOL isRunning;

+ (id)sharedInstance;

- (void)unregisterTTNetPushNotification;
- (void)registerTTNetPushNotification;
- (void)handleTrafficChanged:(id)a0;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
