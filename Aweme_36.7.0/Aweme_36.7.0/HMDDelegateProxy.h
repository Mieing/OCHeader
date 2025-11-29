@protocol HMDUITrackable;

@interface HMDDelegateProxy : NSProxy

@property (weak, nonatomic) id target;
@property (readonly, nonatomic) id<HMDUITrackable> consignor;

+ (id)proxyWithTarget:(id)a0 consignor:(id)a1;

- (id)initWithTarget:(id)a0 consignor:(id)a1;
- (void).cxx_destruct;
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
- (void)dealloc;
- (Class)superclass;
- (id)debugDescription;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
