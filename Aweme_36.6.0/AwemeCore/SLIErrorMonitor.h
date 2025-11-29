@interface SLIErrorMonitor : NSObject

+ (id)shared;

- (void)onError:(id)a0 errorLevel:(long long)a1 errorType:(long long)a2 errorDetail:(id)a3 templateInfo:(id)a4 sliceInstance:(id)a5;
- (BOOL)errorTrackerInterceptedWithParams:(id)a0;

@end
