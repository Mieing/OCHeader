@interface TingSafeWeakProxy : NSProxy

@property (weak, nonatomic) id object;
@property (retain, nonatomic) id innerWeakContextObject;

- (id)initWithObject:(id)a0;
- (BOOL)isValidStatus;
- (id)obj;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)returnNil;
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
