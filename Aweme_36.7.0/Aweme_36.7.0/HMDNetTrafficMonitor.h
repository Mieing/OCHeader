@class NSMutableDictionary, HMDNetTrafficUsageStatistics, NSObject, NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface HMDNetTrafficMonitor : HMDMonitor

@property (nonatomic) struct { unsigned long long wifiSent; unsigned long long wifiReceived; unsigned long long cellularSent; unsigned long long cellularReceived; unsigned long long totalSent; unsigned long long totalReceived; } pageIOBytes;
@property (retain, nonatomic) HMDNetTrafficUsageStatistics *statisticsTool;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *intervalTrafficTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trafficCollectQueue;
@property (retain, nonatomic) NSMutableDictionary *customSpanInfoDict;
@property (nonatomic) BOOL everFront;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (nonatomic) BOOL enableProcTraffic;
@property (nonatomic) long long procStartTrafficTS;
@property (nonatomic) BOOL enableIntervalTraffic;
@property (nonatomic) BOOL enableNetworkTraffic;
@property (nonatomic) BOOL enablePushTraffic;

+ (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })relativeDataForIntervalUsageBefore:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a0;
+ (void)monitorInvalidIOBytesValue:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a0;
+ (void)changeTrafficAppState:(unsigned long long)a0;
+ (unsigned long long)currentTrafficAppState;
+ (void)initialize;
+ (id)sharedMonitor;

- (void)updateConfig:(id)a0;
- (void)startWithInterval:(double)a0;
- (unsigned long long)reporterPriority;
- (void)recordForSpecificScene:(id)a0;
- (void)didEnterScene:(id)a0;
- (void)willLeaveScene:(id)a0;
- (id)hmdCutomPerformanceDataWithCountLimit:(long long)a0;
- (void)hmdCutomPerformanceDataReportSuccess:(BOOL)a0;
- (BOOL)monitorCurve:(id)a0 willSaveRecords:(id)a1;
- (id)exceptionConditions;
- (void)setExceptionConditions:(id)a0;
- (id)collectIntervalBizUsage:(id)a0;
- (void)trafficUsagerPreTenMinutes;
- (void)trafficDetialDumpWithTotalRecord:(id)a0 completion:(id /* block */)a1;
- (id)collectIntervalLargeUsage:(id)a0;
- (id)collectIntervalHighFreqRequest:(id)a0;
- (void)callbackBizUsageInfoWithIntervalUsage:(id)a0;
- (id)formatToTrafficDetailWithBizUsageArray:(id)a0;
- (void)trafficConsumeWithTrafficBytes:(unsigned long long)a0 sourceId:(id)a1 business:(id)a2 scene:(id)a3 extraStatus:(id)a4 extraLog:(id)a5;
- (void)trafficConsumeWithAccumulateTrafficBytes:(unsigned long long)a0 sourceId:(id)a1 business:(id)a2 scene:(id)a3 extraStatus:(id)a4 extraLog:(id)a5;
- (void)trafficConsumeWithTrafficBytes:(unsigned long long)a0 sourceId:(id)a1 business:(id)a2 scene:(id)a3 extraStatus:(id)a4 extraLog:(id)a5 trafficType:(unsigned long long)a6;
- (void)trafficConsumeWithAccumulateTrafficBytes:(unsigned long long)a0 sourceId:(id)a1 business:(id)a2 scene:(id)a3 extraStatus:(id)a4 extraLog:(id)a5 trafficType:(unsigned long long)a6;
- (void)startCustomTrafficSpanWithSpanName:(id)a0;
- (void)endCustomTrafficSpanWithSpanName:(id)a0 completion:(id /* block */)a1;
- (void)setupSubModuleWhenStart;
- (void)recordProcessTraffic;
- (void)processWillExist;
- (void)stopTimeForIntervalTrafficUsageIfNeed;
- (void)notificateConsumeEnterForground:(BOOL)a0;
- (void)notificateConsumeEnterBackground:(BOOL)a0;
- (void)setupTimerForIntervalTrafficUsage;
- (void)switchNetworkCollectStatus:(BOOL)a0;
- (void)switchTTPushCollectStatus:(BOOL)a0;
- (void)processRecordUniformly:(id)a0;
- (BOOL)enableUploadWithRecord:(id)a0;
- (void)updateSubModuleStateWithConfig:(id)a0;
- (void)switchIntervalTimerWithStatus:(BOOL)a0;
- (void)addTrafficUsageInfoCallback:(id /* block */)a0;
- (void)removeTrafficUsageInfoCallback:(id /* block */)a0;
- (void)executePublicCallBackWithMonitorType:(id)a0 usage:(id)a1 biz:(id)a2;
- (void)networkTrafficUsageWithURL:(id)a0 sendBytes:(unsigned long long)a1 recvBytes:(unsigned long long)a2 clientType:(id)a3 MIMEType:(id)a4;
- (void)swizzle_trafficConsumeWithTrafficBytes:(unsigned long long)a0 sourceId:(id)a1 business:(id)a2 scene:(id)a3 extraStatus:(id)a4 extraLog:(id)a5;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (Class)storeClass;

@end
