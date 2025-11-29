@interface AWETributeTimingTask : AWEUGWatchVideoTask

+ (void)registerTaskDealer;
+ (BOOL)needPersistence;
+ (id)taskType;

- (id)taskToken;
- (void)executeWithJumpResult:(BOOL)a0 openTaskCallback:(id /* block */)a1;
- (void)taskReportFinish;
- (id)initWithModel:(id)a0;
- (void)addObserver;
- (id)taskID;
- (void)dealloc;
- (void)stopTask;

@end
