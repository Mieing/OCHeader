@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESECOrderSavedEventChainManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *savedMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;

- (void)saveEventChain:(id)a0 listenerName:(id)a1;
- (void)removeSaveEventChainsWithListenerName:(id)a0 eventChainKeys:(id)a1;
- (void)removeNotSingleForeverEventChainsWithListenerName:(id)a0;
- (void)removeAllSavedEventChains;
- (id)getEventChainsWithListenerName:(id)a0;
- (id)getAllListenerNames;
- (BOOL)isEmptySavedEventChainForListenerName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
