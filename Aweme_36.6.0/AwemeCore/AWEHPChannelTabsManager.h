@class AWEHPTabViewModelManager;

@interface AWEHPChannelTabsManager : NSObject

@property (retain, nonatomic) AWEHPTabViewModelManager *viewModelManager;

- (id)currentTabIDList;
- (BOOL)needResumeDelayUselessChannel;
- (id)p_getBottomTabReloadSceneWithReloadType:(unsigned long long)a0;
- (void)p_reportServerTabWithBottomTab:(id)a0 traceInfo:(id)a1 reloadType:(id)a2 isHotSwitch:(BOOL)a3;
- (void)tryCreateLandTypeChannelByLaunchLandingFailIfNeed:(id)a0 detail:(id)a1;
- (void)reloadTopTabsWithConfig:(id)a0 detail:(id)a1;
- (void)reloadTabsWithReloadType:(id)a0 isServerTab:(BOOL)a1 renderResponse:(id)a2 allowReloadBottomTab:(BOOL)a3 bottomChanged:(BOOL)a4;
- (void).cxx_destruct;

@end
