@class NSArray, IESEffectModel, NSString;
@protocol ACCRecordFlowControlService, ACCRecordPropService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordTrackService, ACCRecordFlowService, ACCCameraService, ACCRecordFrameRatioService;

@interface ACCRecordUnifyAIGCPropComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCRecordFrameRatioServiceSubscriber, ACCRecordPropServiceSubscriber>

@property (nonatomic) BOOL shouldClearCamera;
@property (nonatomic) BOOL applicationActive;
@property (nonatomic) long long applyPropTimes;
@property (nonatomic) double startTimeIntervalForTrack;
@property (retain, nonatomic) IESEffectModel *restoreSticker;
@property (retain, nonatomic) NSArray *selImages;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecordFrameRatioService> frameRatioService;
@property (weak, nonatomic) id<ACCRecordTrackService> trackService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)flowServiceWillEnterNextPageWithMode:(id)a0;
- (void)flowServiceStartShowCountDownAnimation:(long long)a0;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)p_parseEffectExtra:(id)a0;
- (void)bindServices:(id)a0;
- (id)p_storeRenderImageWithImageData:(id)a0 withName:(id)a1 publishViewModel:(id)a2;
- (void)hideItemsAndShowCancelButton;
- (void)p_bindModel;
- (void)clearCameraView;
- (void)sendAIGCGeneratingMessage;
- (void)p_handleResourceWithResponse:(id)a0;
- (void)p_trackUploadPropContentFinish:(id)a0;
- (void)p_enterEditPage:(id)a0 completion:(id /* block */)a1;
- (id)p_storeRenderImageWithImageData:(id)a0 withName:(id)a1;
- (id)p_getEffectCachePathWithEffect:(id)a0;
- (id)p_firstFrameImageWithAVAsset:(id)a0;
- (void)sendStartCountdownMessage;
- (void)p_setAIGCContextRenderCache:(id)a0;
- (void)sendMessageToEffect:(long long)a0 arg1:(long long)a1 arg2:(long long)a2 body:(id)a3;
- (id)p_effectCachePathWithEffect:(id)a0;
- (void)recordFrameRatioDidSwitchTo:(long long)a0;
- (id)generateMultiAssetsImageKeyWithCount:(long long)a0 pixaloopImgK:(id)a1;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;

@end
