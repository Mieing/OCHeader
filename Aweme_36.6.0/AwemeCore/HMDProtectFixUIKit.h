@interface HMDProtectFixUIKit : NSObject

+ (id)sharedInstance;

- (void)fixiOS15UIResponderForwarderWantsForwardingFromResponderCrash;
- (void)fixiOS16UIKeyboardTaskQueueCrash;

@end
