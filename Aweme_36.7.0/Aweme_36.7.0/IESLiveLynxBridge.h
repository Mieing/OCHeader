@class NSString, BDLynxBridge, NSNumber, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface IESLiveLynxBridge : NSObject <AnnieBridgeSessionDecoratable, BDLynxBridgeListenerDelegate, IESLivePiperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) BDLynxBridge *innerBridge;
@property (retain, nonatomic) NSNumber *enbaleRegisterOptmize;
@property (weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (void)decorateJSBContext:(id)a0 withInfo:(id)a1;

- (void)lynxBridge:(id)a0 willCallEvent:(id)a1;
- (void)lynxBridge:(id)a0 didCallEvent:(id)a1;
- (void)lynxBridge:(id)a0 willHandleMethod:(id)a1;
- (void)lynxBridge:(id)a0 didHandleMethod:(id)a1;
- (void)lynxBridge:(id)a0 willCallback:(id)a1;
- (void)lynxBridge:(id)a0 didCallback:(id)a1;
- (id)initWithInnerBridge:(id)a0 hybridContainer:(id)a1;
- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)registerNewHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (id)publicCallSet;
- (id)protectedSet;
- (id)privateSet;
- (BOOL)isRegisteredMethod:(id)a0;
- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2 oldType:(unsigned long long)a3;
- (BOOL)_shouldApplyRegisterOptmization;
- (void)_annieNewRegisterSessionHandler:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)_annieLegacyRegisterSessionHandler:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
