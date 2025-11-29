@class NSMutableDictionary, NSDictionary, AnnieExtensionBasedOnBDXProxy, UIView, NSMutableSet, NSString;
@protocol IESLiveHybridContainerProtocol, BDXViewContainerProtocol;

@interface AnnieLatchBridgeExcutor : NSObject <IESLivePiperProtocol, IESLatchLynxBridgeExcutorProtocol>

@property (weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybridContainer;
@property (weak, nonatomic) id<BDXViewContainerProtocol> container;
@property (retain, nonatomic) AnnieExtensionBasedOnBDXProxy *annieProxy;
@property (retain, nonatomic) NSMutableDictionary *tempHandlerRegisterMap;
@property (copy, nonatomic) NSDictionary *methodToHandlersOld;
@property (copy, nonatomic) NSDictionary *methodToHandlersNew;
@property (retain, nonatomic) NSMutableSet *bridgeHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (id)initWithContainer:(id)a0 kitView:(id)a1 annieProxy:(id)a2;
- (void)excuteLatchLynxMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (void)registerNewHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (id)publicCallSet;
- (id)protectedSet;
- (id)privateSet;
- (BOOL)isRegisteredMethod:(id)a0;
- (void)excuteLatchLynxMethodSetShellWithMessage:(id)a0 callback:(id /* block */)a1;
- (id)initWithContainer:(id)a0 kitView:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
