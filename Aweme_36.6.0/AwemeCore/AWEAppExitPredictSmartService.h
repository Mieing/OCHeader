@class AWEAppExitPredictMonitorConfig, NSArray, NSDictionary, IESCombineFeatureConfig, NSString;
@protocol FurionSmartCommonServiceProtocol;

@interface AWEAppExitPredictSmartService : NSObject <IESFCEventObserver, FurionSmartServiceProtocol>

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long lastRunTime;
@property (retain, nonatomic) NSDictionary *configMap;
@property (retain, nonatomic) IESCombineFeatureConfig *updateCombineTypeConfig;
@property (retain, nonatomic) AWEAppExitPredictMonitorConfig *monitorConfig;
@property (retain, nonatomic) NSArray *monitorDataCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (id)KVStorageHandler;
- (void)updateCombineFeature;
- (void)saveMonitorDataCache;
- (BOOL)ignoreRun:(id)a0;
- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;
- (id)serviceName;
- (BOOL)enabled;
- (id)lastResult;

@end
