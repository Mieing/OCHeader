@interface AWEFeedPendantVideoTask : AWEUGWatchVideoTask

+ (void)registerTaskDealer;
+ (id)taskType;

- (double)taskDuration;
- (void)taskReportFinish;
- (void)trackFeedPendantTimingTaskManagerLogWithMessage:(id)a0;
- (BOOL)validateTask;
- (id)initWithModel:(id)a0;
- (void)addObserver;
- (void)stopTask;

@end
