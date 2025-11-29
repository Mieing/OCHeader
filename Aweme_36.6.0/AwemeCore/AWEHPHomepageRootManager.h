@class NSArray, NSPointerArray, NSString, AWEHPBottomTabConfigModel, AWEHPChannelTabsManager;

@interface AWEHPHomepageRootManager : NSObject <AWEHPRootChanennlManagerDelegate, AWEHPChannelDataManagerDelegate, AWEUserMessage, HTSAccountMessage>

@property (retain, nonatomic) AWEHPChannelTabsManager *tabsManager;
@property (copy, nonatomic) NSPointerArray *delegateArray;
@property (nonatomic) BOOL optEnabled;
@property (readonly, copy, nonatomic) NSArray *currentTabIDList;
@property (readonly, nonatomic) AWEHPBottomTabConfigModel *bottomTab;
@property (readonly, copy, nonatomic) NSString *rightFirstEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)rootWindowExecute;
+ (BOOL)rootWindowIsReady;
+ (void)triggerRootManagerInitIfNeed;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)handleConnectionChanged:(id)a0;
- (void)addNotifications;
- (void)removeNotification;
- (void)willLoginAtPlatform:(unsigned long long)a0;
- (void)didFinishBind:(BOOL)a0 platform:(unsigned long long)a1 error:(id)a2;
- (id)topTab;
- (long long)channelDataCanLongPressEdit;
- (BOOL)needResumeColdLaunchDelayTopChannel;
- (void)resumeColdLaunchDelayTopChannelIfNeed;
- (void)handleFinishLogin;
- (void)handleFinishLogout;
- (void)handleFinishSwitchAccount;
- (BOOL)getBottomSecondTabReplaceable;
- (BOOL)changeBottomSecondTab:(id)a0 error:(id *)a1;
- (id)getBottomSecondTabReplaceableListWithError:(id *)a0;
- (BOOL)channelDataIsSyncing;
- (BOOL)channelDataCanEdit;
- (void)channelSaveEditTabsWithEditType:(unsigned long long)a0 topEditResultList:(id)a1;
- (void)dataChangedWithReloadType:(id)a0 isServerTab:(BOOL)a1 renderResponse:(id)a2 allowReloadBottomTab:(BOOL)a3 bottomChanged:(BOOL)a4;
- (void)p_saveAndSyncEditResultWithEditType:(unsigned long long)a0 oldBottomTabList:(id)a1 oldTopTabList:(id)a2 bottomReplaceTab:(id)a3;
- (void)p_trackTabCheckAfterBottomEditWithOldTopTabList:(id)a0 oldBottomTabList:(id)a1;
- (void)p_handleFinishSwitchAccount;
- (void)p_handleFinishLogin;
- (void)p_handleFinishLogout;
- (void)tryCreateLandTypeChannelByLaunchLandingFailIfNeed;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)appWillEnterForeground:(id)a0;

@end
