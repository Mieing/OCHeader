@interface NLEHDRFilterLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::HdrFilterLayer> { struct HdrFilterLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppHdrLayer;

- (id)initWithId:(id)a0 resource:(id)a1;
- (id)initWithCPPFilterLayer:(struct shared_ptr<nleimage_api::HdrFilterLayer> { struct HdrFilterLayer *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
