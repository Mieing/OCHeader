@class NSString;

@interface HMDServerStateChecker : NSObject <HMDURLProvider> {
    unsigned long long _reporter;
    NSString *_identifierAviaibletime;
    NSString *_identifierServerState;
    double _nextAviaibleTimeInterval;
    unsigned long long _currentSleepCount;
    long long _currentSleepValueForException;
    NSString *_redirectHost;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    double _nextQuotaInterval;
    unsigned long long _lastServerState;
    BOOL _dropData;
    BOOL _dropAllData;
    NSString *_aid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stateCheckerWithReporter:(unsigned long long)a0;
+ (id)stateCheckerWithReporter:(unsigned long long)a0 forApp:(id)a1;

- (id)URLHostProviderDefaultHosts:(id)a0;
- (id)URLPathProviderURLPath:(id)a0;
- (void)_updateStateFromServer;
- (id)initWithReporter:(unsigned long long)a0 forApp:(id)a1;
- (void)_longAvoidanceStrategyWithCurrentTime:(double)a0;
- (void)_shortAvoidanceStrategyWithCurrentTime:(double)a0;
- (id)_getReporterURLPath;
- (void)_updateServerCheckerByQuota:(id)a0;
- (void)checkIfDegradedwithResponse:(id)a0;
- (unsigned long long)updateStateWithResult:(id)a0 statusCode:(long long)a1;
- (BOOL)dropData;
- (BOOL)dropAllData;
- (id)redirectHost;
- (void).cxx_destruct;
- (BOOL)isServerAvailable;
- (BOOL)shouldEncrypt;

@end
