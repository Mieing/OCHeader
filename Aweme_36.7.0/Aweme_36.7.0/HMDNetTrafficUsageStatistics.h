@class HMDNetTrafficFreqRequestTool, NSMutableDictionary, NSObject, HMDNetTrafficUsageManagerConfig, NSMutableArray, NSCache;
@protocol OS_dispatch_queue;

@interface HMDNetTrafficUsageStatistics : NSObject

@property (retain, nonatomic) NSMutableDictionary *totalBizUsage;
@property (retain, nonatomic) NSCache *bizSourceCache;
@property (retain, nonatomic) NSMutableArray *largReqInfoes;
@property (retain, nonatomic) NSMutableDictionary *intervalBizUsage;
@property (retain, nonatomic) HMDNetTrafficFreqRequestTool *freqTool;
@property (retain, nonatomic) HMDNetTrafficUsageManagerConfig *thresholdConfig;
@property (nonatomic) BOOL isWorking;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property unsigned long long netType;
@property (retain, nonatomic) NSMutableDictionary *trafficInfoCollectors;
@property (nonatomic) long long anchorTS;
@property (nonatomic) long long configInterval;
@property (nonatomic) BOOL isBackground;

- (void)updateTrafficConfig:(id)a0;
- (void)hmdDidReciveMemoryWarning:(id)a0;
- (void)networkStatusChangedNotification:(id)a0;
- (void)resetStatisticsData;
- (void)aggreateTrafficUsageInfoWithUniqueKey:(id)a0 trafficUsage:(unsigned long long)a1 timestamp:(long long)a2 bussiness:(id)a3 usageCalculateType:(unsigned long long)a4 usageType:(unsigned long long)a5 currentNetType:(unsigned long long)a6;
- (void)statisticBizUsageDetailWithUsageInfo:(id)a0 bussiness:(id)a1 increamentBytes:(unsigned long long)a2 usageType:(unsigned long long)a3 netType:(unsigned long long)a4;
- (void)updateBizUsageInfoWithTargetBiz:(id)a0 sourceUsage:(id)a1 increamentBytes:(unsigned long long)a2 usageType:(unsigned long long)a3 netType:(unsigned long long)a4 needSource:(BOOL)a5;
- (id)convertToIntervalUsageInfoFromBizUsage:(id)a0;
- (void)networkTrafficUsageWithURL:(id)a0 sendBytes:(unsigned long long)a1 recvBytes:(unsigned long long)a2 clientType:(id)a3 MIMEType:(id)a4;
- (void)hmdBizConsumeWithTrafficBytes:(long long)a0 sourceId:(id)a1 business:(id)a2 scene:(id)a3 extraStatus:(id)a4 extraLog:(id)a5 isCurrentTotalUsage:(BOOL)a6 trafficType:(unsigned long long)a7;
- (void)intervalTrafficDetailWithModel:(id /* block */)a0;
- (void)resetStatisticsDataOnSafeThread;
- (void)addCustomSpanTrafficCollect:(id)a0;
- (void)endCustomSpanTrafficCollect:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOperationQueue:(id)a0;
- (void)dealloc;
- (void)setupData;

@end
