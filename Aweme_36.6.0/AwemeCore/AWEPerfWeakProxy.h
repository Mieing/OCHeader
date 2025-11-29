@interface AWEPerfWeakProxy : NSProxy

@property (weak, nonatomic) id target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
