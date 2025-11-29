@class NSString;

@interface AWEIMTaskPlatformTracker : NSObject <AWEIMTaskPlatformTrackerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedIntance;
+ (id)urlAddMonitorParams:(id)a0;
+ (void)trackSettingsClick:(id)a0 settingStatus:(id)a1;
+ (id)p_getStringFromCardType:(long long)a0;

- (void)trackEnterTaskListPage:(id)a0 noticeType:(id)a1 enterMethod:(id)a2 showCount:(id)a3 taskCount:(id)a4;
- (void)trackCooperationCellShow:(id)a0 pageItem:(id)a1;
- (void)trackEnterChat:(id)a0 pageItem:(id)a1;
- (void)trackBusinessTaskDetailClick:(long long)a0 taskType:(long long)a1 clickMethod:(id)a2 taskStatus:(long long)a3 taskID:(id)a4 logExtra:(id)a5;
- (void)trackRecommendTaskClick:(long long)a0 logExtra:(id)a1;
- (void)trackBusinessTaskDetailShow:(long long)a0 taskType:(long long)a1 taskStatus:(long long)a2 taskID:(id)a3 logExtra:(id)a4;
- (void)trackRecommendTaskShow:(long long)a0 logExtra:(id)a1;
- (void)trackWorkbenchViewMore:(id)a0 index:(id)a1;
- (void)trackScreenSettingClick:(id)a0 statusIdentifier:(id)a1;
- (void)trackScreenSettingShow:(id)a0 statusIdentifier:(id)a1;
- (void)trackScreenSettingConfirm:(id)a0 statusIdentifier:(id)a1;
- (void)trackSettingsWorkbenchShow;
- (BOOL)isStickOnTop;
- (void)trackWorkbenchEventName:(id)a0 chatModel:(id)a1;
- (void)trackWorkbenchTopShow:(id)a0 isStickOnTop:(BOOL)a1;
- (void)trackWorkbenchTopShow:(id)a0;
- (void)trackWorkbenchTopClick:(id)a0 isStickOnTop:(BOOL)a1;
- (void)trackWorkbenchDeleteShow:(id)a0;
- (void)trackWorkbenchDeleteClick:(id)a0;
- (void)trackSettingWorkbenchShow;
- (void)trackExitSettingWorkbench:(BOOL)a0;

@end
