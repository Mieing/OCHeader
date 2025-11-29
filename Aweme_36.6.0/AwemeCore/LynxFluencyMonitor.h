@interface LynxFluencyMonitor : NSObject {
    long long _forceStatus;
    BOOL _probabilityDetermined;
    long long _enabledBySampling;
    double _fluencyPageconfigProbability;
}

@property (readonly, nonatomic) BOOL shouldSendAllScrollEvent;

- (void)stopWithFluencyConfig:(id)a0;
- (void)reportWithRecord:(id)a0 config:(id)a1;
- (id)jsonFromRecord:(id)a0 config:(id)a1;
- (void)startWithFluencyConfig:(id)a0;
- (void)setEnabledBySampling:(long long)a0;
- (void)setPageConfigProbability:(double)a0;
- (id)init;
- (void)updateStatus;

@end
