@class UIResponder, NSMapTable, AWELiveXBridgeEventSubscriber, AWELiveLifeBridgeRegister, NSNumber;

@interface AWELiveLifeLynxView : AWEPOICubeView

@property (readonly, nonatomic) NSMapTable *timerMap;
@property (retain, nonatomic) AWELiveXBridgeEventSubscriber *skuAddCartSubscriber;
@property (retain, nonatomic) AWELiveXBridgeEventSubscriber *addshoppingCartAnimationSubscriber;
@property (retain, nonatomic) AWELiveXBridgeEventSubscriber *shoppingCartChangedSubscriber;
@property (readonly, nonatomic) AWELiveLifeBridgeRegister *bridgeRegister;
@property (retain, nonatomic) NSNumber *liveLifeGeckoVersion;
@property (weak, nonatomic) UIResponder *btmResponder;

+ (Class)aAWEPadBizUIAdapterClass;

- (id)aAWEPadBizUIAdapter;
- (void)handleJSBroadcast:(id)a0;
- (void)setupBizBeforeCreateLynxView;
- (id)nativeModuleClasses;
- (id)bizCustomUIElementsConfigs;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cubeModel:(id)a1 extraParams:(id)a2 delegate:(id)a3 bridgeRegister:(id)a4;
- (void).cxx_destruct;
- (void)dealloc;

@end
