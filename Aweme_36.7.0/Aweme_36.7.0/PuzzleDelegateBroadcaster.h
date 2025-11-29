@class Protocol, NSHashTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface PuzzleDelegateBroadcaster : NSProxy {
    NSObject<OS_dispatch_semaphore> *_lock;
    Protocol *_targetProtocol;
    NSHashTable *_subscribers;
}

- (id)initWithTargetProtocol:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
