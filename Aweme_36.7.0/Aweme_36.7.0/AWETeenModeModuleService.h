@class NSString;

@interface AWETeenModeModuleService : HTSService <AWETeenModeModuleService>

@property (copy, nonatomic) NSString *pushSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preloadDowngradeIfNeededWithBitrateModel:(id)a0;
- (void)resetNavigationForCurrentTab;
- (BOOL)isFirstLevelPage;
- (id)tabBarItemTypes;
- (id)selectedRootViewController;
- (void)setTabBarBackgroundColorFill:(BOOL)a0 animated:(BOOL)a1;
- (void)reloadTabBarWithTabItemType:(long long)a0 reloadScene:(id)a1;
- (void)resetSelectedTabWithAllowRepeatSelected:(BOOL)a0 scene:(id)a1;
- (void)showSeparatorLine:(BOOL)a0;
- (void)updateSelectedItemType:(long long)a0 options:(id)a1;
- (void)showBackgroundImagesWithProgress:(double)a0 needReloadRenderer:(BOOL)a1;
- (void)setBackgroundImagesHidden:(BOOL)a0;
- (void)switchToLightModeWithProgress:(double)a0 force:(BOOL)a1 itemType:(long long)a2 businessID:(id)a3;
- (id)selectedChannelID;
- (id)selectedTabID;
- (id)tabIDWithTabBarItemType:(long long)a0;
- (id)tabBarRootVCWithTabID:(id)a0;
- (id)teenTabBarItemTypes;
- (BOOL)teenModeCanHandleURL:(id)a0 transferType:(unsigned long long)a1;
- (BOOL)teenModeCanHandleURLString:(id)a0 transferType:(unsigned long long)a1;
- (BOOL)teenModePushFeatureOn;
- (BOOL)teenModeAlipayFeatureOn;
- (BOOL)teenModeAlipay:(id)a0;
- (void)enterByPush:(id)a0;
- (void)startAppWithTeenMode:(BOOL)a0;
- (void)startChangeTeenMode;
- (void)failChangeTeenModelWithErrorCode:(long long)a0 errorMessage:(id)a1 isNetwork:(BOOL)a2;
- (void)resetChangeTeenMode;
- (void)startChangeTeenModeApi;
- (void)endChangeTeenModeApi;
- (id)minorAlbumOfAweme:(id)a0;
- (void)updateIgonreLongConnectMessage:(BOOL)a0;
- (id)getContentPreferManager;
- (BOOL)isTeenUpgradeAlertOptimizeEnable;
- (id)versionUpdateManager;
- (void)setPauseTimeLockIfNeed:(BOOL)a0 scene:(id)a1;
- (void)fetchVideosForOfflineCacheWithType:(long long)a0 count:(id)a1 feedColumntype:(unsigned long long)a2 extParams:(id)a3 pullType:(long long)a4 completion:(id /* block */)a5;
- (BOOL)isCurrentFeedVCRecommend;
- (void)updateCurrentTableVCsGreyStatus;
- (void)upadteUserInfo;
- (BOOL)teenFeedPreCacheEnable;
- (long long)teenFeedPreCacheFileSizeLimit;
- (void)changeTrackerStatusForTeenModeEnable:(BOOL)a0;
- (void)switchOutTeenMode;
- (void)switchInTeenMode;
- (void)addLightModeListener:(id)a0;
- (void).cxx_destruct;
- (id)tabBarController;
- (long long)selectedItemType;

@end
