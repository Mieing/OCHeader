@interface AWEECCpsTrackerLogger : NSObject

+ (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
+ (void)logMessage:(id)a0 level:(unsigned long long)a1;
+ (id)toEventStr:(unsigned long long)a0;

@end
