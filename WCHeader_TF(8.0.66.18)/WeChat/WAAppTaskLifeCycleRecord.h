@class NSString, NSMutableArray;

@interface WAAppTaskLifeCycleRecord : MMObject <PBCoding>

@property (copy, nonatomic) NSString *instanceId;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) unsigned long long appServiceType;
@property (nonatomic) unsigned long long currentScene;
@property (copy, nonatomic) NSString *currentSceneNote;
@property (nonatomic) unsigned int appVersion;
@property (copy, nonatomic) NSString *strPublibVersion;
@property (nonatomic) unsigned int uiPublibVersion;
@property (copy, nonatomic) NSString *networkType;
@property (nonatomic) unsigned int pageCount;
@property (retain, nonatomic) NSMutableArray *pageRecords;
@property (retain, nonatomic) NSMutableArray *coldLaunchNeedDownloadModules;
@property (copy, nonatomic) NSString *lastServiceJsError;
@property (copy, nonatomic) NSString *serviceRuntimeContext;
@property (nonatomic) unsigned long long debugType;
@property (nonatomic) unsigned long long launchTimeStampInMs;
@property (nonatomic) unsigned long long currentRunningState;
@property (nonatomic) unsigned long long currentRunningStateStartTimeStampInMs;
@property (nonatomic) unsigned int engineType;
@property (nonatomic) BOOL bytecodeEnabled;
@property (nonatomic) unsigned int gameRenderMode;
@property (nonatomic) unsigned long long totalLifeTimeInMs;
@property (nonatomic) unsigned long long totalForegroundTimeInMs;
@property (nonatomic) unsigned long long totalBackgroundTimeInMs;
@property (nonatomic) unsigned long long totalSuspendTimeInMs;
@property (nonatomic) unsigned int totalHotLaunchCount;
@property (nonatomic) unsigned int allJSVMFootprintMemoryInMB;
@property (nonatomic) unsigned int mainContextJSVMFootprintMemoryInMB;
@property (nonatomic) BOOL hasSkylineRuntime;
@property (nonatomic) unsigned int skylineViewCnt;
@property (nonatomic) unsigned int differentSkylineViewCnt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_instanceId;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_appServiceType;
+ (void)PBArrayAdd_currentScene;
+ (void)PBArrayAdd_currentSceneNote;
+ (void)PBArrayAdd_appVersion;
+ (void)PBArrayAdd_strPublibVersion;
+ (void)PBArrayAdd_networkType;
+ (void)PBArrayAdd_pageCount;
+ (void)PBArrayAdd_pageRecords;
+ (void)PBArrayAdd_lastServiceJsError;
+ (void)PBArrayAdd_serviceRuntimeContext;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_engineType;
+ (void)PBArrayAdd_bytecodeEnabled;
+ (void)PBArrayAdd_debugType;
+ (void)PBArrayAdd_uiPublibVersion;
+ (void)PBArrayAdd_gameRenderMode;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)onTaskDieForReason:(unsigned long long)a0 lifeCyclePerformanceIndexes:(id)a1;
- (id)getLastNPagePath;
- (id)getJSErrorForLastPage;
- (id)getPagePathForLastPage;
- (id)getJSErrorForPage:(id)a0;
- (void)onTaskEnterForeground;
- (void)onTaskEnterBackground;
- (void)onTaskEnterSuspend;
- (void)onTaskHotLaunch;
- (void)calCurrentRunnningStateStayTime;
- (void)onTaskEncounterQualityIssue:(id)a0;
- (void).cxx_destruct;

@end
