@interface NLEImageChain_OC : NSObject

@property (nonatomic) struct shared_ptr<nleimage_api::NLEImageChain> { struct NLEImageChain *__ptr_; struct __shared_weak_count *__cntrl_; } cppImageChain;

- (id)initWithCPPImageChain:(struct shared_ptr<nleimage_api::NLEImageChain> { struct NLEImageChain *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
