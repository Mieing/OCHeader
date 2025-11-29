@class ACCAnimatedButton, AWEStudioEditPageMiniFlowConfig;
@protocol ACCEditViewContainer, ACCEditServiceProtocol;

@interface MiniComposerEditBackComponent : ACCFeatureComponent

@property (retain, nonatomic) AWEStudioEditPageMiniFlowConfig *featureConfig;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCAnimatedButton *backButton;

- (void)backClicked;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void).cxx_destruct;
- (id)currentViewController;

@end
