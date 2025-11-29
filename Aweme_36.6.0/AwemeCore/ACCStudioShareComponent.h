@class NSString, ACCStudioShareViewModel;
@protocol ACCEditServiceProtocol, ACCQuickStoryShareServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCCTRServiceProtocol, ACCRichTextEditorServiceProtocol, ACCVideoEditFlowControlService, ACCAIImageToLiveEditServiceProtocol, ACCVideoEditBottomControlService;

@interface ACCStudioShareComponent : ACCFeatureComponent <ACCQuickStoryShareDelegate>

@property (weak, nonatomic) id<ACCRichTextEditorServiceProtocol> richTextEditorService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCQuickStoryShareServiceProtocol> shareService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (retain, nonatomic) ACCStudioShareViewModel *viewModel;
@property (weak, nonatomic) id<ACCAIImageToLiveEditServiceProtocol> aiImageToLiveService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)barItemContainerDidLoad;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)shareServiceBackToHomePage;
- (void)shareServiceWillExecuteIMTask;
- (void)addShareBarItem;
- (void)forbidSequenceBottomGesture;
- (void)updateToolBarShareButtonInteraction:(BOOL)a0;
- (void)updatePanelState;
- (void)p_shareItemDidClick:(id)a0 isSharePanelFromPublishPage:(BOOL)a1;
- (void)clickShareButtonWithButton:(id)a0 isFromPublishPage:(BOOL)a1;
- (BOOL)shouldShareAsPhoto;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;

@end
