@interface AWEUGFeedPendantVideoTaskTrigger : AWEUGVideoTaskTrigger

- (void)pauseTask;
- (void)resumeTask;
- (void)trackFeedPendantTimingTaskManagerLogWithMessage:(id)a0;
- (BOOL)feedPendantHasWatchVideoTaskInProcess;
- (id)triggerReasonForInfo:(id)a0;
- (id)initWithModel:(id)a0;
- (void)addObserver;
- (void)dealloc;

@end
