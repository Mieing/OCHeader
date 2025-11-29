@class ACCRecordAuthServiceImpl, NSString, UIImageView, UIView, ACCAnimatedButton;
@protocol ACCRecordFrameRatioService, ACCRecorderViewContainer, ACCRecordSwitchModeService, ACCCameraService, ACCCameraKitService, ACCModeCameraSessionService, AWEStudioAuthorityViewProtocol;

@interface ACCRecordAuthComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceAuthorityChecker, DUXPopoverDelegate>

@property (retain, nonatomic) UIImageView *cameraBlurMaskView;
@property (retain, nonatomic) UIView<AWEStudioAuthorityViewProtocol> *authorityView;
@property (retain, nonatomic) ACCAnimatedButton *authorityCloseBtn;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) ACCRecordAuthServiceImpl *authService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCCameraKitService> cameraKitService;
@property (retain, nonatomic) id<ACCModeCameraSessionService> modeSessionService;
@property (retain, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (copy, nonatomic) id /* block */ authViewGrandBlock;
@property (nonatomic) BOOL disableLandingToOtherMode;
@property (nonatomic) long long rejectAuthCount;
@property (copy, nonatomic) id /* block */ actionExecutedWhenDidAppeared;
@property (nonatomic) BOOL isAppeared;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popoverDidDisappear:(id)a0;
- (void)componentDidAppear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)rootVC;
- (void)trackPermissionLayerState:(BOOL)a0;
- (void)trackPermissionStatus;
- (void)p_close;
- (void)bindServices:(id)a0;
- (void)switchStreamConfigIfNeed;
- (BOOL)passAuthWithCheckRequired:(id)a0;
- (void)sendPassAuthAndRefreshAuthViewWitAuthStatus:(id)a0;
- (void)showAuthViewIfNeededWithAuthStatus:(id)a0 authFinishBlock:(id /* block */)a1;
- (void)switchModeServiceWillCheckAuthorityWithMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceCheckAuthorityWithMode:(id)a0 oldMode:(id)a1 completion:(id /* block */)a2;
- (void)configCameraGrant;
- (BOOL)noPassMicAuthWithCheckRequired:(id)a0 ignoreAuthNeed:(BOOL)a1;
- (void)_checkAuthorityWithAuthStatus:(id)a0 completion:(id /* block */)a1;
- (void)hideAuthorityView;
- (void)markAuthStatusChange;
- (void)_buildCameraWithAuthStatus:(id)a0 completion:(id /* block */)a1;
- (void)_sendPassAuthIfNeededWithWithAuthStatus:(id)a0;
- (void)_refreshAuthViewWithAuthStatus:(id)a0;
- (void)_landingToModeIfNeededWithAuthStatus:(id)a0;
- (void)_switchToPhotoCameraMode;
- (BOOL)_showOpenAlbumBubbleWithMessage:(id)a0;
- (void)_defaultLandingWithNoCameraAndNoAlbum;
- (void)_switchToTextMode;
- (void)_showToast:(id)a0;
- (void)setupAuthorityView;
- (void)checkAuthorityRestricted;
- (void)pushAuthorityHelpWebController;
- (BOOL)noPassCameraAuthWithCheckRequired:(id)a0;
- (BOOL)mustHaveAuthScene;
- (void)clickAuthorityCloseBtn:(id)a0;
- (void).cxx_destruct;

@end
