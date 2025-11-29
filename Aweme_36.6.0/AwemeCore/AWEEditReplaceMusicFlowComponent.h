@class ACCVideoEditFlowControlViewModel, UIButton, NSString, ACCAnimatedButton;
@protocol ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCEditMusicServiceProtocol;

@interface AWEEditReplaceMusicFlowComponent : ACCFeatureComponent <ACCEditReplaceMusicFlowService, ACCPanelViewDelegate>

@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCVideoEditFlowControlViewModel *viewModel;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> musicService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIButton *postButton;
@property (retain, nonatomic) ACCAnimatedButton *replaceButton;
@property (nonatomic) BOOL hasAutoShowMusicPanel;
@property (nonatomic) BOOL hasViewDidAppear;
@property (nonatomic) BOOL hasLoadInitialMusic;
@property (copy, nonatomic) NSString *replacedMusicId;
@property (nonatomic) unsigned long long showDeviceMuteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (void)backClicked;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (BOOL)shouldShowReplaceMusicToast;
- (void)configBottomViewIfNeeded;
- (void)removePreUploadingTaskWhenQuit;
- (void)replaceMusicFlowInitialMusicLoadDidFinish;
- (void)showInitialMusicPanelIfNeeded;
- (void)configReplaceButtonInteraction:(BOOL)a0;
- (void)showDeviceMuteTipIfNeeded;
- (void)showReplaceMusicToastIfNeeded;
- (void)startPostVideoWithReplacedMusic;
- (void)dismissVideoEditPageForReplaceMusic;
- (void)replaceMusicButtonClicked;
- (void).cxx_destruct;
- (void)dismissHandler;
- (id)containerViewController;
- (void)popViewController;

@end
