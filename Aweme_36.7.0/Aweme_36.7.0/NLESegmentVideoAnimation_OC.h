@class NSString, NLEResourceNode_OC;

@interface NLESegmentVideoAnimation_OC : NLESegment_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentVideoAnimation> { struct NLESegmentVideoAnimation *x0; struct __shared_weak_count *x1; } cppValue;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKVideoAnimation;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } animationDuration;
@property (copy, nonatomic) NSString *animJsonParam;

+ (id)videoAnimationCppVideoAnimation:(struct shared_ptr<cut::model::NLESegmentVideoAnimation> { struct NLESegmentVideoAnimation *x0; struct __shared_weak_count *x1; })a0;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentVideoAnimation> { struct NLESegmentVideoAnimation *x0; struct __shared_weak_count *x1; })a0;
- (id)getResNode;
- (void).cxx_destruct;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getDuration;
- (id)init;

@end
