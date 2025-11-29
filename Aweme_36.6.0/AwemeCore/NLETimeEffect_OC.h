@class NLESegmentTimeEffect_OC;

@interface NLETimeEffect_OC : NLETimeSpaceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETimeEffect> { struct NLETimeEffect *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegmentTimeEffect_OC *segmentEffect;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETimeEffect> { struct NLETimeEffect *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
