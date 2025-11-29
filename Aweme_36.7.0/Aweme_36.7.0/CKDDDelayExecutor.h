@class NSArray;

@interface CKDDDelayExecutor : CKDDProtoProxy

@property (retain) NSArray *delayedInvocations;
@property (copy, nonatomic) id /* block */ actionInvoked;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
