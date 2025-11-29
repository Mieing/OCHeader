@class NLESegmentAIMatting_OC;

@interface NLEAIMatting_OC : NLETimeSpaceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEAIMatting> { struct NLEAIMatting *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegmentAIMatting_OC *segmentAIMatting;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEAIMatting> { struct NLEAIMatting *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
