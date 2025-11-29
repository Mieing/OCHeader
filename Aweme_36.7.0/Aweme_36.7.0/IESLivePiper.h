@class NSString, NSMutableSet, IESPiper, UIView;
@protocol IESBridgeEngineDelegate, IESLiveHybridContainerProtocol;

@interface IESLivePiper : NSObject <AnnieBridgeSessionDecoratable, IESBridgeEngineInterceptor, IESLivePiperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESPiper *innerBridge;
@property (nonatomic) BOOL enableAuth;
@property (retain, nonatomic) NSMutableSet *registeredMethods;
@property (retain, nonatomic) id<IESBridgeEngineDelegate> iesBridgeEngineDelegate;
@property (weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybridContainer;
@property (nonatomic) BOOL enableLazyLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (void)decorateJSBContext:(id)a0 withInfo:(id)a1;
+ (id)piperClass;

- (id)initWithInnerBridge:(id)a0 hybridContainer:(id)a1;
- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)registerNewHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (BOOL)isRegisteredMethod:(id)a0;
- (id)initWithInnerBridge:(id)a0;
- (void)_annieLazyRegisterSessionHandler:(id /* block */)a0 method:(id)a1 authType:(unsigned long long)a2;
- (void)_annieRegisterSessionHandler:(id /* block */)a0 method:(id)a1 authType:(unsigned long long)a2;
- (void)resetPiperEngineDelegate:(id)a0;
- (BOOL)jsbLazyLoadEnableForH5:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)dealloc;

@end
