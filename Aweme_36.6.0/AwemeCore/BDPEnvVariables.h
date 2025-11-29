@interface BDPEnvVariables : NSObject

+ (id)getLaunchOptionParams:(id)a0 type:(long long)a1 uniqueID:(id)a2;
+ (id)deleteQueryAnalysisInfo:(id)a0 uniqueID:(id)a1;
+ (id)deleteQueryPathAnalysisInfo:(id)a0 uniqueID:(id)a1;
+ (id)getLaunchOptionParams:(id)a0 type:(long long)a1;
+ (id)currentSystemLanguage;
+ (BOOL)reuseRuntime;
+ (id)onHandleAppStrategyInitEnvironmentVariables:(id)a0;
+ (id)progressColorString;
+ (BOOL)isDebugOpen:(id)a0;
+ (id)preloadEnvironmentVariablesForWebview:(id)a0;
+ (id)onReadyEnvironmentVariablesForWebview:(id)a0;
+ (id)preloadEnvironmentVariables:(id)a0 envType:(long long)a1;
+ (BOOL)injectSystemInfoToEnvironment;
+ (id)getAppInfoSyncWithUniqueID:(id)a0;
+ (id)onReadyEnvironmentVariables:(id)a0;
+ (id)getDeleteAnalysisInfos:(id)a0;
+ (id)preloadEnvironmentVariables:(id)a0;
+ (id)onHandlePrefetchEnvironmentVariables:(id)a0 schema:(id)a1 backupPath:(id)a2;

@end
