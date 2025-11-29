@class NSHashTable, Protocol;

@interface IESLiveLinkMultiCaster : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (retain, nonatomic) Protocol *protocol;
@property (retain, nonatomic) NSHashTable *observers;

- (id)initWithProtocol:(id)a0 shouldRetain:(BOOL)a1;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)initWithProtocol:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)allObservers;
- (void)forwardInvocation:(id)a0;

@end
