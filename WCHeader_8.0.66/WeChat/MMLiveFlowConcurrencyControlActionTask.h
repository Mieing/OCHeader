@class MMLiveFlowInvocationContext, MMLiveFlowActionInvocationContext;

@interface MMLiveFlowConcurrencyControlActionTask : NSObject

@property (retain, nonatomic) id input;
@property (retain, nonatomic) MMLiveFlowInvocationContext *flowInvocationContext;
@property (retain, nonatomic) MMLiveFlowActionInvocationContext *actionInvocationContext;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
