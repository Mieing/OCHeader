@class UIImageView, AWEStudioRawTypePropViewModel, NSString;
@protocol ACCRecordFlowControlService, ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, AWEStudioBusinessCameraFlowControlProtocol, ACCRecordFlowService, ACCRecordFrameRatioService;

@interface AWEStudioRawTypePropComponent : ACCFeatureComponent <AWEStudioRawTypePropViewModelDelegate, ACCRecordSwitchModeServiceSubscriber, ACCRecordFrameRatioServiceSubscriber, AWEStudioBusinessCameraBasicActionProtocol>

@property (retain, nonatomic) UIImageView *livePhotoLoadingView;
@property (weak, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (retain, nonatomic) AWEStudioRawTypePropViewModel *viewModel;
@property (nonatomic) BOOL shouldReapplyCurrentPropWhenRatioChangeComplete;
@property (weak, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (weak, nonatomic) id<AWEStudioBusinessCameraFlowControlProtocol> cameraFlowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)cameraFlowActionCompletion:(BOOL)a0;
- (void)cameraFlowActionBegin;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)recordFrameRatioSwitchFrameRationTypeCompleted:(long long)a0;
- (void)p_configTakingPictureLoadingView;
- (void)p_hideRawTypeImageLoadingView;
- (void)p_showRawTypeImageLoadingView;
- (void)recordRawTypePhotoFinish;
- (void)recordRawTypePhotoStart;
- (void)recordRawTypePhotoCancel;
- (void).cxx_destruct;

@end
