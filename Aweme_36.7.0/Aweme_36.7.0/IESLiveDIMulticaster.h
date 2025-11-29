@class Protocol, IESLiveDI, NSHashTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLiveDIMulticaster : NSProxy {
    NSObject<OS_dispatch_semaphore> *_lock;
    Protocol *_targetProtocol;
    NSHashTable *_subscribers;
    IESLiveDI *_attachDI;
}

- (id)initWithTargetProtocol:(id)a0 attachDI:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0 direction:(unsigned long long)a1;
- (id)p_getParentMethodSignatureForSelector:(SEL)a0 parentDI:(id)a1;
- (id)p_getChildMethodSignatureForSelector:(SEL)a0 childDIs:(id)a1;
- (void)forwardInvocation:(id)a0 direction:(unsigned long long)a1;
- (void)p_parentForwardInvocation:(id)a0 parentDI:(id)a1;
- (void)p_childForwardInvocation:(id)a0 childDIs:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (void)addSubscriber:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
