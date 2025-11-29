@interface FPStateProxy : NSProxy

@property (retain, nonatomic) id state;
@property (copy, nonatomic) id /* block */ handler;

- (id)initWithWrappedState:(id)a0 didSetPropertyHandler:(id /* block */)a1;
- (id)obtainPropertyNameFromSetter:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
