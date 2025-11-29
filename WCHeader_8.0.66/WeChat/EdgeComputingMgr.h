@class EdgeComputingReporter, NSString, EdgeComputingConfigService, EdgeComputingDataStorage, EdgeComputingConfigBreaker, EdgeComputingThresholdController, EdgeComputingRunRecord, EdgeComputingDataSourceService;
@protocol IEdgeComputingDataCacheProtocol;

@interface EdgeComputingMgr : MMUserService <MMServiceProtocol, IEdgeComputingDataSourceReceiver, EdgeComputingConfigListener> {
    EdgeComputingConfigService *configService;
    EdgeComputingDataSourceService *dataSourceService;
    id<IEdgeComputingDataCacheProtocol> normalDataCache;
    id<IEdgeComputingDataCacheProtocol> instantDataCache;
    EdgeComputingDataStorage *dataStorage;
    EdgeComputingReporter *reporter;
    EdgeComputingConfigBreaker *configBreaker;
    EdgeComputingRunRecord *runRecord;
    EdgeComputingThresholdController *thresholdController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onReceiveData:(id)a0 withConfig:(id)a1 withTime:(unsigned long long)a2;
- (id)edgeComputing:(id)a0 withConfig:(id)a1 withDatas:(id)a2 withPeriodStartTime:(unsigned long long)a3 withPeriodEndTime:(unsigned long long)a4;
- (id)edgeComputing:(id)a0 withConfig:(id)a1 withData:(id)a2 withReportTimeEC:(unsigned long long)a3 withPeriodStartTime:(unsigned long long)a4 withPeriodEndTime:(unsigned long long)a5;
- (void)handlePeriodTask;
- (void)handleRegularTask:(id)a0;
- (void)executeInstantTask;
- (void)executeUnInstantTask;
- (void)executeSqlTask;
- (id)getConfigService;
- (id)getThresholdController;
- (void)onScriptConfigUpdate:(id)a0;
- (void)onScriptConfigOffline:(id)a0;
- (void)onScriptConfigSame:(id)a0;
- (void)onSqlConfigUpdate:(id)a0;
- (void)onSqlConfigOffline:(id)a0;
- (void)onSqlConfigSame:(id)a0;
- (id)edgeComputing:(id)a0 andData:(id)a1;
- (void).cxx_destruct;

@end
