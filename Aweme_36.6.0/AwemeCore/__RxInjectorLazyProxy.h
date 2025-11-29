@class NSArray;
@protocol RxInjectorProvider, RxInjector, NSLocking;

@interface __RxInjectorLazyProxy : NSProxy {
    id<NSLocking> _lock;
    id _target;
    id<RxInjectorProvider> _provider;
    id<RxInjector> _injector;
    NSArray *_arguments;
}

+ (id)proxyWithProvider:(id)a0 arguments:(id)a1 injector:(id)a2;

- (id)dynamicCast:(Class)a0;
- (void).cxx_destruct;
- (id)description;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)target;
- (BOOL)isEqual:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)superclass;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (id)currentTarget;

@end
