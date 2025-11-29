@class IESLiveLandscapeStatusBarView;

@interface IESLiveLandscapeStatusBarFragment : IESLiveRoomComponent

@property (retain, nonatomic) IESLiveLandscapeStatusBarView *statusBarView;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentCreate;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (void)_showView;
- (void)_prepareToChangeOrientation:(BOOL)a0;
- (void)_handleOrientationChanged:(long long)a0;
- (BOOL)_landscapeStatusBarDisplayEnable;
- (void).cxx_destruct;
- (void)_hiddenView;

@end
