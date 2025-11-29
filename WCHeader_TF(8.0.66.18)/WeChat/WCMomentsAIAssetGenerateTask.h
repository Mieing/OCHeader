@interface WCMomentsAIAssetGenerateTask : MJAIAssetGenerateTask

- (id)initWithRequest:(id)a0 timeoutInterval:(double)a1;
- (void)dealloc;
- (void)submitWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)queryWithTaskID:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelWithTaskID:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerBypNotification;
- (void)momentsDidGenerateAIAssets:(id)a0;

@end
