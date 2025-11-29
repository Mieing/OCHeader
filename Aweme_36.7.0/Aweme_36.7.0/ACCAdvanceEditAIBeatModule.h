@protocol ACCAdvanceEditViewModelProtocol, ACCEditMusicServiceProtocol, DVEComponentViewManagerProtocol;

@interface ACCAdvanceEditAIBeatModule : DVEFeatureModule

@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomComponentManager;
@property (weak, nonatomic) id<ACCEditMusicServiceProtocol> editMusicService;

- (void)setupObserver;
- (void)moduleDidMount;
- (void)moduleFirstFrameDidRender;
- (void).cxx_destruct;

@end
