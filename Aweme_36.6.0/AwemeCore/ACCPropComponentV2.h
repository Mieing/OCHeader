@class ACCPropViewModel, NSString, IESEffectModel, AWEStudioRecorderFeaturePropConfig, AWEStickerApplyHandlerContainer;
@protocol ACCRecorderViewContainer, AWERecordFlowSourceService, ACCCameraService, ACCRecorderStickerServiceProtocol, ACCRecordAuthService, ACCRecordFlowService, ACCRecordPropService, ACCStickerApplyHandlerTemplate, ACCFilterService, ACCRecordUploadButtonService, ACCRecordConfigService, ACCShootSourceService, ACCRecordSwitchModeService, ACCRecordModeFactory, ACCPropPickerService, ACCDuetSessionSwtichService, AWERecordBeautyService, AWEStickerPickerLoggerDelegate, ACCRecordTrackService, ACCRecordScanModelFlowService;

@interface ACCPropComponentV2 : ACCFeatureComponent <ACCCameraLifeCircleEvent, ACCRecordPropServiceSubscriber, ACCRecordSwitchModeServiceSubscriber, ACCRecordScanModelFlowSubscriber, ACCStickerPickerServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordConfigService> configService;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (retain, nonatomic) id<ACCRecorderStickerServiceProtocol> stickerService;
@property (retain, nonatomic) id<ACCStickerApplyHandlerTemplate> stickerApplyHandlerTemplate;
@property (retain, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordUploadButtonService> uploadButtonService;
@property (retain, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (retain, nonatomic) id<AWERecordBeautyService> beautyService;
@property (retain, nonatomic) AWEStudioRecorderFeaturePropConfig *featureConfig;
@property (retain, nonatomic) id<AWERecordFlowSourceService> flowSourceService;
@property (retain, nonatomic) ACCPropViewModel *viewModel;
@property (retain, nonatomic) AWEStickerApplyHandlerContainer *stickerApplyHandlerContainer;
@property (retain, nonatomic) id<AWEStickerPickerLoggerDelegate> logger;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanToScanService;
@property (retain, nonatomic) IESEffectModel *scanToScanRecordEffectModel;
@property (retain, nonatomic) IESEffectModel *lastApplyEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)onCameraDidStartRender:(id)a0;
- (void)cameraService:(id)a0 didTakeAction:(long long)a1 error:(id)a2 data:(id)a3;
- (void)propServiceWillApplyProp:(id)a0 propSource:(long long)a1;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)stickerPickerServiceDidSelectNewSticker:(id)a0 oldSticker:(id)a1;
- (void)p_bindViewModels;
- (void)onEffectMessageReceived:(id)a0;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceDidExitScanMode;
- (void)createStickerApplyContainer;
- (void)p_applyStickerWhenReshoot;
- (void)p_applyLocalSticker;
- (void)openAIGCCreationPath;
- (void)addPropApplyPredicate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
