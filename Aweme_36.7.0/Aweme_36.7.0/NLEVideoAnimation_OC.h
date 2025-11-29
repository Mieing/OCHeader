@class NLESegmentVideoAnimation_OC;

@interface NLEVideoAnimation_OC : NLETimeSpaceNode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLEVideoAnimation> { struct NLEVideoAnimation *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLESegmentVideoAnimation_OC *segmentVideoAnimation;
@property (nonatomic) BOOL isNewAnim;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLEVideoAnimation> { struct NLEVideoAnimation *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;

@end
