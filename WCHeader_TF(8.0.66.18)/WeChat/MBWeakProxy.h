@interface MBWeakProxy : NSObject

@property (weak, nonatomic) id target;

+ (id)proxyWithTarget:(id)a0;

- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;

@end
