@class NSString;

@interface AWEBootConfig : HTSService <AWEBootConfigService>

@property (class, readonly) BOOL validTaskExist;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)safeString:(id)a0;
+ (void)setupBootLoaderLog;
+ (BOOL)enableBootLog;
+ (BOOL)enableAsyncBootTaskSpread;
+ (BOOL)enableRunLaunchCompletionFirst;
+ (long long)markLaunchCompletionType;
+ (BOOL)forceRunLaunchCompletionBeforeFeedReady;
+ (BOOL)enableBootTaskSpreadPause;
+ (id)bootTaskSpreadExecutor;
+ (BOOL)enableBootTaskSpreadInterval;
+ (double)bootTaskSpreadInterval;
+ (double)bootTaskSpreadCpuUsageThreshold;
+ (double)bootTaskSpreadMaxInterval;
+ (double)bootTaskSpreadCpuUsageCheckInterval;
+ (BOOL)enableCpuUsageOnly;
+ (void)setDelayOrForbidTaskConfig:(id)a0;
+ (void)setupChangeTaskQosConfig;
+ (id)currentBootConfig;
+ (Class)aAWEBootConfigCommonAdapterClass;
+ (Class)aAWEBootConfigCommonAdapterClass;
+ (Class)aAWEBootConfigCommonAdapterClass;
+ (BOOL)addDefaultFeedReadyArrangeTasks:(id)a0;
+ (void)configFeedReady:(id)a0;
+ (BOOL)addDefaultLaunchArrangeTasks:(id)a0;
+ (void)configFirstFGLaunch:(id)a0;
+ (void)configInfraLaunch:(id)a0;
+ (void)configBusinessLaunch:(id)a0;
+ (BOOL)addDefaultLaunchCompletionArrangeTasks:(id)a0;
+ (void)configLaunchCompletion:(id)a0;
+ (BOOL)p_changeTaskQosEnable;
+ (id)p_changeTaskQosConfig;
+ (void)p_settingsChanged;
+ (id)signalTaskWithOriginalData:(id)a0;
+ (id)bizSignalTaskConfig;
+ (Class)aAWEBootConfigDOUYINHMAdapterClass;
+ (id)bootTaskSpreadIntervalConfig;
+ (BOOL)p_bootLaunchLogEnable;
+ (BOOL)p_enableRunLaunchCompletionFirst;
+ (long long)p_markLaunchCompletionType;
+ (BOOL)p_forceRunLaunchCompletionBeforeFeedReady;
+ (void)p_updateBootSortedEnableKey;
+ (id)safeDictionary:(id)a0;
+ (id)safeArray:(id)a0;
+ (id)currentBootConfigWithValidation:(BOOL)a0;

@end
