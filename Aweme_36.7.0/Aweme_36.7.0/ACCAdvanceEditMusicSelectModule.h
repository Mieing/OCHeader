@class ACCVideoEditMusicViewModel;
@protocol DVEPlayerServiceProtocol, DVECoreAudioProtocol, ACCEditTransitionServiceProtocol, ACCAdvanceActionDispatchProtocol, ACCAdvanceEditViewModelProtocol, DVEMulitpleTrackViewServiceProtocol, DVERootViewControllerProtocol, DVETrackEventProtocol, DVECoreActionServiceProtocol, DVEEditingRuntimeProtocol;

@interface ACCAdvanceEditMusicSelectModule : DVEFeatureModule

@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<ACCAdvanceActionDispatchProtocol> actionDispatch;
@property (weak, nonatomic) id<DVERootViewControllerProtocol> root;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVEPlayerServiceProtocol> playerService;
@property (weak, nonatomic) id<DVECoreAudioProtocol> audioEditor;
@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (retain, nonatomic) ACCVideoEditMusicViewModel *musicViewModel;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<DVETrackEventProtocol> trackManager;

- (void)setupObserver;
- (void)moduleDidMount;
- (void)openMusicSelectPanel;
- (void)trackEventAddAudio;
- (void)trackDuration:(double)a0 event:(id)a1;
- (void).cxx_destruct;

@end
