@class NSCache, NSString, FurionCostRecord, NSMutableArray, FurionSmartTruthInjectCondition;
@protocol FurionPredictTruthInjector;

@interface FurionSmartServiceMonitor : NSObject <FurionSmartServiceMonitor> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (copy, nonatomic) NSString *runDataCachesSaveKey;
@property (retain, nonatomic) FurionSmartTruthInjectCondition *condition;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hasInitEnd;
@property (nonatomic) BOOL hasReportInited;
@property (retain, nonatomic) NSMutableArray *runDataCaches;
@property (retain, nonatomic) FurionCostRecord *costInitTotal;
@property (nonatomic) long long initRetCode;
@property (nonatomic) long long runCount;
@property (nonatomic) float initRate;
@property (nonatomic) float runRate;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSCache *runDataItemMap;
@property (nonatomic) BOOL shouldReportAfterRunEnd;
@property (weak, nonatomic) id<FurionPredictTruthInjector> truthInjector;
@property (nonatomic) BOOL shouldSaveCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setServiceConfig:(id)a0;
- (void)onCheckReportTruth:(long long)a0 ext:(id)a1;
- (void)recordPrepareDataBeginWithKey:(id)a0;
- (void)recordPrepareDataEndWithKey:(id)a0;
- (void)recordRunEndWithKey:(id)a0 input:(id)a1 output:(id)a2 ext:(id)a3;
- (void)recordRunBeginWithKey:(id)a0;
- (void)clearSaveCache;
- (id)_getRunDataItemWithKey:(id)a0 forceCreate:(BOOL)a1;
- (void)onSmartServiceRunEndWithKey:(id)a0 input:(id)a1 output:(id)a2;
- (void)checkAndSaveCache:(id)a0;
- (id)buildInitMonitorData;
- (id)buildRunMonitorDataWithKey:(id)a0 output:(id)a1;
- (void)buildAndSaveMonitorCacheDataWithInput:(id)a0 runMonitorData:(id)a1;
- (void)checkAndLoadCache;
- (void)recordInitBegin;
- (void)recordInitEnd:(long long)a0;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (void)dealloc;

@end
