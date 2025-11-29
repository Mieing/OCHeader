@interface FPStateReadOnlyProxy : NSProxy

@property (retain, nonatomic) id state;

- (id)initWithWrappedState:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
