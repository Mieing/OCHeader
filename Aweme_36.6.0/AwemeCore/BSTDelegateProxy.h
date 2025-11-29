@class BSTDelegateProxyFallback;

@interface BSTDelegateProxy : NSProxy

@property (retain, nonatomic) BSTDelegateProxyFallback *fallback;
@property (readonly, weak, nonatomic) id target;

+ (id)realDelegate:(id)a0 toSelector:(SEL)a1;
+ (BOOL)realDelegateClass:(Class)a0 respondsToSelector:(SEL)a1;
+ (id)proxyWithTarget:(id)a0;

- (void)redirectToDebugger:(id)a0;
- (void)changeTarget:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)description;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)isEqual:(id)a0;
- (Class)superclass;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
