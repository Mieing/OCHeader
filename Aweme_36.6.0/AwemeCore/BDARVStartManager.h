@interface BDARVStartManager : NSObject

+ (id)sharedInstance;

- (void)sdkSessionLaunchMonitor;
- (void)startWithAppID:(id)a0;

@end
