@class UIImageView, ACCVideoEditBottomControlViewModel, NSString;
@protocol ACCEditServiceProtocol, ACCEditViewContainer, ACCSequenceEditServiceProtocol, ACCRichTextEditorServiceProtocol, ACCStickerServiceProtocol, ACCQuickStoryShareServiceProtocol, ACCVideoEditFlowControlService, AWEStudioAIMateEditFeaturePublicAPI, ACCEditPublishSettingsServiceProtocol, ACCCTRServiceProtocol, ACCQuickStoryIMServiceProtocol;

@interface ACCVideoEditBottomControlComponent : ACCFeatureComponent <ACCVideoEditBottomControlLayoutDelegate, ACCEditPublishSettingsServiceSubscriberProtocol, ACCQuickStoryIMServiceDelegate, ACCQuickStoryShareDelegate, ACCEditSessionLifeCircleEvent>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<ACCRichTextEditorServiceProtocol> richTextEditorService;
@property (weak, nonatomic) id<AWEStudioAIMateEditFeaturePublicAPI> aiMateEditFeatureAPI;
@property (retain, nonatomic) ACCVideoEditBottomControlViewModel *viewModel;
@property (retain, nonatomic) id<ACCQuickStoryShareServiceProtocol> shareService;
@property (retain, nonatomic) id<ACCQuickStoryIMServiceProtocol> IMService;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (retain, nonatomic) id<ACCEditPublishSettingsServiceProtocol> publishSettingsService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCCTRServiceProtocol> ctrService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)sensorialRenderWithEditService:(id)a0;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)p_dismissWithCompletion:(id /* block */)a0;
- (void)bindServices:(id)a0;
- (void)privacySettingsDismiss;
- (BOOL)p_shouldShareAsPhoto;
- (void)shareServiceBackToHomePage;
- (void)shareServiceWillExecuteIMTask;
- (void)forbidSequenceBottomGesture;
- (void)p_updatePanel;
- (void)updateBottomButtonInteraction:(BOOL)a0;
- (void)p_clickShareButtonWithButton:(id)a0;
- (BOOL)p_shouldVideoSaveAsPhoto;
- (void)bottomControlDidLayout;
- (void)bottomControlLayout:(id)a0 didTap:(id)a1 type:(long long)a2;
- (void)quickStoryIMServiceSendIMWillStart;
- (void)quickStoryIMServiceSendIMDidFinish;
- (id)getBottomButtons;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
