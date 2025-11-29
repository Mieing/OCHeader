@class NSString, NSUUID, NSMutableDictionary, NSTimer;

@interface YataPerformanceMetrics : NSObject

@property (nonatomic) double minStartTimestamp;
@property (nonatomic) double maxEndTimestamp;
@property (copy, nonatomic) NSString *bizCode;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSUUID *metricsID;
@property (nonatomic) unsigned long long upscreenState;
@property (retain, nonatomic) NSMutableDictionary *pendingPhases;
@property (retain, nonatomic) NSMutableDictionary *traceTimings;
@property (nonatomic) unsigned long long triggerSource;
@property (nonatomic) BOOL isNetPerfMetricsReady;
@property (nonatomic) long long netRequestStatus;
@property (retain, nonatomic) NSTimer *netPerfMetricsTimer;
@property (nonatomic) long long netSentBytes;
@property (nonatomic) long long netReceivedBytes;
@property (nonatomic) double triggerBeginTimestamp;

- (id)initWithBizCode:(id)a0;
- (void)readyNetPrefMetrics;
- (void)recordTraceTimingWithTraceName:(id)a0 startTimestamp:(double)a1 endTimestamp:(double)a2 extraParams:(id)a3;
- (void)invalidateNetPerfMetricsTimer;
- (void)recordTimingTraceName:(id)a0 pathMonitorAction:(unsigned long long)a1 extra:(id)a2;
- (id)exportToDict;
- (void).cxx_destruct;

@end
