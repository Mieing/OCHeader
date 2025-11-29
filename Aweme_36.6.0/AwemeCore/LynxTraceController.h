@interface LynxTraceController : NSObject

+ (id)sharedInstance;

- (long long)getTraceController;
- (void)startTracing:(id /* block */)a0 config:(id)a1;
- (void)startTracing:(id /* block */)a0 jsonConfig:(id)a1;
- (void)startStartupTracingIfNeeded;
- (void)onTracingComplete:(id)a0;
- (void)stopTracing;
- (void)startTrace;
- (void)stopTrace;

@end
