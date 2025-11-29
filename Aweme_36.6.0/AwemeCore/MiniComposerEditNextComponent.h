@class ACCVideoEditFlowControlViewModel, MiniComposerFinishEditHandler, NSString, AWEStudioEditPageMiniFlowConfig, ACCAnimatedButton;
@protocol ACCEditViewContainer, ACCEditServiceProtocol, ACCSequenceEditServiceProtocol;

@interface MiniComposerEditNextComponent : ACCFeatureComponent <MiniComposerFinishHandlerDataSource>

@property (retain, nonatomic) AWEStudioEditPageMiniFlowConfig *featureConfig;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) BOOL isViewAppear;
@property (retain, nonatomic) ACCVideoEditFlowControlViewModel *viewModel;
@property (retain, nonatomic) ACCAnimatedButton *nextButton;
@property (retain, nonatomic) MiniComposerFinishEditHandler *finishHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)nextButtonClicked;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)configBottomViewIfNeeded;
- (void)configCornerRadius:(double)a0 forView:(id)a1;
- (id)composer_currentController;
- (void).cxx_destruct;

@end
