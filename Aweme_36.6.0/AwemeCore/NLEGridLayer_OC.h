@interface NLEGridLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::GridLayer> { struct GridLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppGridLayer;
@property (nonatomic) double border;

- (id)initWithCPPGridLayer:(struct shared_ptr<nleimage_api::GridLayer> { struct GridLayer *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
