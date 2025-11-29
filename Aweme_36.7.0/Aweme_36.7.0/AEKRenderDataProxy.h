@interface AEKRenderDataProxy : NSProxy

@property (retain, nonatomic) id target;

- (BOOL)isNotSetterSEL:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
