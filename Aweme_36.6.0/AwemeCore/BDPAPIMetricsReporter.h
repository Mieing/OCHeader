@class NSMutableDictionary, NSString, NSObject, BDPMultiDelegateProxy;
@protocol OS_dispatch_queue, BDPAPIMetricsReporterDelegate;

@interface BDPAPIMetricsReporter : NSObject <BDPWarmBootMessage, BDPApplicationNotificationMessage>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reporterSerialQueue;
@property (retain, nonatomic) NSMutableDictionary *APIMetrics;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPAPIMetricsReporterDelegate> *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateTraceInfo:(id)a0;
+ (id)generateMetricsStringMetrics:(id)a0;
+ (id)sharedManager;

- (void)enterBackground:(id)a0;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)warmBootCacheExistingHeartbeat;
- (void)reportMetrics:(id)a0 uniqueID:(id)a1;
- (void)buildMetricsReporter;
- (void)reportMetricsForUniqueID:(id)a0;
- (void)reportAllMetrics;
- (void)reportMpInvokeWitMetrics:(id)a0 uniqueID:(id)a1 duration:(long long)a2;
- (void)addPointForMetricsString:(id)a0 uniqueID:(id)a1;
- (void)addDurationElementIfNeed:(id)a0 toDictionary:(id)a1;
- (id)addElementIfNeed:(id)a0 toDictionary:(id)a1;
- (void)reportMetricsToTracker:(id)a0 uniqueID:(id)a1;
- (void)generateMpInvokeAndTrackerEventWithDuration:(long long)a0 highSampling:(BOOL)a1 unique:(id)a2 metrics:(id)a3;
- (id)descForInvokeType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
