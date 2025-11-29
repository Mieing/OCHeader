@class NSArray;

@interface NLEComposerFilterLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::ComposerFilterLayer> { struct ComposerFilterLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppComposerLayer;
@property (retain, nonatomic) NSArray *hsl;
@property (retain, nonatomic) NSArray *edit;

- (id)initWithCPPFilterLayer:(struct shared_ptr<nleimage_api::ComposerFilterLayer> { struct ComposerFilterLayer *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithId:(id)a0 edit:(id)a1 hsl:(id)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
