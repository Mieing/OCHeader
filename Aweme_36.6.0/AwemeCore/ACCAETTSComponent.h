@class ACCTextReaderCategoryPanelContainer, ACCAETTSViewModel, ACCTextReadEffectSelectPanelModel, ACCTextReaderTracker, ACCVoiceCloneUtil;
@protocol ACCAEViewContainerProtocol;

@interface ACCAETTSComponent : ACCAdvanceEditComponent

@property (weak, nonatomic) id<ACCAEViewContainerProtocol> viewControllerService;
@property (retain, nonatomic) ACCAETTSViewModel *viewModel;
@property (retain, nonatomic) ACCTextReadEffectSelectPanelModel *ttsPanelModel;
@property (weak, nonatomic) ACCTextReaderCategoryPanelContainer *ttsPanelView;
@property (retain, nonatomic) ACCTextReaderTracker *tracker;
@property (retain, nonatomic) ACCVoiceCloneUtil *cloneUtil;

- (void)componentDidMount;
- (id)serviceBinding;
- (void)showTTSPanel;
- (void)dismissTTSPanel;
- (void).cxx_destruct;

@end
