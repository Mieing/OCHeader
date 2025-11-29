@interface AWELivePreStreamQuitRoomCommonAlertElement : AWELiveBaseElement <AWELiveCommonSceneMessage>

+ (BOOL)shouldActivateElement;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)viewController_viewDidDisAppear;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)preloadElement;
- (void)showComponentWithPitayaMessage:(id)a0;
- (void)viewController_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setData:(id)a0;
- (id)init;
- (void)reset;

@end
