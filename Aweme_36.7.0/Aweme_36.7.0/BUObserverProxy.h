@class NSMutableSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface BUObserverProxy : NSObject {
    id _observer;
    id _observeredObj;
    NSMutableSet *_keypaths;
    NSObject<OS_dispatch_semaphore> *_semaphoreForKeyPath;
}

- (id)initWithObserver:(id)a0 observeredObj:(id)a1;
- (void)proxy_addKeyPath:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (void)proxy_removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)removeSelfOberseringWhenSelfDealloc;
- (void)removeSelfObserveringInfoWithObserveredObject:(id)a0;
- (void)proxy_removeObersersWhenObserveredObjectDealloc:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
