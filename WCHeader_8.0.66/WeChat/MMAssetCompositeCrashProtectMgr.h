@class NSArray, NSString;

@interface MMAssetCompositeCrashProtectMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSArray *concernedRebootTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runningTaskInfo;
+ (void)saveRunningTaskInfo:(id)a0;
+ (id)defaultMMkv;
+ (id)defaultMMKVMapID;

- (void)onServiceInit;
- (void)checkRunningTask;
- (void)startMonitorTask:(id)a0;
- (void)endMonitorTask:(id)a0;
- (BOOL)isTaskSafe:(id)a0;
- (void).cxx_destruct;

@end
