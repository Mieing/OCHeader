@interface AWECampaignTaskLogHelper : NSObject

+ (void)logReceiveTaskWithParam:(id)a0;
+ (void)logTaskOpenFailForReason:(id)a0 withParam:(id)a1;
+ (void)logTaskOpenSuccessWithParam:(id)a0;
+ (void)logTaskFinishWithUseDay:(unsigned long long)a0 withParam:(id)a1;
+ (void)logTaskCacheForType:(id)a0 withParam:(id)a1;
+ (void)logTaskRunFailForError:(id)a0 withParam:(id)a1;
+ (void)logMonitorViewClickedByReason:(id)a0 withParam:(id)a1;
+ (void)logMonitorViewDismissForReason:(id)a0 withParam:(id)a1;
+ (id)commonParamForTaskID:(id)a0 withActivityName:(id)a1 isCache:(BOOL)a2 taskType:(id)a3;
+ (id)commonParamForUGModel:(id)a0 withCache:(BOOL)a1;

@end
