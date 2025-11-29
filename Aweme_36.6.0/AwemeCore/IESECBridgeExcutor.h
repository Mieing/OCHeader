@class NSString, NSMutableDictionary, UIView;
@protocol IESLiveHybridContainerProtocol;

@interface IESECBridgeExcutor : NSObject <IESLivePiperProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _wrLock;
}

@property (retain, nonatomic) NSMutableDictionary *methodHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *methodHandlerMapNew;
@property (readonly, weak, nonatomic) UIView<IESLiveHybridContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)registerNewHandlerBlock:(id /* block */)a0 forMethod:(id)a1 authType:(unsigned long long)a2;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (id)publicCallSet;
- (id)protectedSet;
- (id)privateSet;
- (BOOL)isRegisteredMethod:(id)a0;
- (void)excuteWithName:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)type;
- (void)dealloc;

@end
