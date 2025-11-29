@interface KindaProxy : NSProxy

@property (weak, nonatomic) id object;

+ (id)proxyWithObject:(id)a0;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;

@end
