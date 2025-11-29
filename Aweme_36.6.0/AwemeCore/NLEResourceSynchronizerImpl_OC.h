@interface NLEResourceSynchronizerImpl_OC : NSObject

@property (nonatomic) struct shared_ptr<nle::resource::NLEResourceSynchronizerImpl> { struct NLEResourceSynchronizerImpl *__ptr_; struct __shared_weak_count *__cntrl_; } cppSynchronizer;

- (id)initWithCPPNode:(struct shared_ptr<nle::resource::NLEResourceSynchronizerImpl> { struct NLEResourceSynchronizerImpl *x0; struct __shared_weak_count *x1; })a0;
- (int)fetch:(id)a0 callback:(id)a1;
- (int)push:(id)a0 callback:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
