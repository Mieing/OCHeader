@class NLESegmentEffect_OC;

@interface NLEEffect_OC : NLETimeSpaceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEVideoEffect> { struct NLEVideoEffect *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegmentEffect_OC *segmentEffect;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEVideoEffect> { struct NLEVideoEffect *x0; struct __shared_weak_count *x1; })a0;
- (id)getKeyframe;
- (void).cxx_destruct;
- (id)init;

@end
