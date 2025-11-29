@interface ACCMulticastDelegate : NSObject

@property (copy, nonatomic) id /* block */ targets;
@property (copy, nonatomic) id /* block */ perfTrackBlock;

- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithTargets:(id /* block */)a0;
- (BOOL)isProxy;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)doNothing;

@end
