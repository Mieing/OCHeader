@interface NLESegmentTimeEffect_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentTimeEffect> { struct NLESegmentTimeEffect *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) unsigned long long timeEffectType;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentTimeEffect> { struct NLESegmentTimeEffect *x0; struct __shared_weak_count *x1; })a0;
- (unsigned long long)getType;
- (id)init;

@end
