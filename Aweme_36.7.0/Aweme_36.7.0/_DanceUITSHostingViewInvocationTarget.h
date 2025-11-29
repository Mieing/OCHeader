@interface _DanceUITSHostingViewInvocationTarget : NSProxy

@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
