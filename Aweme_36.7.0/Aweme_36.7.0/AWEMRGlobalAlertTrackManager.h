@class MMKV, NSMutableDictionary, NSMapTable, NSString;

@interface AWEMRGlobalAlertTrackManager : NSObject <AWEPublishTaskMessage, AWEBasicModeMessage, AWEDigitalWellbeingMessage, AWEMRGlobalAlertTrackerDelegate, AWEMRPermissionAlertTrackerDelegate>

@property (readonly, nonatomic) BOOL isEnabled;
@property (retain, nonatomic) NSMutableDictionary *trackerMap;
@property (retain, nonatomic) NSMutableDictionary *permissionTrackerMap;
@property (nonatomic) long long lastTriggerType;
@property (nonatomic) double lastTriggerTime;
@property (retain, nonatomic) NSMapTable *didTrackShowRecordMap;
@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)handleSideBarDidOpen:(id)a0;
- (void)trackAlertTerminateIfNeeded;
- (void)removeDidTrackShowRecordForKey:(id)a0;
- (void)storeDidTrackShowRecords;
- (void)setDidTrackShowRecordForKey:(id)a0 trackParams:(id)a1;
- (void)trackerDidTrackDismiss:(id)a0;
- (void)getLastTriggerType:(long long *)a0 lastTriggerUntilNow:(double *)a1;
- (void)trackerHitBlacklist:(id)a0;
- (void)installHook;
- (void)handleViewControllerTransition:(id)a0;
- (void)handleTabBarControllerDidChangeSelectedIndex:(id)a0;
- (void)handleFeedContainerViewTabSelectionDidChange:(id)a0;
- (void)handleApplicationWillEnterForeground:(id)a0;
- (void)handleSideBarDidClose:(id)a0;
- (void)handleTMRequestPermissionNotification:(id)a0;
- (void)handleTMRequestPermissionResultNotification:(id)a0;
- (BOOL)shouldSkipStandardAlert:(id)a0;
- (id)uniqueIdWithAlert:(id)a0;
- (void)p_handleTransitionPushFromVC:(id)a0 toVC:(id)a1;
- (void)p_handleTransitionPopFromVC:(id)a0 toVC:(id)a1;
- (void)p_handleTransitionPresentFromVC:(id)a0 toVC:(id)a1;
- (void)p_handleTransitionDismissFromVC:(id)a0 toVC:(id)a1;
- (void)recordEnterPage;
- (BOOL)isFullScreenModalStyle:(id)a0;
- (void)handleAlertShow:(id)a0 fromVC:(id)a1;
- (void)handleAlertDismiss:(id)a0;
- (void)recordTriggerWithType:(long long)a0;
- (void)permissionTrackerDidFinish:(id)a0;
- (void)handleApplicationDidBecomeActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setup;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
