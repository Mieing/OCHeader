@class UIButton, ACCVideoEditFlowControlViewModel, NSString, UILabel, ACCAnimatedButton;
@protocol ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCEditTransitionServiceProtocol, ACCEditServiceProtocol;

@interface AWEPOIUGCEditFlowControlComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent>

@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIButton *nextButton;
@property (retain, nonatomic) UILabel *nextLabel;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (retain, nonatomic) ACCVideoEditFlowControlViewModel *viewModel;
@property (nonatomic) BOOL dismissed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)nextButtonClicked;
- (void)backButtonClicked;
- (id)publishModel;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)configNextButton;
- (void)p_dismissSelf;
- (void).cxx_destruct;
- (void)dismissHandler;
- (id)containerViewController;
- (void)dismissViewController;
- (id)rootPresentingViewController;

@end
