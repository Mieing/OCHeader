@class NLESegmentMask_OC;

@interface NLEMask_OC : NLETimeSpaceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEMask> { struct NLEMask *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegmentMask_OC *segmentMask;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEMask> { struct NLEMask *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
