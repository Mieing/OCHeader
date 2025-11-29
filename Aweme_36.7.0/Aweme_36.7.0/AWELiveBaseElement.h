@class NSString, AWEAwemeModel;

@interface AWELiveBaseElement : AWEBaseElement <AWELiveBaseElementProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)application_willEnterForeground;
- (void)application_WillResignActive;
- (void)viewController_viewDidDisAppear;
- (void)setAppear:(BOOL)a0;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)application_DidEnterBackground;
- (void)preloadElement;
- (void)hide:(BOOL)a0 duration:(double)a1;
- (void)streamPlayer_startToPlay;
- (void)viewController_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)roomInfoBySceneReceive:(id)a0 extendArea:(id)a1;
- (void)viewController_viewWillDisAppear;
- (void)viewController_willBeginDragging:(id)a0;
- (void)application_DidBecomeActive;
- (void)streamPlayer_firstFrame;
- (void)streamPlayer_willStopWithToken:(id)a0;
- (void)streamPlayer_stop;
- (void)streamPlayer_finish;
- (void)streamPlayer_error:(id)a0;
- (void)streamPlayer_startBuffering;
- (void)streamPlayer_finishBuffering;
- (void)viewController_endDecelerating:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)prepareForReuse;
- (void)reset;
- (void)loadView;
- (id)context;

@end
