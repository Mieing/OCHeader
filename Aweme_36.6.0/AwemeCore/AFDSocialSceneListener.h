@class AFDSocialTimeTrackerStack, NSString;

@interface AFDSocialSceneListener : NSObject <AWEIMSettingModelUpdateMessage, AFDSocialSceneListenerProtocol>

@property (class, readonly, nonatomic) AFDSocialSceneListener *sharedInstance;

@property (nonatomic) long long currentScene;
@property (retain, nonatomic) AFDSocialTimeTrackerStack *trackerStack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnterScene:(long long)a0;
- (void)didUpdateIMSetting:(BOOL)a0 source:(id)a1 currentModel:(id)a2;
- (void)didNavigateWithPageDepth:(long long)a0 inScene:(long long)a1;
- (void)didLeaveScene:(long long)a0;
- (void)handleApplicationDidEnterBackgroundNotification:(id)a0;
- (void)handleTabBarIndexDidChangeNotification:(id)a0;
- (void)handleFeedContainerDidClickLiveEntranceNotification:(id)a0;
- (void)handleRecorderViewControllerDidAppearNotification:(id)a0;
- (void)handleRecorderViewControllerDidDisappearNotification:(id)a0;
- (void)handleRecorderNavigationControllerDidAppearNotification:(id)a0;
- (void)handleRecorderNavigationControllerDidDisappearNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
