@class RTVVoipTracker, NSString, NSObject;
@protocol RTVPipelineInterface, RTVVoipFeatureCheckController, RTVAuthCheckerInterface, RTVVoipConfigureManagerInterface, RTVPIPControllerInterface, RTVXRStateRecorder, RTVCoordinator, RTVVoipManagerInterface, RTVXRCaptureController, RTVVoIPCamDegradeControllerProtocol, RTVXREngine;

@interface RTVCameraComponent : RTVComponentBase <RTVCameraInterface, RTVRTCEngineAction, RTVPipelineHandler, RTVVoIPNarrowAction, RTVPiPControlAction, RTVVoipViewControllerAction, RTVVoipSessionObserver>

@property (copy, nonatomic) id /* block */ waiteCameraStateDidChangeBlock;
@property (weak, nonatomic) id<RTVPipelineInterface> pipeline;
@property (readonly, nonatomic) id<RTVXRCaptureController> captureController;
@property (readonly, nonatomic) RTVVoipTracker *voipTracker;
@property (readonly, nonatomic) id<RTVVoipFeatureCheckController> featureCheckController;
@property (readonly, nonatomic) id<RTVAuthCheckerInterface> authChecker;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVPIPControllerInterface> PiPController;
@property (readonly, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, nonatomic) id<RTVVoIPCamDegradeControllerProtocol> degradeController;
@property (readonly, nonatomic) id<RTVCoordinator> rtvCoordinator;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVXREngine> engine;
@property (retain, nonatomic) NSObject *rtvActiveResumeCameraToken;
@property (retain, nonatomic) NSObject *deactiveResumeCameraToken;
@property (retain, nonatomic) NSObject *deactiveResumeCameraTokenForNarrow;
@property (nonatomic) BOOL mutedVideoBeforeSwitchToNarrow;
@property (retain, nonatomic) NSObject *resumeCameraToken;
@property (nonatomic) BOOL disableVoipSessionMuteOnVideoKVO;
@property (nonatomic) BOOL shouldReportServerCameraStateChanged;
@property (readonly, nonatomic) BOOL isCameraMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0 completion:(id /* block */)a1;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)__applicationWillResignActive;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)voipSessionCallerRequestRoomFinished:(BOOL)a0 session:(id)a1;
- (void)xrEngine:(id)a0 videoCaptureStateChange:(unsigned long long)a1;
- (void)onVoipViewControllerViewDidLoad:(id)a0;
- (void)onMainViewControllerViewWillDisappear:(id)a0;
- (void)onMainViewControllerViewDidAppear:(id)a0;
- (BOOL)hasVideoCaptureStarted;
- (void)onNarrowViewWillShow:(id)a0;
- (void)onNarrowViewWillChangToFullScreen:(id)a0;
- (void)shouldEnableVideoWhenPiPStateChanged:(BOOL)a0;
- (void)__applicationDidBecomeActive;
- (void)__applicationWillEnterForeground;
- (void)p_setupKVO:(id)a0;
- (void)__handleSessionStatus:(long long)a0 changeTo:(long long)a1;
- (void)__checkAndAdjustCameraStateIfNeed;
- (void)__callerOpenCameraFast;
- (void)__handlePrepareEnableCamera;
- (void)p_handlePipeLineCloseAction:(id)a0;
- (void)p_handleActionButtonCameraMute:(BOOL)a0;
- (void)p_handlePipeLineOpenAction:(id)a0;
- (void)p_handleEffectGameOpenCamera;
- (void)p_handlePipeLineOpenAction:(id)a0 token:(id)a1;
- (void)__handlePreviewEnableCamera;
- (void)p_handlePreviewInterrupted;
- (BOOL)__shouldToggleCameraOff;
- (void)p_handlePipeLineActionWithMuteCamera:(BOOL)a0 reason:(id)a1 enableToken:(id)a2;
- (id)registedEventIdentities;
- (void)onComponentDidBindSession:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
