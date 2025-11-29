@interface AWESoftAdMissionComponent : AWEUserDetailBaseComponent

@property (nonatomic) BOOL softAdMission;

- (void)handleAppBecomeActive;
- (BOOL)viewDidLoadAndFromSoftAdMissionViewController;
- (void)softAdMissionMaybeUpdateTimer;
- (BOOL)currentIsUserDetailViewController;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)handleAppWillResignActive;

@end
