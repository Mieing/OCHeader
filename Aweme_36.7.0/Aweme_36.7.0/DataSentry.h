@class DFERateLimiter, NSString, DFEDataStore, DFEStageCache, DFEDataPacker, NSObject, DataSentryConfig, DataAggregator;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DataSentry : NSObject <SentryProtocol> {
    double startTime;
    NSObject<OS_dispatch_queue> *sentry_queue;
    void *sentry_queue_tag;
    NSObject<OS_dispatch_queue> *upload_queue;
    NSObject<OS_dispatch_source> *aggrTimer;
    NSObject<OS_dispatch_source> *flushTimer;
    DFEStageCache *stainedCache;
    DFEDataStore *dataStore;
    DFERateLimiter *limiter;
    DFEDataPacker *packer;
    unsigned long long countDidLoad;
    DataAggregator *timerAggregator;
    DataAggregator *aggregator;
}

@property (retain, nonatomic) DataSentryConfig *config;
@property (nonatomic) BOOL sentryEnabled;
@property (nonatomic) BOOL stainEnabled;
@property (copy, nonatomic) NSString *storePath;
@property (copy, nonatomic) NSString *sessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stageToHex:(unsigned long long)a0;

- (void)onEnterBackground:(id)a0;
- (id)transformEvent:(id)a0 params:(id)a1;
- (void)LOG_DEBUG:(id)a0;
- (void)setupAggregator;
- (void)LOG_ERROR:(id)a0;
- (void)startAggrTimer;
- (void)startFlushTimer;
- (id)dateStringFromTimestamp:(id)a0;
- (void)trackMetrics:(id)a0 dimensions:(id)a1 options:(id)a2;
- (void)stopAggrTimer;
- (void)stopFlushTimer;
- (BOOL)dataStainingActivated;
- (void)trackError:(id)a0 stage:(unsigned long long)a1 isFatal:(BOOL)a2 extra:(id)a3;
- (void)trackEvent:(id)a0 type:(id)a1 stage:(unsigned long long)a2 options:(id)a3;
- (void)trackLatency:(double)a0 stage:(unsigned long long)a1 type:(id)a2 priority:(long long)a3;
- (void)trackUsage:(id)a0 count:(unsigned long long)a1 stage:(unsigned long long)a2 priority:(long long)a3;
- (void)trackEventInterception:(unsigned long long)a0 extra:(id)a1;
- (void)trackEventCleanup:(unsigned long long)a0 count:(unsigned long long)a1 extra:(id)a2;
- (void)trackUploadRestricted:(unsigned long long)a0 enviroment:(id)a1;
- (void)trackLaunch:(BOOL)a0 extra:(id)a1;
- (void)trackUploadSummary:(long long)a0 strategy:(unsigned long long)a1 contain:(unsigned long long)a2 extra:(id)a3;
- (unsigned long long)countDidLoad;
- (void)dump;
- (void)async:(id /* block */)a0;
- (void)flush;
- (void).cxx_destruct;
- (void)suspend;
- (void)_flush;
- (void)start;
- (id)initWithConfig:(id)a0;
- (unsigned long long)count;
- (id)featureOptions;

@end
