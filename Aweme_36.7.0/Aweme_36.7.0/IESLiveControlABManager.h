@interface IESLiveControlABManager : NSObject

+ (BOOL)audienceDisableSwitchDefinitionDuringInteraction;
+ (BOOL)shouldCombineRecordEntry:(BOOL)a0;
+ (BOOL)liveBizPerformanceEnable;
+ (double)liveBizPerformancePushShowDuration;
+ (BOOL)liveBizPerformanceDegradeBizResetImmediately;
+ (id)liveBizPerformanceDemoteNotesSchema;
+ (id)liveBizPerformanceDegradeNotesSchema;
+ (int)liveBizPerformanceStableDays;
+ (BOOL)liveBizPerformanceRadicalDegrade;
+ (double)liveBizLevelInheritanceTimeLimit;
+ (id)liveBizPerformanceDegradeScene;
+ (id)liveBizPerformanceDegradeSceneDescription;
+ (id)liveBizPerformanceUpgradeScene;
+ (id)liveBizPerformanceUpgradeSceneDescription;
+ (BOOL)liveCombineRecordEntranceAnchor;
+ (BOOL)liveCombineRecordEntranceAudience;
+ (id)liveCommerceTips;
+ (BOOL)enableRecordGuideMsg;
+ (id)recordGuideMsgContent;
+ (id)recordGuideTime;
+ (id)liveBizPerformanceConfig;
+ (BOOL)liveTopSpeedModeEnable;
+ (BOOL)liveEnableAnchorLongPressRecord;
+ (id)broadcastRecordTipConfig;
+ (BOOL)liveScreenRecordDefaultClean;
+ (double)liveReplayFetchRemoteDelayTime;
+ (double)liveReplayFetchRemoteDelayGapTime;
+ (BOOL)liveReplayEnableOptimize;
+ (long long)liveVsTimingCloseUnit;
+ (id)liveBrightnessIOS16Gap;
+ (id)liveTopSpeedModePushGuideURL;
+ (id)liveTopSpeedModeNoteURL;
+ (BOOL)liveTopSpeedModePushOpt;
+ (BOOL)multiPathPullStreamEnable;
+ (id)liveBizPerformanceUpgradeNotesSchema;
+ (long long)liveBizPerformancePushTimesLimit;
+ (double)liveBizPerformancePushTimeGap;
+ (double)liveBizPerformanceToastTimeGap;
+ (long long)liveBizPerformanceToastTimesLimit;
+ (long long)liveBizPerformancePushDeviceLimit;
+ (BOOL)livePerformancePanelIslandStyle;

@end
