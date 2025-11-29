@interface IESGurdPollingManager : NSObject

+ (BOOL)isPollingEnabled;
+ (void)handlePollingWithPollingInterval:(long long)a0;
+ (id)timerWithRequest:(id)a0 interval:(long long)a1;
+ (void)sendPollingRequest:(id)a0;

@end
