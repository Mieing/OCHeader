@interface AWEFeedDetailPublicWelfareTask : AWEUGWatchVideoTask

+ (void)registerTaskDealer;
+ (BOOL)stopOldWhenGlobalTaskIdConflict;
+ (id)taskType;

- (void)taskReportFinish;
- (id)initWithModel:(id)a0;
- (void)addObserver;
- (void)stopTask;

@end
