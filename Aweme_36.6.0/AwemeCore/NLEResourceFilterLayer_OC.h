@class NLEResource_OC;

@interface NLEResourceFilterLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::ResourceFilterLayer> { struct ResourceFilterLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppFilterLayer;
@property (retain, nonatomic) NLEResource_OC *resource;
@property (nonatomic) double value;
@property (nonatomic) BOOL compatibleSlide;

- (id)initWithId:(id)a0 resource:(id)a1 value:(double)a2;
- (id)initWithCPPFilterLayer:(struct shared_ptr<nleimage_api::ResourceFilterLayer> { struct ResourceFilterLayer *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
