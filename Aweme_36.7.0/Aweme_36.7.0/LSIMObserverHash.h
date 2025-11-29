@class NSMutableDictionary;

@interface LSIMObserverHash : NSObject

@property (retain, nonatomic) NSMutableDictionary *pHash;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

- (void)registerObserver:(id)a0 forKey:(id)a1;
- (id)getObserverListForKey:(id)a0;
- (void)p_registerObserver:(id)a0 forKey:(id)a1;
- (void)p_unregisterObserver:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)unregisterObserver:(id)a0 forKey:(id)a1;

@end
