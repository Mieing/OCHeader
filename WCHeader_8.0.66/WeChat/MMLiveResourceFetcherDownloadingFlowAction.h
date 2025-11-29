@class MMLiveFlowInvocationContext, NSString, MMLiveResourceFetcherTask, MMLiveFlowActionInvocationContext;

@interface MMLiveResourceFetcherDownloadingFlowAction : MMLiveFlowTerminalActionBase

@property (retain, nonatomic) MMLiveResourceFetcherTask *task;
@property (retain, nonatomic) MMLiveFlowInvocationContext *flowInvocationContext;
@property (retain, nonatomic) MMLiveFlowActionInvocationContext *actionInvocationContext;
@property (retain, nonatomic) NSString *internalTaskId;
@property (nonatomic) BOOL useProprietaryProtocol;
@property (nonatomic) BOOL reachedTerminalState;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)invokeWithInput:(id)a0 flowInvocationContext:(id)a1 actionInvocationContext:(id)a2 completionBlock:(id /* block */)a3;
- (void)OnCdnDownload:(id)a0;
- (void)cancelDownloadWithCancelationToken:(id)a0;
- (void).cxx_destruct;

@end
