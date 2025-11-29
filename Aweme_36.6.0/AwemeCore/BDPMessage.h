@class BDPMessageHash, Protocol;

@interface BDPMessage : NSObject {
    unsigned int methodCount;
    Protocol *messageKey;
    struct objc_method_description { SEL x0; char *x1; } *methods;
    BDPMessageHash *hashObserver;
}

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

- (void)unregisterMessage:(id)a0;
- (void)registerMessage:(id)a0;
- (id)getObserversArrayForMessageKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end
