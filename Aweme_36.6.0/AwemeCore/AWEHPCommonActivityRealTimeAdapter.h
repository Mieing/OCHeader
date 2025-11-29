@class AWEHPCommonActivityBatchInfo, NSString, MMKV, AWEHPRealTimeActivityManager, UIViewController;
@protocol AWEHPCommonActivityContainer, AWEFeedTabItemViewControllerProtocol, AWEHPChannelControllerConfigProtocol, AWEUGActivityXTabControllerProtocol;

@interface AWEHPCommonActivityRealTimeAdapter : NSObject <AWEHPRealTimeActivityDelegate, AWEHPCommonActivityAdapter>

@property (copy, nonatomic) NSString *entryID;
@property (retain, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEUGActivityXTabControllerProtocol> *contentVC;
@property (retain, nonatomic) AWEHPCommonActivityBatchInfo *willShowActivityInfo;
@property (retain, nonatomic) AWEHPCommonActivityBatchInfo *showingActivityInfo;
@property (retain, nonatomic) AWEHPRealTimeActivityManager *activityManager;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) BOOL inPageShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPCommonActivityContainer> activityContainer;

- (long long)deadlineTime;
- (id)topBarItemConfig;
- (id)badgeArray;
- (id)bubbleArray;
- (unsigned long long)topTabTheme;
- (unsigned long long)bottomTabTheme;
- (id)initWithActivityContainer:(id)a0 channelConfig:(id)a1;
- (BOOL)activityAllowReloadWithConfig:(id)a0;
- (void)activityWillReloadWithConfig:(id)a0;
- (void)activityDidReload;
- (BOOL)activityIsAvailableWithError:(id *)a0;
- (id)getActivityViewController;
- (void)destroyActivityViewController;
- (void)activityDidLoadWithType:(unsigned long long)a0;
- (void)channelSendTrackerEvent:(id)a0 params:(id)a1;
- (void)activityDidEnter;
- (void)activityDidLeave;
- (id)p_generateDefaultActivityDataWithJsonDictionary:(id)a0 error:(id *)a1;
- (id)p_getEntryIDWithConfig:(id)a0;
- (void)p_reloadActivityWithReason:(unsigned long long)a0;
- (void)saveCurrentActivityWithResourceID:(id)a0 cycleID:(id)a1;
- (id)p_generateBackupActivityInfoForReloadWithTrackParams:(id *)a0;
- (id)p_generateDynamicActivityInfoForReloadWithTrackParams:(id *)a0 isLastDynamicActivity:(BOOL *)a1;
- (id)p_generateBackupActivityInfoForUpdateWithTrackParams:(id *)a0 oldActivityInfo:(id)a1;
- (id)p_generateDynamicActivityInfoForUpdateWithTrackParams:(id *)a0 oldActivityInfo:(id)a1;
- (void)p_trySwitchActivity;
- (id)p_generateDefaultActivityDataWithJsonString:(id)a0 error:(id *)a1;
- (BOOL)readLastActivityWithResourceID:(id *)a0 cycleID:(id *)a1;
- (id)p_generateActivityChannelInfoWithJsonString:(id)a0 error:(id *)a1;
- (void)p_tryUpdateActivityWithReason:(id)a0;
- (void)stateChangedWithActivityManager:(id)a0;
- (void)dataChangedWithActivityManager:(id)a0;
- (void).cxx_destruct;
- (void)reload;
- (id)activityID;

@end
