@class DVETrackPanelContext, ACCAEMultipleTrackStickerViewModel;
@protocol ACCAEComponentActionProtocol, DVEComponentViewManagerProtocol, DVEMulitpleTrackViewServiceProtocol, ACCAEMenuRouteProtocol;

@interface ACCAECombineStickerTrackComponent : ACCAdvanceEditComponent

@property (weak, nonatomic) id<ACCAEComponentActionProtocol> actionHandler;
@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomBarManager;
@property (weak, nonatomic) id<ACCAEMenuRouteProtocol> menuRouteService;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multiTrackService;
@property (weak, nonatomic) DVETrackPanelContext *panelContext;
@property (retain, nonatomic) ACCAEMultipleTrackStickerViewModel *stickerViewModel;

- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)handleMenuAction:(id)a0;
- (void).cxx_destruct;

@end
