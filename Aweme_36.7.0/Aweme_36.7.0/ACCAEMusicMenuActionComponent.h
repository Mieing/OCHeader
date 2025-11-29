@protocol DVECoreAudioProtocol, DVEComponentViewManagerProtocol, ACCAdvanceActionDispatchProtocol, ACCAdvanceEditViewModelProtocol, ACCAEComponentActionProtocol, DVETrackEventProtocol, ACCAEMenuRouteProtocol, DVEEditingRuntimeProtocol;

@interface ACCAEMusicMenuActionComponent : ACCAdvanceEditComponent

@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<ACCAdvanceActionDispatchProtocol> actionDispatch;
@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomBarManager;
@property (weak, nonatomic) id<DVECoreAudioProtocol> audioEditor;
@property (weak, nonatomic) id<ACCAEMenuRouteProtocol> menuRouteService;
@property (weak, nonatomic) id<DVETrackEventProtocol> dveTracker;

- (id)commonParams;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)handleMenuAction:(id)a0;
- (void)triggleMusicMenu;
- (void).cxx_destruct;

@end
