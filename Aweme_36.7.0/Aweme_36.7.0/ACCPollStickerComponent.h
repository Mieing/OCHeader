@class ACCPollStickerViewModel, NSString;
@protocol ACCDraftAutoSaveProtocol, ACCStickerServiceProtocol, ACCFansInteractionStickerPanelServiceProtocol, ACCGlobalStickerServiceProtocol, ACCStickerPanelServiceProtocol;

@interface ACCPollStickerComponent : ACCFeatureComponent <ACCStickerPannelObserver, ACCPollStickerDataProvider>

@property (weak, nonatomic) id<ACCFansInteractionStickerPanelServiceProtocol> fansInteractionStickerPanelService;
@property (weak, nonatomic) id<ACCStickerPanelServiceProtocol> stickerPanelService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCGlobalStickerServiceProtocol> globalStickerService;
@property (weak, nonatomic) id<ACCDraftAutoSaveProtocol> draftSaveService;
@property (retain, nonatomic) ACCPollStickerViewModel *viewModel;
@property (copy, nonatomic) NSString *tabName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (id)serviceBinding;
- (id)gestureInvalidFrameValue;
- (id)editService;
- (void)bindServices:(id)a0;
- (BOOL)isClipVideoReedit;
- (BOOL)handleSelectSticker:(id)a0 fromTab:(id)a1 willSelectHandle:(id /* block */)a2 dismissPanelHandle:(id /* block */)a3;
- (unsigned long long)stickerPriority;
- (void)syncSequenceStickerStatus:(unsigned long long)a0;
- (void)registStickerHandler;
- (void)unRegistStickerHandler;
- (void)p_onStickerApplySuccess;
- (id)pollStickerHandler;
- (void)showPollSticker:(id)a0;
- (BOOL)isDraftBefore710;
- (BOOL)supportShowPollSticker;
- (void).cxx_destruct;
- (id)viewContainer;

@end
