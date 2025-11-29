@class NSString, AWEHPTabVisibleMonitorManager, AWEHPTabVisibleMonitorSceneRecorder;

@interface AWEHPTabVisibleMonitorModule : NSObject <AWEHPTabVisibleMonitorModule>

@property (retain, nonatomic) AWEHPTabVisibleMonitorManager *monitorManager;
@property (retain, nonatomic) AWEHPTabVisibleMonitorSceneRecorder *recorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)startMonitorIfNeed;
- (void)monitorTopbarAlphaStatusChangeWithSceneBusinessID:(id)a0 alpha:(double)a1;
- (void)monitorTopbarHiddenStatusChangeWithBusinessID:(id)a0 hidden:(BOOL)a1;
- (void)feedAwemeChangeFromPreviousAweme:(id)a0 currentAweme:(id)a1 channelID:(id)a2;
- (void)topTabDidFinishTransitionFromPreviousTab:(id)a0 currentTab:(id)a1;
- (void)monitorTabbarHiddenStatusChangeWithBusinessID:(id)a0 hidden:(BOOL)a1 tabBarController:(id)a2;
- (void)monitorTabbarAlphaStatusChangeWithSceneBusinessID:(id)a0 alpha:(double)a1 tabBarController:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
