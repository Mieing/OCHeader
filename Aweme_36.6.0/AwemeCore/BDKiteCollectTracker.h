@interface BDKiteCollectTracker : NSObject

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (void)trackWorkerResult:(BOOL)a0 retryCount:(unsigned long long)a1 duration:(unsigned long long)a2 errorCode:(long long)a3 errorMsg:(id)a4 scene:(id)a5;

@end
