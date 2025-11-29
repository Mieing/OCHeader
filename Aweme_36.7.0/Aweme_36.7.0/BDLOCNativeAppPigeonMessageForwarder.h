@class NSMapTable;

@interface BDLOCNativeAppPigeonMessageForwarder : NSObject

@property (retain, nonatomic) NSMapTable *forwardDelegates;

- (id)methodAllowList;
- (void)forwardInvocationWithMethod:(id)a0 args:(id)a1 callback:(id /* block */)a2;
- (id)delegateForApp:(id)a0;
- (void)addObserver:(id)a0 forApp:(id)a1;
- (void)removeObserverForApp:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
