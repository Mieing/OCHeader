@class MMLiveFlowInvocationContext, MMLiveFlowCancelationActionRegistration, MMLiveResourceFetcherTask, MMLiveFlowActionInvocationContext;

@interface MMLiveResourceFetcherQueueingFlowActionTask : NSObject

@property (retain, nonatomic) MMLiveResourceFetcherTask *fetcherTask;
@property (retain, nonatomic) MMLiveFlowInvocationContext *flowInvocationContext;
@property (retain, nonatomic) MMLiveFlowActionInvocationContext *actionInvocationContext;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) MMLiveFlowCancelationActionRegistration *cancelationActionRegistration;

- (void).cxx_destruct;

@end
