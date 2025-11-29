@interface LVEffectResourceDownloadOperation : LVResourceDownloadOperation

@property (nonatomic) struct shared_ptr<cut::FetchEffectRequest> { struct FetchEffectRequest *__ptr_; struct __shared_weak_count *__cntrl_; } request;

- (BOOL)checkExitInLocalDataSource;
- (void)resourceRequest:(struct shared_ptr<cut::FetchEffectRequest> { struct FetchEffectRequest *x0; struct __shared_weak_count *x1; })a0 result:(id)a1;
- (void)finishWithError:(id)a0 effectInfo:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)main;

@end
