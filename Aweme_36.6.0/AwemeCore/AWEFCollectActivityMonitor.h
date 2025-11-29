@interface AWEFCollectActivityMonitor : NSObject

+ (void)logGoldCollectService:(id)a0 status:(unsigned long long)a1 extraInfo:(id)a2;
+ (void)monitorLogSettingWithExtraInfo:(id)a0 status:(unsigned long long)a1;
+ (void)monitorLogSettingVersionWithExtraInfo:(id)a0;
+ (void)monitorLogLeftEntranceFlagWithExtraInfo:(id)a0 status:(unsigned long long)a1;
+ (void)monitorLogActivityInProcessWithExtraInfo:(id)a0 status:(unsigned long long)a1;
+ (void)monitorLogTaskInProcessWithExtraInfo:(id)a0 status:(unsigned long long)a1;
+ (void)monitorLogGetTaskInfoWithExtraInfo:(id)a0 status:(unsigned long long)a1 error:(id)a2;
+ (void)monitorLogReportTaskDoneWithExtraInfo:(id)a0 status:(unsigned long long)a1 error:(id)a2;
+ (void)monitorLogNextTaskWithExtraInfo:(id)a0 status:(unsigned long long)a1;
+ (void)monitorLogDownloadResourceWithExtraInfo:(id)a0 status:(unsigned long long)a1;
+ (void)monitorLogStartTaskWithExtraInfo:(id)a0;
+ (void)monitorLogFinishTaskWithExtraInfo:(id)a0;
+ (void)monitorLogClosePendantWithExtraInfo:(id)a0;
+ (void)monitorLogClickPendantWithExtraInfo:(id)a0;
+ (void)monitorLogGetLottitWithExtraInfo:(id)a0 status:(unsigned long long)a1;
+ (void)monitorLogAnimationWithExtraInfo:(id)a0;
+ (void)monitorLogShowPendantWithExtraInfo:(id)a0;

@end
