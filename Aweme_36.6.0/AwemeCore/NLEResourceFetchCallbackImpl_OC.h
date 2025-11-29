@interface NLEResourceFetchCallbackImpl_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::resource::NLEResourceFetchCallback> { struct NLEResourceFetchCallback *__ptr_; struct __shared_weak_count *__cntrl_; } cppFetch;

- (id)initWithCPPNode:(struct shared_ptr<nle::resource::NLEResourceFetchCallback> { struct NLEResourceFetchCallback *x0; struct __shared_weak_count *x1; })a0;
- (void)onReourceId:(id)a0 success:(id)a1;
- (void)onProgress:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)onError:(int)a0;

@end
