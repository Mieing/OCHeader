@class NSLock, NSMutableDictionary;

@interface ICHShieldObserverSentinel : NSObject {
    Class _observerClass;
    NSMutableDictionary *_observations;
    NSLock *_lock;
}

- (void)addObservee:(id)a0 forKeyPath:(id)a1;
- (void)crashshield_addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)crashshield_removeObserver:(id)a0 forKeyPath:(id)a1;
- (void)removeObservee:(id)a0 forKeyPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
