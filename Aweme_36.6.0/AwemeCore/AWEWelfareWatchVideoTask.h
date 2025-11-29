@interface AWEWelfareWatchVideoTask : AWEUGWatchVideoTask

+ (void)registerTaskDealer;
+ (id)taskType;

- (void)taskDidLeaveScene:(id)a0;
- (void)triggerTaskIfNeededForTrigger:(id)a0 withReason:(id)a1;
- (BOOL)isLegalPage;

@end
