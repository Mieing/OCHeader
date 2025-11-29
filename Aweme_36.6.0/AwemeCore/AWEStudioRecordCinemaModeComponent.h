@class ACCRecordMode, NSString, IESEffectModel, AWEStudioRecordCinemaModeViewModel;
@protocol ACCRecordSwitchModeService, ACCRecordFlowControlService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, ACCRecordSystemLivePhotoService, ACCSideslipPropService, ACCRecordSubmodeService, ACCRecordFlowService, ACCCameraService, ACCRecordFrameRatioService;

@interface AWEStudioRecordCinemaModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCRecordFrameRatioServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordSystemLivePhotoServiceSubscriber, ACCRecorderEvent, AWERecordBeautyDataManagerSubscriberProtocol, ACCCameraLifeCircleEvent>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecordSubmodeService> submodeService;
@property (weak, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (weak, nonatomic) id<ACCRecordSystemLivePhotoService> livePhotoService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) AWEStudioRecordCinemaModeViewModel *viewModel;
@property (retain, nonatomic) ACCRecordMode *oldRecordMode;
@property (retain, nonatomic) IESEffectModel *autoCancelledProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_realNodeWithString:(id)a0;

- (void)componentWillAppear;
- (void)didUpdateSourceData;
- (void)didUpdateRenderingData:(id)a0 oldAppliedItemModels:(id)a1;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onWillStartVideoRecordWithRate:(double)a0;
- (void)onDidPauseVideoRecordWithData:(id)a0;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)viewContainerDidLayout;
- (void)recordSystemLivePhotoStart:(double)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })customRecordFrameForRecordMode:(id)a0;
- (void)beautyDidReplaceNotification:(id)a0;
- (void)p_updateCompileStatus;
- (void)p_updateBeautyOptFlag:(id)a0;
- (void)p_enterCinemaMode:(BOOL)a0;
- (void)p_exitCinemaMode:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)viewController;

@end
