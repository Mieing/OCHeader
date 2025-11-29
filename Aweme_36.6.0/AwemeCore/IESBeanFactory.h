@class NSLock, NSMapTable;

@interface IESBeanFactory : NSObject {
    NSMapTable *_registry;
    NSMapTable *_classRegistry;
    NSMapTable *_providerRegistry;
    NSLock *_lock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rw_lock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } class_rw_lock;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } provider_rw_lock;
}

- (id)objectWithProtocol:(id)a0 protocolName:(id)a1;
- (BOOL)use:(id)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (id)objectWithProtocol:(id)a0;
- (BOOL)useProvider:(id /* block */)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (id)serviceKeyWithProtocol:(id)a0;
- (void)toTryLock:(long long)a0 read:(BOOL)a1;
- (void)toTryUnlcok:(long long)a0;
- (BOOL)useClass:(Class)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (void)toLock:(BOOL)a0;
- (void)toUnlcok;
- (BOOL)removeObject:(id)a0 forProtocol:(id)a1 protocolName:(id)a2;
- (id)singletonObjectWithProtocol:(id)a0 protocolName:(id)a1;
- (id)prototypeObjectWithProtocol:(id)a0 protocolName:(id)a1;
- (BOOL)useProvider:(id /* block */)a0 forProtocol:(id)a1;
- (BOOL)useClass:(Class)a0 forProtocol:(id)a1;
- (BOOL)use:(id)a0 forProtocol:(id)a1;
- (BOOL)removeObject:(id)a0 forProtocol:(id)a1;
- (id)singletonObjectWithProtocol:(id)a0;
- (id)prototypeObjectWithProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
