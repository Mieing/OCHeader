@interface YYTextWeakProxy : NSProxy

@property (readonly, weak, nonatomic) id target;

+ (id)proxyWithTarget:(id)a0;

- (id)initWithTarget:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (Class)superclass;
- (Class)class;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)isProxy;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;

@end
