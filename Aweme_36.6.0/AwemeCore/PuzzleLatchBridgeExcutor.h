@class NSString, NSMutableDictionary, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface PuzzleLatchBridgeExcutor : NSObject <IESLivePiperProtocol, IESLatchLynxBridgeExcutorProtocol>

@property (retain, nonatomic) NSMutableDictionary *methodHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *methodHandlerMapNew;
@property (readonly, weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)excuteLatchLynxMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (void)registerNewHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (id)publicCallSet;
- (id)protectedSet;
- (id)privateSet;
- (BOOL)isRegisteredMethod:(id)a0;
- (void)excuteLatchLynxMethodSetShellWithMessage:(id)a0 callback:(id /* block */)a1;
- (id)initWithHybridContainer:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
