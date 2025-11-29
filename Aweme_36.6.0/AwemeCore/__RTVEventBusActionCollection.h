@class NSString, NSMapTable;

@interface __RTVEventBusActionCollection : NSObject <RTVEventBusRegisterProtocol> {
    struct Mutex { int _type; union { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _plain; struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _recursive; } ; } _accessLock;
}

@property (retain, nonatomic) NSMapTable *registeredActionTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAction:(id)a0 forEventKey:(id)a1;
- (id)actionsForEvent:(id)a0;
- (void)removeActionKey:(id)a0 withEventKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
