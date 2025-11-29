@class ACCEditShootSameStickerViewModel, NSString, ACCEditStickerSelectTimeManager;
@protocol ACCEditClipServiceProtocol, ACCEditTransitionServiceProtocol, ACCStickerServiceProtocol, ACCGlobalStickerServiceProtocol, ACCVideoEditFlowControlService, ACCEditServiceProtocol;

@interface ACCEditShootSameStickerComponent : ACCFeatureComponent <ACCEditClipServiceSubscriber, ACCShootSameStickerConfigDelegation, ACCVideoEditFlowControlSubscriber>

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCGlobalStickerServiceProtocol> globalStickerService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (weak, nonatomic) id<ACCEditClipServiceProtocol> clipService;
@property (retain, nonatomic) ACCEditShootSameStickerViewModel *viewModel;
@property (retain, nonatomic) ACCEditStickerSelectTimeManager *selectTimeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)willGoBackToRecordPageWithEditFlowService:(id)a0;
- (void)componentDidMount;
- (unsigned long long)componentLoadState;
- (void)p_subscribe;
- (void)bindServices:(id)a0;
- (BOOL)supportCommentSticker;
- (void)p_setStickerDuration:(id)a0;
- (void)willRemoveAllEdits;
- (void)didRemoveAllEdits;
- (void)didTapPreview:(id)a0;
- (void).cxx_destruct;

@end
