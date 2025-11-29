@interface NLELinearLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::LinearLayer> { struct LinearLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppLinearLayer;

- (id)initWithCPPLinearLayer:(struct shared_ptr<nleimage_api::LinearLayer> { struct LinearLayer *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
