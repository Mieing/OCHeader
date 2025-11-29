@class ACCRecorderShootSameStickerViewModel, NSString;
@protocol ACCRecorderStickerServiceProtocol, ACCRecordFlowService, ACCRecordSwitchModeService, ACCRecorderViewContainer, ACCRecordScanModelFlowService;

@interface ACCRecorderShootSameStickerComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCShootSameStickerConfigDelegation, ACCRecordSwitchModeServiceSubscriber, ACCRecordScanModelFlowSubscriber>

@property (weak, nonatomic) id<ACCRecorderStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) ACCRecorderShootSameStickerViewModel *viewModel;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanToScanService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)bindServices:(id)a0;
- (void)didTapPreview:(id)a0;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceDidExitScanMode;
- (void)p_refreshStickerViews;
- (void)p_removeShootSameStickers;
- (void).cxx_destruct;
- (void)dealloc;

@end
