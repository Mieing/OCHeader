@protocol AWECloudCommandNetDiagnoseTraceRouteDelegate;

@interface AWECloudCommandNetDiagnoseTraceRoute : NSObject

@property (nonatomic) long long maxTTL;
@property (nonatomic) long long port;
@property (nonatomic) long long timeout;
@property (nonatomic) long long maxAttempts;
@property BOOL isRunning;
@property (weak, nonatomic) id<AWECloudCommandNetDiagnoseTraceRouteDelegate> delegate;

- (void)_traceRouteCallbackWithLog:(id)a0;
- (void)_didFinishTraceRoute;
- (id)initWithMaxTTL:(long long)a0 timeout:(long long)a1 maxAttempts:(long long)a2 port:(long long)a3;
- (BOOL)doTraceRoute:(id)a0;
- (BOOL)isTracingRoute;
- (void).cxx_destruct;
- (void)stopTrace;

@end
