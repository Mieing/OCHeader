@interface OVCOnDemandPreprocManager : NSObject {
    struct SharedPtr<XVIOnDemandPreprocManager> { struct XVIOnDemandPreprocManager *_ptr; } _backingService;
}

- (id)initWithBackingService:(struct SharedPtr<XVIOnDemandPreprocManager> { struct XVIOnDemandPreprocManager *x0; })a0;
- (id)sendProcessingTask:(id)a0 withTaskPrepareCompletionHandler:(id /* block */)a1 taskStateUpdateHandler:(id /* block */)a2;
- (void)cancelProcessingTask:(id)a0;
- (struct SharedPtr<XVIPreprocTask> { struct XVIPreprocTask *x0; })prepareTask:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
