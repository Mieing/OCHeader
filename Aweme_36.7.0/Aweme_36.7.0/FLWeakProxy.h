@interface FLWeakProxy : NSProxy

@property (weak, nonatomic) id target;

+ (id)weakProxyForObject:(id)a0;

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
