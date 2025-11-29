@class NSMutableDictionary;

@interface BCAABundleServiceCenter : NSObject {
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_servicelock;
    NSMutableDictionary *_bindedServiceMap;
    struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } *_listenerlock;
    NSMutableDictionary *_serviceListeners;
}

+ (id)defaultCenter;

- (id)getBundleNameOfService:(id)a0;
- (id)getInstanceService:(id)a0 fromBundle:(id)a1;
- (Class)getClassService:(id)a0 fromBundle:(id)a1;
- (BOOL)registerService:(id)a0 toClass:(Class)a1 forBundle:(id)a2 instancePointer:(id)a3;
- (BOOL)isServiceRegistered:(id)a0;
- (BOOL)bindService:(id)a0 toBundle:(id)a1;
- (void)broadcastServiceRegistration:(id)a0;
- (void)addServiceListener:(id)a0 forService:(id)a1;
- (void)removeServiceListener:(id)a0 forService:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
