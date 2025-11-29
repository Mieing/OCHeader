@class ACCAnimatedButton, AWEEditIMFlowControlViewModel, NSString;
@protocol ACCAIGCEffectServiceProtocol, ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCEditServiceProtocol;

@interface AWEEditIMFlowControlComponent : ACCFeatureComponent <ACCTouchSensingViewSubscriberProtocol>

@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) AWEEditIMFlowControlViewModel *viewModel;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCAIGCEffectServiceProtocol> aigcService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)backClicked;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)stickerService;
- (void)touchSensingView:(id)a0 didHitTestPoint:(struct CGPoint { double x0; double x1; })a1 event:(id)a2 resultView:(id)a3;
- (void)removePreUploadingTaskWhenQuit;
- (void)reportUsedSocialEffect;
- (void)trackMango25BackButtonClick;
- (void).cxx_destruct;
- (id /* block */)cancelBlock;
- (void)dismissHandler;
- (id)containerViewController;
- (void)popViewController;

@end
