@class NSDictionary, AWEBaseSmartServiceMonitorObserver, NSString;
@protocol FurionSmartCommonServiceProtocol;

@interface AWEBaseSmartServiceImpl : HTSService <AWESmartServiceProtocol, FurionSmartServiceProtocol, FurionSmartCommonServiceDelegate, FurionPredictTruthInjector>

@property (retain, nonatomic) id<FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) long long skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) long long lastRunTime;
@property (nonatomic) BOOL commonServiceInitSuccess;
@property (copy, nonatomic) NSDictionary *appSessionFactorsConfigMap;
@property (retain, nonatomic) AWEBaseSmartServiceMonitorObserver *monitorObserver;
@property (copy, nonatomic) NSString *sceneName;
@property (nonatomic) BOOL setupInHTSInitMethod;
@property (readonly, nonatomic) unsigned long long engineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;

- (void)onServiceInit;
- (void)innerInit;
- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)runBatchWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)p_setupServiceWithConfigMap:(id)a0;
- (void)setupCommonServiceWithConfigMap:(id)a0;
- (void)setupAppSessionFactorsConfigMapWithServiceConfigMap:(id)a0;
- (void)onRunConfigBuilder:(id)a0;
- (void)onWillRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (void)onDidRunCompletion:(BOOL *)a0 input:(id)a1 output:(id)a2;
- (void)onAppSessionFactorsConfigMapUpdate:(id)a0;
- (BOOL)shouldIgnoreRunWithParams:(id)a0;
- (void)setConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;
- (id)serviceName;
- (BOOL)enabled;
- (void)setupService;
- (id)lastResult;

@end
