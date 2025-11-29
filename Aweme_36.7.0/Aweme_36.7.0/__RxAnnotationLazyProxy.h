@class NSString;

@interface __RxAnnotationLazyProxy : NSProxy {
    long long _token;
    id /* block */ _executor;
    id _target;
    NSString *_name;
    NSString *_identifier;
}

+ (id)lazy:(id /* block */)a0 identifier:(id)a1 name:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)target;
- (id)identifier;
- (BOOL)isEqual:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)superclass;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)self;
- (id)performSelector:(SEL)a0;
- (id)performSelector:(SEL)a0 withObject:(id)a1;
- (id)performSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;

@end
