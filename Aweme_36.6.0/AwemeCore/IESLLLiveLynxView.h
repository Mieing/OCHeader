@class UIResponder, NSMapTable, IESLLLiveBridgeRegister, IESLLLiveXBridgeEventSubscriber, NSNumber;

@interface IESLLLiveLynxView : LLCubeView

@property (readonly, nonatomic) NSMapTable *timerMap;
@property (retain, nonatomic) IESLLLiveXBridgeEventSubscriber *skuAddCartSubscriber;
@property (retain, nonatomic) IESLLLiveXBridgeEventSubscriber *addshoppingCartAnimationSubscriber;
@property (retain, nonatomic) IESLLLiveXBridgeEventSubscriber *shoppingCartChangedSubscriber;
@property (readonly, nonatomic) IESLLLiveBridgeRegister *bridgeRegister;
@property (retain, nonatomic) NSNumber *liveLifeGeckoVersion;
@property (weak, nonatomic) UIResponder *btmResponder;

- (void)handleJSBroadcast:(id)a0;
- (void)setupBizBeforeCreateLynxView;
- (id)nativeModuleClasses;
- (id)bizCustomUIElementsConfigs;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cubeModel:(id)a1 extraParams:(id)a2 delegate:(id)a3 bridgeRegister:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;

@end
