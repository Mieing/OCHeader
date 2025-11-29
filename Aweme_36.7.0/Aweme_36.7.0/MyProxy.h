@interface MyProxy : NSProxy

@property (weak, nonatomic) id target;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
