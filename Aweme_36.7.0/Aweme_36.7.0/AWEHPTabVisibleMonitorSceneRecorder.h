@class NSString, NSMutableArray;

@interface AWEHPTabVisibleMonitorSceneRecorder : NSObject <AWEHPTabVisibleMonitorManagerDelegate>

@property (retain, nonatomic) NSMutableArray *lastBottomTabHiddenSceneList;
@property (retain, nonatomic) NSMutableArray *lastBottomTabAlphaSceneList;
@property (retain, nonatomic) NSMutableArray *lastTopTabHiddenSceneList;
@property (retain, nonatomic) NSMutableArray *lastTopTabAlphaSceneList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorTopbarAlphaStatusChangeWithSceneBusinessID:(id)a0 alpha:(double)a1;
- (void)monitorTopbarHiddenStatusChangeWithBusinessID:(id)a0 hidden:(BOOL)a1;
- (id)getLastBottomTabHiddenScene;
- (id)getLastBottomTabAlphaScene;
- (id)getLastTopTabHiddenScene;
- (id)getLastTopTabAlphaScene;
- (void)monitorTabbarHiddenStatusChangeWithBusinessID:(id)a0 hidden:(BOOL)a1 tabBarController:(id)a2;
- (void)monitorTabbarAlphaStatusChangeWithSceneBusinessID:(id)a0 alpha:(double)a1 tabBarController:(id)a2;
- (void)saveLastSetVisibleScene:(id)a0 sceneList:(id)a1;
- (void).cxx_destruct;

@end
