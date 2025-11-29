@class NSMapTable;

@interface ACCStudioInternalSubServiceContainer : NSObject {
    NSMapTable *m_classes;
    NSMapTable *m_services;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } m_lock;
}

@property (copy, nonatomic) id /* block */ config;

- (void)registerClass:(Class)a0 forProtocol:(id)a1;
- (id)serviceOfProtocol:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
