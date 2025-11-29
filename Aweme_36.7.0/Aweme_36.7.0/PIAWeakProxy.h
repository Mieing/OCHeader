@interface PIAWeakProxy : NSProxy

@property (weak, nonatomic) id object;

+ (id)weakProxy:(id)a0;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (id)description;
- (Class)class;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)isEqual:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (Class)superclass;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
