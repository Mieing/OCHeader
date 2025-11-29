@class NLEResourceNode_OC;

@interface NLESegmentTransition_OC : NLESegment_OC {
    struct shared_ptr<cut::model::NLESegmentTransition> { struct NLESegmentTransition *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentTransition> { struct NLESegmentTransition *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) BOOL overlap;
@property (nonatomic) BOOL timeChange;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } transitionDuration;
@property (retain, nonatomic) NLEResourceNode_OC *effectSDKTransition;
@property (nonatomic) unsigned long long mediaTransType;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })dve_transitionRequireMinDuration;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentTransition> { struct NLESegmentTransition *x0; struct __shared_weak_count *x1; })a0;
- (id)getResNode;
- (void).cxx_destruct;
- (unsigned long long)getType;
- (id)init;
- (id).cxx_construct;

@end
