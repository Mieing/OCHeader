@interface AWELuckyCatVideoTask : AWEUGWatchVideoTask

+ (void)registerTaskDealer;
+ (BOOL)needPersistence;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (Class)aNSObjectClass;
+ (Class)aAWEUGKitModuleCommonAdapterClass;
+ (id)taskType;

- (void)executeWithJumpResult:(BOOL)a0 openTaskCallback:(id /* block */)a1;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (id)aNSObject;
- (void)taskReportFinish;
- (void)trackLogWithMessage:(id)a0;
- (id)aAWEUGKitModuleCommonAdapter;
- (id)initWithModel:(id)a0;
- (void)addObserver;
- (void)stopTask;

@end
