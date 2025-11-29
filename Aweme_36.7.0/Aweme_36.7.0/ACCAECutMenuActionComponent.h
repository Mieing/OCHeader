@protocol DVEEditingRuntimeProtocol, ACCAEComponentActionProtocol, DVEComponentViewManagerProtocol, DVETrackEventProtocol, ACCAEMenuRouteProtocol;

@interface ACCAECutMenuActionComponent : ACCAdvanceEditComponent

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomBarManager;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVETrackEventProtocol> tracker;
@property (weak, nonatomic) id<ACCAEMenuRouteProtocol> menuRouteService;

- (void)bindServices:(id)a0;
- (void)handleMenuAction:(id)a0;
- (void)trackClickCutMenu;
- (void).cxx_destruct;

@end
