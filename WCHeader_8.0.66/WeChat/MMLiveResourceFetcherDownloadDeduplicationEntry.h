@class MMLiveResourceFetcherDownloadDeduplicationFlowAction, NSString, NSMutableDictionary, MMLiveResourceFetcherTask;

@interface MMLiveResourceFetcherDownloadDeduplicationEntry : NSObject <MMLiveResourceFetcherTaskExt>

@property (readonly, nonatomic) NSString *uri;
@property (retain, nonatomic) MMLiveResourceFetcherTask *spearheadTask;
@property (retain, nonatomic) NSMutableDictionary *invocations;
@property (weak, nonatomic) MMLiveResourceFetcherDownloadDeduplicationFlowAction *associatedAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTask:(id)a0;
- (void)startWithFlowInvocationContext:(id)a0 actionInvocationContext:(id)a1 completionBlock:(id /* block */)a2;
- (void)addInvocation:(id)a0;
- (void)completeSuccessfully:(BOOL)a0 spearheadTask:(id)a1 flowInvocationContext:(id)a2 actionInvocationContext:(id)a3;
- (void)onResourceFetcherTaskPriorityChanged:(id)a0 previousPriority:(struct { long long x0; long long x1; })a1;
- (void)onResourceFetcherTaskPriorityBatchChanging;
- (void)cancelTaskWithInvocationId:(id)a0;
- (void)reevaluateSpearheadTaskPriority;
- (void).cxx_destruct;

@end
