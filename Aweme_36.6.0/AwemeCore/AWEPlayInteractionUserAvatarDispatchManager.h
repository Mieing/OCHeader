@interface AWEPlayInteractionUserAvatarDispatchManager : AWEBaseControllerManager

- (id)classNameArray;
- (void)loadControllersWithContainer:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (void)layoutBizControllerView;
- (void)controller_configAvatarView:(id)a0;
- (void)interactionPlay;
- (void)reset;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;

@end
