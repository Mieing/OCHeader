@class NSString, NSDictionary, SECNetDetectResult, SECStopWatch;
@protocol SECNetTrafficProtocol;

@interface SECNetDetectEvent : NSObject <SECBaseEvent>

@property (nonatomic) double happenTime;
@property (nonatomic) BOOL perfSample;
@property (retain, nonatomic) id<SECNetTrafficProtocol> netTraffic;
@property (retain, nonatomic) SECNetDetectResult *result;
@property (readonly, copy, nonatomic) NSDictionary *perfMetrics;
@property (copy, nonatomic) NSString *flag;
@property (retain, nonatomic) SECStopWatch *metrics;
@property (copy, nonatomic) NSString *relatedLog;
@property (copy, nonatomic) NSString *diagnoseLog;
@property (copy, nonatomic) NSString *ttnetMonitorLog;
@property (copy, nonatomic) id /* block */ perfMetricsFetcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)eventType;
- (void)finish;
- (BOOL)isMeaningful;

@end
