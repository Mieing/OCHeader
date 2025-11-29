@interface AWELightMissionComponent : AWEUserDetailBaseComponent

@property (nonatomic) BOOL isParticipateMission;

- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void)__destroyLightMissionModel;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewDidDisappear;

@end
