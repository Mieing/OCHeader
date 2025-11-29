@interface TMNetworkPerformanceReporter : NSObject

+ (void)reportInterceptPerformanceWithContext:(id)a0 costTime:(double)a1;
+ (void)reportSubscriberPerformanceWithContext:(id)a0 subscriber:(Class)a1 hasModified:(BOOL)a2 costTime:(double)a3;
+ (void)updateSampleRate:(unsigned long long)a0;

@end
