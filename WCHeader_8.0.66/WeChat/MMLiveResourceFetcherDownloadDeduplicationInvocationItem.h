@class MMLiveFlowInvocationContext, MMLiveFlowCancelationActionRegistration, MMLiveResourceFetcherTask, MMLiveFlowActionInvocationContext;

@interface MMLiveResourceFetcherDownloadDeduplicationInvocationItem : NSObject

@property (retain, nonatomic) MMLiveResourceFetcherTask *task;
@property (retain, nonatomic) MMLiveFlowInvocationContext *flowInvocationContext;
@property (retain, nonatomic) MMLiveFlowActionInvocationContext *actionInvocationContext;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) MMLiveFlowCancelationActionRegistration *cancelationRegistration;

- (void).cxx_destruct;

@end
