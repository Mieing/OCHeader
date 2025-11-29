@class NSHashTable, Protocol;

@interface BTMDIMessage : NSObject {
    Protocol *p_messageKey;
    NSHashTable *p_hashObserver;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

- (void)unregisterMessage:(id)a0;
- (BOOL)registerMessage:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithKey:(id)a0;
- (id)allObservers;

@end
