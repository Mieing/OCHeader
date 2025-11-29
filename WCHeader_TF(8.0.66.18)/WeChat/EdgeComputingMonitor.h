@interface EdgeComputingMonitor : MMObject

+ (void)monitorProcess:(id)a0 withProcess:(unsigned int)a1 withReportTimeEC:(unsigned long long)a2;
+ (void)statComputingCostTime:(id)a0 withCostTime:(unsigned long long)a1 withDataSzie:(unsigned long long)a2;
+ (void)statCacheCostTime:(id)a0 withCostTime:(unsigned long long)a1 withDataSzie:(unsigned long long)a2;
+ (void)statStorageCostTime:(id)a0 withCostTime:(unsigned long long)a1 withDataSzie:(unsigned long long)a2;
+ (void)statSQLQueryCostTime:(id)a0 withCostTime:(unsigned long long)a1 withDataSzie:(unsigned long long)a2;
+ (void)statRegularWorkTime:(unsigned long long)a0 withDataSzie:(unsigned long long)a1;
+ (void)statRegularScriptWorkTime:(unsigned long long)a0 withDataSzie:(unsigned long long)a1;
+ (void)statRegularSqlWorkTime:(unsigned long long)a0 withDataSzie:(unsigned long long)a1;
+ (void)statSingleScriptWorkTime:(id)a0 withCostTime:(unsigned long long)a1 withDataSzie:(unsigned long long)a2;
+ (void)statInstantWorkTime:(unsigned long long)a0 withDataSzie:(unsigned long long)a1;
+ (void)statJsApiCostTime:(unsigned long long)a0 withType:(unsigned long long)a1;
+ (void)statScriptConfigParseError:(BOOL)a0;
+ (void)statSqlConfigParseError:(BOOL)a0;
+ (void)statScriptDownloadSuccess:(BOOL)a0;
+ (void)reportScriptErrorLog:(id)a0;
+ (void)statStorageAmount:(id)a0 withAmount:(unsigned long long)a1;
+ (void)statRejectDataLimit:(id)a0 withAmount:(unsigned long long)a1;
+ (void)statRealReportProcess:(unsigned int)a0;
+ (BOOL)isMonitorOpen;
+ (void)updateCurConfigId:(id)a0;

@end
