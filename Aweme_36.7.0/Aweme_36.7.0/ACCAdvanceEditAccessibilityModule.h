@protocol DVEEditingContextProtocol, DVEComponentViewManagerProtocol;

@interface ACCAdvanceEditAccessibilityModule : DVEFeatureModule

@property (weak, nonatomic) id<DVEComponentViewManagerProtocol> bottomComponentManager;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;

- (void)setupObserver;
- (void)moduleDidMount;
- (void).cxx_destruct;

@end
