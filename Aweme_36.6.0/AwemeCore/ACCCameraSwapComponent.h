@class AWEStudioRecorderFeatureCaptureConfig, NSString, ACCBarItem;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCCameraSwapService, ACCRecorderViewContainer, ACCScanService, ACCRecordTrackService, ACCRecordAuthService, ACCRecordSystemLivePhotoService, ACCCameraService;

@interface ACCCameraSwapComponent : ACCFeatureComponent <ACCCameraSwapService, ACCCameraLifeCircleEvent, ACCRecordSwitchModeServiceSubscriber, ACCRecordPropServiceSubscriber>

@property (nonatomic) BOOL isUserSwappedCamera;
@property (nonatomic) BOOL shootFromMaskNeedBlockSwapButton;
@property (nonatomic) long long currentCameraPosition;
@property (retain, nonatomic) AWEStudioRecorderFeatureCaptureConfig *featureConfig;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL isSwapCamera;
@property (retain, nonatomic) ACCBarItem *swapBarItem;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCCameraSwapService> cameraSwapService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCScanService> scanService;
@property (weak, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (readonly, nonatomic) BOOL disableAutoSwitchToFrontCameraWhenApplyProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)propServiceDidDismissPanel:(id)a0;
- (void)syncCameraActualPosition;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)p_configSwapButtonAccessiblity;
- (void)bindServices:(id)a0;
- (void)switchToCameraPosition:(long long)a0 source:(unsigned long long)a1;
- (void)switchToOppositeCameraPositionWithSource:(unsigned long long)a0;
- (void)switchCameraBlurViewDismiss;
- (void)p_bindViewModelObserver;
- (void)configSwapBarItem;
- (id)cameraSwapButton;
- (void)p_DisableNotHideButton:(id)a0;
- (void)updateSwapBarItemClickability;
- (void)p_SwapCameraPositionIfNeed;
- (void)p_setUserSwappedWtihSource:(unsigned long long)a0;
- (void).cxx_destruct;

@end
