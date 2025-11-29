@interface AppMonitorAPSdkAdapter : AppMonitorSdkAdapter

+ (id)sharedInstance;

- (void)uploadEventForEventId:(id)a0;
- (void)sendRawEvent:(id)a0;
- (void)parseRawEvent:(id)a0;
- (void)addLogInSdk:(id)a0 rawPoint:(BOOL)a1;

@end
