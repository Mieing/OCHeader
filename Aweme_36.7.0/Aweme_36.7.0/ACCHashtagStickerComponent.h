@class AWEStudioEditHashtagFeatureConfig, ACCHashTagStickerHandler, UIImageView, UIButton;
@protocol ACCDraftAutoSaveProtocol, ACCGlobalStickerServiceProtocol, ACCEditViewContainer, ACCStickerServiceProtocol, ACCCTRServiceProtocol, ACCVideoEditFlowControlService;

@interface ACCHashtagStickerComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCGlobalStickerServiceProtocol> globalStickerService;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> draftSaveService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> editFlowService;
@property (retain, nonatomic) ACCHashTagStickerHandler *stickerHandler;
@property (retain, nonatomic) AWEStudioEditHashtagFeatureConfig *featureConfig;
@property (retain, nonatomic) UIButton *hashTagButton;
@property (retain, nonatomic) UIImageView *itemNewHintView;

- (id)barItem;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)removeNewHintView;
- (void)syncSequenceStickerStatus:(unsigned long long)a0;
- (void)registStickerHandler;
- (void)unRegistStickerHandler;
- (void).cxx_destruct;

@end
