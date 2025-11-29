@class ACCJsControlViewModel, ACCEditPlayerViewModel, NSString;
@protocol ACCEditorOneClickFilmService, ACCSequenceEditServiceProtocol, ACCSequencePlayControlServiceProtocol, ACCEditViewContainer, ACCEditServiceProtocol;

@interface ACCEditPlayerComponent : ACCFeatureComponent <ACCEditPreviewMessageProtocol, ACCEditSessionLifeCircleEvent>

@property (nonatomic) BOOL isAudioSessionInterrupted;
@property (nonatomic) BOOL prefersStickerEditMode;
@property (nonatomic) BOOL currentlyOnEditPage;
@property (nonatomic) BOOL firstRendered;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCEditPlayerViewModel *viewModel;
@property (retain, nonatomic) ACCJsControlViewModel *jsControl;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSequencePlayControlServiceProtocol> playService;
@property (weak, nonatomic) id<ACCEditorOneClickFilmService> oneClickFilmService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)sensorialRenderWithEditService:(id)a0;
- (void)executeSceneFirstRenderWithEditService:(id)a0;
- (id)publishModel;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)playStatusChanged:(long long)a0;
- (void)p_addObserver;
- (void)p_bindViewModel;
- (void)p_removeObserver;
- (void)playStatusChanged:(long long)a0 NLEUUID:(id)a1;
- (void)bindServices:(id)a0;
- (id)audioEffectService;
- (void)addBottomAdapterMaskIfNeeded;
- (void)addCoverImageForPlayerIfNeeded;
- (BOOL)enableLynxSetup;
- (id)editLynxPageUrl;
- (void)handleKeyboardUp:(id)a0;
- (void)handleKeyboardDown:(id)a0;
- (void)willEnterPublish;
- (void).cxx_destruct;
- (void)handleDidBecomeActive:(id)a0;
- (void)handleInterruption:(id)a0;
- (void)dealloc;

@end
